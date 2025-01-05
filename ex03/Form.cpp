#include "Form.hpp"

// Constructor
Form::Form(int grade, int gradeExec, std::string name) : name(name),grade(grade), gradeExec(gradeExec)
{
    this->isSigned = false;
}
Form::Form() : name("default"),grade(0), gradeExec(0)
{
    this->isSigned = false;
    // Initialization
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
    if (validateGrade(b.getGrade(), this->grade))
        this->isSigned = true;
}

void Form::signForm()
{
    if(this->isSigned)
        std::cout << "bureaucrat signed form" << std::endl;
    else 
        std::cout << "bureaucrat couldn't sign form because Mcha itghda (sir 7ta lghda)" << std::endl;
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