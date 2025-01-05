#include "Bureaucrat.hpp"
#include "iostream"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
int main()
{
    ShrubberyCreationForm form("home");

    Bureaucrat ber;
    try
    {
        ber.setGrade(10);
        // ber.decrement();
        form.beSigned(ber);
    }
    catch(GradeTooHighException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(GradeTooLowException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    ber.signForm(form);
    ber.executeForm(form);
    std::cout << ber << std::endl;
    std::cout << form << std::endl;
}