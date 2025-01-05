#include "Bureaucrat.hpp"
#include "iostream"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

void ff()
{
    system("leaks intern");
}
int main()
{
    atexit(ff);
    Intern someRandomIntern;
    Form *rrf;
    Form *rdrf;
    rrf = someRandomIntern.makeForm("Robotomy", "Bender");
    rdrf = someRandomIntern.makeForm("Presidential", "simo");
    delete rrf;
    delete rdrf;
}