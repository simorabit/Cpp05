#include "AForm.hpp"

// Constructor
AForm::AForm(int grade, int gradeExec, std::string name) : name(name),grade(grade), gradeExec(gradeExec)
{
    this->isSigned = false;
}
AForm::AForm() : name("default"),grade(0), gradeExec(0)
{
    this->isSigned = false;
    // Initialization
}

// Destructor
AForm::~AForm()
{
    // Cleanup
}

// Copy Constructor
AForm::AForm(const AForm &other):name(other.name), grade(other.grade) , gradeExec(other.gradeExec)
{
    *this = other;
}

// Assignment Operator Overload
AForm &AForm::operator=(const AForm &other)
{
    if (this != &other)
    {
        this->isSigned = other.isSigned;
        // Free existing resources
        // Copy members from 'other'
    }
    return *this;
}

int AForm::getGrade() const
{
    return this->grade;
}
int AForm::getGradeExec() const
{
    return this->gradeExec;
}

bool AForm::getIsSigned() const
{
    return this->isSigned;
}

std::string AForm::getName() const
{
    return this->name;
}

bool AForm::validateGrade(int bGrade, int formGrade) const
{
    if (bGrade < 1)
        throw GradeTooHighException();
    else if (bGrade > formGrade)
        throw GradeTooLowException();
    return true;
}

void AForm::beSigned(Bureaucrat &b)
{
    if (validateGrade(b.getGrade(), this->grade))
        this->isSigned = true;
}



std::ostream& operator<<(std::ostream &oc, const AForm &form)
{
    oc
    << "---------------------------------------" << std::endl 
    << "Form            : " << form.getName() << std::endl
    << "Sign Grade      : " << form.getGrade() << std::endl
    << "Grade Execution : " << form.getGradeExec() << std::endl
    << "Signed          : " << (form.getIsSigned() ? "Yes" : "No") << std::endl
    << "---------------------------------------" << std::endl ;
    return oc;
}