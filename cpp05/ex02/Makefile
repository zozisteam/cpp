NAME = Bureaucrat
FILES = main.cpp Bureaucrat.cpp AForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp ShrubberyCreationForm.cpp

OBJ = $(FILES:.cpp=.o)

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

CXX = c++

all: $(NAME) $(OBJ)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re