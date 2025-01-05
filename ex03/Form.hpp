#pragma once
#include "iostream"
#include "Bureaucrat.hpp"
class Bureaucrat; 
class Form {

private :
    const std::string name;
    const int   grade;
    const int   gradeExec;
    bool        isSigned;
public:
    // Constructor
    Form();
    Form(int grade, int gradeExec, std::string name);

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
    void signForm();
    bool        validateGrade(int bGrade, int formGrade) const;
};

std::ostream& operator<<(std::ostream &oc, const Form &form);