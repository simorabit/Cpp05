#pragma once
#include <iostream>
#include <exception>
#include "Form.hpp"
class Form;
class GradeTooHighException : public std::exception
{
public:
    virtual const char* what() const _NOEXCEPT 
    {
        return "GradeTooHighException: Grade is too high!";
    }
};

class GradeTooLowException : public std::exception
{
public:
    virtual const char* what() const _NOEXCEPT 
    {
        return "GradeTooLowException: Grade is too low!";
    }
};


class Bureaucrat
{
private:
    const std::string name;
    int grade;

public:
    // Constructor
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    
    ~Bureaucrat();

    // Copy Constructor
    Bureaucrat(const Bureaucrat &other);

    // Assignment Operator Overload
    Bureaucrat &operator=(const Bureaucrat &other);
    // getters
    int         getGrade() const;
    std::string getName() const;
    void        setGrade(int grade);
    bool        increment();
    bool        decrement();
    bool        validateGrade(int grade) const;
    // void executeForm(Form const & form);
};

std::ostream& operator<<(std::ostream &oc, const Bureaucrat &b);