#include "Bureaucrat.hpp"
#include "iostream"
#include "Form.hpp"

int main()
{
    Form form("chahadat l7ayat", 15, 55);

    Bureaucrat ber("mostapha", 20);
    try
    {
        // ber.setGrade(0);
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
    std::cout << form << std::endl;
    std::cout << ber << std::endl;
}