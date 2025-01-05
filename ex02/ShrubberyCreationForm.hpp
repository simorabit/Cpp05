#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
    std::string target; 
public:
    // Constructor
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);

    // Destructor
    ~ShrubberyCreationForm();

    // Copy Constructor
    ShrubberyCreationForm(const ShrubberyCreationForm &other);

    // Assignment Operator Overload
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
    bool execute(Bureaucrat const & executor) const;
    void    createAsciiTree() const;
};