SRC= contact.cpp phonebook.cpp

FLAGS= c++ -Wall -Wextra -Werror

NAME= phonebook

all:		$(NAME)

$(NAME):	$(SRC)
			$(FLAGS) ${SRC} -o $(NAME)

clean:
			rm -f $(NAME)

fclean:		clean

re:			clean all

.PHONY:		all clean fclean re