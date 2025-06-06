#pragma once
#include "Form.hpp"

class PresidentialPardonForm : public Form 
{
private:
    std::string target;
public:
    // Constructor
    PresidentialPardonForm();
    PresidentialPardonForm(std::string target);

    // Destructor
    ~PresidentialPardonForm();

    // Copy Constructor
    PresidentialPardonForm(const PresidentialPardonForm& other);

    // Assignment Operator Overload
    PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
    bool execute(Bureaucrat const & executor) const;
    void presidentialPardon() const;
};