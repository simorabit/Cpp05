#include "RobotomyRequestForm.hpp"

// Constructor
RobotomyRequestForm::RobotomyRequestForm() :AForm()
{
    // Initialization
}


RobotomyRequestForm::RobotomyRequestForm(std::string target):AForm(72, 45, "RobotomyRequestForm"), target(target){
    // Initialization
}

// Destructor
RobotomyRequestForm::~RobotomyRequestForm() {
    // Cleanup
}

// Copy Constructor
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) {
    *this = other;
}

// Assignment Operator Overload
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
    if (this != &other) {
        this->target = other.target;
        // Free existing resources
        // Copy members from 'other'
    }
    return *this;
}

void RobotomyRequestForm::robotomy() const
{
    std::cout << "bzzz drilling noise" << std::endl;
    if(std::rand() % 2)
        std::cout << this->target << " has been robotomized successfully" << std::endl;
    else
        std::cout << this->target << " has been failed" << std::endl;

}

bool RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if(this->getIsSigned() && 
        this->validateGrade(executor.getGrade(), this->getGradeExec()))
    {
        //do needed work
        robotomy();
        return true;
    }
    return false;
}