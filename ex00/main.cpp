#include "Bureaucrat.hpp"
#include "iostream"


int main()
{
    try
    {
        Bureaucrat ber("simo", 1);
        Bureaucrat ber2("simo", -150);
        // ber.setGrade(0);
        ber.increment();
    }
    catch(GradeTooHighException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(GradeTooLowException &e)
    {
        std::cerr << e.what() << std::endl;
    }

    // std::cout << ber.getName() << " grade " << ber.getGrade() << std::endl;
}