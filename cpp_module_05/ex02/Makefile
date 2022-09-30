SRC= main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp

FLAGS= c++ -Wall -Wextra -Werror -std=c++98

NAME= main

all:		$(NAME)

$(NAME):	$(SRC)
			$(FLAGS) ${SRC} -o $(NAME)

clean:
			rm -f $(NAME)

fclean:		clean

re:			clean all

.PHONY:		all clean fclean re