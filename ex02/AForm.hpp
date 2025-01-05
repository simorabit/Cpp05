#pragma once
#include "iostream"
#include "Bureaucrat.hpp"
class Bureaucrat; 
class AForm {

private :
    const std::string name;
    const int   grade;
    const int   gradeExec;
    bool        isSigned;
public:
    // Constructor
    AForm();
    AForm(int grade, int gradeExec, std::string name);

    // Destructor
    ~AForm();

    // Copy Constructor
    AForm(const AForm& other);

    // Assignment Operator Overload
    AForm& operator=(const AForm& other);
    int getGrade() const;
    int getGradeExec() const;
    bool    getIsSigned() const;
    std::string getName() const;
    void beSigned(Bureaucrat &b);
    bool        validateGrade(int bGrade, int formGrade) const;
    virtual bool execute(Bureaucrat const & executor) const = 0;
};


std::ostream& operator<<(std::ostream &oc, const AForm &form);