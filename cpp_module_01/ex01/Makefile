SRC= Zombie.cpp main.cpp zombiehorde.cpp

FLAGS= g++ -Wall -Wextra -Werror

NAME= zombie

all:		$(NAME)

$(NAME):	$(SRC)
			$(FLAGS) ${SRC} -o $(NAME)

clean:
			rm -f $(NAME)

fclean:		clean

re:			clean all

.PHONY:		all clean fclean re