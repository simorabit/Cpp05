#include "Intern.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

const std::string Intern::list[3] = {"Robotomy", "Presidential", "Shrubbery"};
// Constructor
Intern::Intern()
{
    // Initialization
    for (int i = 0; i < 3; i++)
        this->formList[0] = NULL;
    this->formIndex = -1;
}

// Destructor
Intern::~Intern()
{

}

// Copy Constructor
Intern::Intern(const Intern &other)
{
    *this = other;
}

// Assignment Operator Overload
Intern &Intern::operator=(const Intern &other)
{
    if (this != &other)
    {
        // Free existing resources
        // Copy members from 'other'
    }
    return *this;
}

int Intern::findForm(std::string name)
{
    for (int i = 0; i < 3; i++)
    {
        if (list[i] == name)
            return i;
    }
    return -1;
}
void Intern::deleteOtherForms(int index)
{
    for (int i = 0; i < 3; i++)
    {
        if (i != index)
            delete this->formList[i];
    }
}

void Intern::fillFormsList(std::string target)
{
    this->formList[0] = new RobotomyRequestForm(target);
    this->formList[1] = new PresidentialPardonForm(target);
    this->formList[2] = new ShrubberyCreationForm(target);
}
Form *Intern::makeForm(std::string name, std::string target)
{
    formIndex = findForm(name);
    fillFormsList(target);
    deleteOtherForms(formIndex);
    if (formIndex == -1)
    {
        std::cout << "you should provide the correct Form name" << name << std::endl;
        return NULL;
    }
    std::cout << "Intern Creates " << name << std::endl;
    return Intern::formList[formIndex];
}