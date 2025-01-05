#pragma once
#include "iostream"
#include "Bureaucrat.hpp"

class Form {

private :
    const std::string name;
    const int   grade;
    const int   gradeExec;
    bool        isSigned; 
    bool    validateGrade(int bGrade, int formGrade) const;
    bool    validateInputGrade(int grade) const;
public:
    // Constructor
    Form();
    Form(std::string name, int signGrade, int gradeExec);

    // Destructor
    ~Form();

    // Copy Constructor
    Form(const Form& other);

    // Assignment Operator Overload
    Form& operator=(const Form& other);
    int getGrade() const;
    int getGradeExec() const;
    bool    getIsSigned() const;
    std::string getName() const;
    void beSigned(Bureaucrat &b);
   
};

std::ostream& operator<<(std::ostream &oc, const Form &form);