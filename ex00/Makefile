CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS		=	main.cpp Bureaucrat.cpp

OBJS = $(SRCS:.cpp=.o)

TARGET = bureaucrat

all: $(TARGET)

$(TARGET): $(OBJS) 
	$(CC) $(CFLAGS) -o $@ $(OBJS)
	
%.o: %.cpp Bureaucrat.hpp
	$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(TARGET)
    
re: fclean all
