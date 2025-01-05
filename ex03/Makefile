CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 #-g -fsanitize=address

SRCS		=	main.cpp Form.cpp Bureaucrat.cpp Intern.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp	ShrubberyCreationForm.cpp

OBJS = $(SRCS:.cpp=.o)

TARGET = intern

all: $(TARGET)

$(TARGET): $(OBJS) 
	$(CC) $(CFLAGS) -o $@ $(OBJS)
	
%.o: %.cpp Bureaucrat.hpp Form.cpp Intern.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp
	$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(TARGET)
    
re: fclean all
