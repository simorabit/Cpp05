#include "Form.hpp"

// Constructor
Form::Form() :name(""), grade(0) , gradeExec(0), isSigned(false)
{
    // Initialization
}

Form::Form(std::string name, int signGrade, int gradeExec) :name(name), grade(signGrade) , gradeExec(gradeExec), isSigned(false)
{
    validateInputGrade(grade);
    validateInputGrade(gradeExec);
}

// Destructor
Form::~Form()
{
    // Cleanup
}

// Copy Constructor
Form::Form(const Form &other):name(other.name), grade(other.grade) , gradeExec(other.gradeExec)
{
    *this = other;
}

// Assignment Operator Overload
Form &Form::operator=(const Form &other)
{
    if (this != &other)
    {
        this->isSigned = other.isSigned;
        // Free existing resources
        // Copy members from 'other'
    }
    return *this;
}

int Form::getGrade() const
{
    return this->grade;
}
int Form::getGradeExec() const
{
    return this->gradeExec;
}

bool Form::getIsSigned() const
{
    return this->isSigned;
}

std::string Form::getName() const
{
    return this->name;
}

bool Form::validateGrade(int bGrade, int formGrade) const
{
    if (bGrade < 1)
        throw GradeTooHighException();
    else if (bGrade > formGrade)
        throw GradeTooLowException();
    return true;
}

void Form::beSigned(Bureaucrat &b)
{
    // Bureaucrat cc;
    if (validateGrade(b.getGrade(), this->grade))
        this->isSigned = true;
}

bool Form::validateInputGrade(int grade) const
{
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    return true;
}



std::ostream& operator<<(std::ostream &oc, const Form &form)
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