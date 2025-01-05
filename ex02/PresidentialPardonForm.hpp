
#include "AForm.hpp"

class PresidentialPardonForm : public AForm 
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