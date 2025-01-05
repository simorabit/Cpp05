#pragma once
#include <iostream>
#include <exception>
#include <form.hpp>
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

    // Destructor
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
    bool        validateGrade(int grade);
    void signForm(const Form &form);
};

std::ostream& operator<<(std::ostream &oc, const Bureaucrat &b);