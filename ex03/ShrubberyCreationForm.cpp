#include "ShrubberyCreationForm.hpp"

// Constructor
ShrubberyCreationForm::ShrubberyCreationForm():Form()
{
    // Initialization
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target):Form(145, 137, "ShrubberyCreationForm"), target(target)
{
    // Initialization
}

// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm() {
    // Cleanup
}

// Copy Constructor
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) {
   *this = other;
}

// Assignment Operator Overload
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
    if (this != &other) {
        this->target = other.target;
        // Free existing resources
        // Copy members from 'other'
    }
    return *this;
}

void ShrubberyCreationForm::createAsciiTree() const
{
    int counter  = 0;
    int spaces  = 9;
    const int line = 10;

    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j < spaces; j++)
            std::cout << " ";
        for (int j = 0; j <= counter; j++)
            std::cout << "* ";
        std::cout << std::endl;
        counter++;
        spaces--;
    }
    for (int j = 0; j < line - 1; j++)
        std::cout << " ";
    std::cout << "|" << std::endl;
}
bool ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if(this->getIsSigned() && 
        this->validateGrade(executor.getGrade(), this->getGradeExec()))
    {
        //do needed work
        createAsciiTree();
        return true;
    }
    return false;
}