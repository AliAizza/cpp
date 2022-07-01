SRC= main.cpp harl.cpp

FLAGS= c++ -Wall -Wextra -Werror

NAME= main

all:		$(NAME)

$(NAME):	$(SRC)
			$(FLAGS) ${SRC} -o $(NAME)

clean:
			rm -f $(NAME)

fclean:		clean

re:			clean all

.PHONY:		all clean fclean re