#include "Bureaucrat.hpp"
#include "Form.hpp"

// Constructor
Bureaucrat::Bureaucrat() : name("bureacrat")
{
    this->grade = 0;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
    if (validateGrade(grade))
        this->grade = grade;
}

// Destructor
Bureaucrat::~Bureaucrat()
{
    // Cleanup
}

// Copy Constructor
Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
    // Copy members
    *this = other;
}

// Assignment Operator Overload
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    if (this != &other)
    {
        this->grade = other.grade;
    }
    return *this;
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}

void Bureaucrat::setGrade(int grade)
{
    if(validateGrade(grade))
        this->grade = grade;
}

std::string Bureaucrat::getName() const
{
    return this->name;
}

bool Bureaucrat::increment()
{
    if (validateGrade(this->grade - 1))
    {
        this->grade--;
        return true;
    }
    return false;
}

bool Bureaucrat::decrement()
{
    if (validateGrade(this->grade + 1))
    {
        this->grade++;
        return true;
    }
    return false;
}

bool Bureaucrat::validateGrade(int grade) const
{
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    return true;
}

// void Bureaucrat::executeForm(Form const & form)
// {
//     if(form.execute(*this))
//         std::cout << this->name  << " executed " << form.getName() << std::endl;
//     else
//         std::cout << this->name  << " cannot execute " << form.getName() << std::endl;
// }

std::ostream& operator<<(std::ostream &oc, const Bureaucrat &b)
{
     oc
    << "---------------------------------------" << std::endl 
    << "Bureaucrat name : " << b.getName() << std::endl
    << "Grade           : " << b.getGrade() << std::endl
    << "---------------------------------------" << std::endl ;
    return oc;
}