#pragma once
#include <string>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


class Intern {
private:
    static const std::string list[3];
    Form* formList[3];
    void    deleteOtherForms(int index);
    void    fillFormsList(std::string target);
    int formIndex;
public:
    // Constructor
    Intern();
    // Destructor
    ~Intern();
    // Copy Constructor
    Intern(const Intern& other);

    // Assignment Operator Overload
    Intern& operator=(const Intern& other);
    Form*  makeForm(std::string name, std::string  target);
    int     findForm(std::string name);
};