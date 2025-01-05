#include "PresidentialPardonForm.hpp"

// Constructor
PresidentialPardonForm::PresidentialPardonForm() : Form()
{
    // Initialization
    
}
PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(25, 45, "PresidentialPardonForm") ,target(target) 
{
    // Initialization
    
}

// Destructor
PresidentialPardonForm::~PresidentialPardonForm() {
    // Cleanup
}

// Copy Constructor
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) :Form(25, 45, other.getName())
{
    *this  = other;
}

// Assignment Operator Overload
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
    if (this != &other) {
        this->target = other.target;
        // Free existing resources
        // Copy members from 'other'
    }
    return *this;
}

void PresidentialPardonForm::presidentialPardon() const
{
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}


bool PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if(this->getIsSigned() && 
        this->validateGrade(executor.getGrade(), this->getGradeExec()))
    {
        //do needed work
        presidentialPardon();
        return true;
    }
    return false;
}