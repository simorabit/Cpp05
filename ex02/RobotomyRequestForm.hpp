#include "AForm.hpp"

class RobotomyRequestForm : public AForm 
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