#pragma once
#include "Form.hpp"

class RobotomyRequestForm : public Form 
{
private:
    std::string target;
public:
    // Constructor
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);

    // Destructor
    ~RobotomyRequestForm();

    // Copy Constructor
    RobotomyRequestForm(const RobotomyRequestForm& other);

    // Assignment Operator Overload
    RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
    bool execute(Bureaucrat const & executor) const;
    void    robotomy() const;
};