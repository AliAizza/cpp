SRC= main.cpp RPN.cpp

FLAGS= c++ -Wall -Wextra -Werror -std=c++98

NAME= RPN

all:		$(NAME)

$(NAME):	$(SRC)
			$(FLAGS) ${SRC} -o $(NAME)

clean:
			rm -f $(NAME)

fclean:		clean

re:			clean all

.PHONY:		all clean fclean re