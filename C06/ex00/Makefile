NAME		=	convert

CC			=	clang++

FLAGS		=	-Wall -Werror -Wextra

SRC			=	main.cpp convert.cpp write_conv.cpp

OBJ			=	$(SRC:.cpp=.o)

INC			=	convert.hpp

all			:	$(NAME)

$(NAME)		:	$(OBJ) $(INC)
				$(CC) $(FLAGS) $(SRC) -o $(NAME)

%.o			:	%.cpp $(INC)
				$(CC) $(FLAGS) -c $< -o $@

clean		:
				rm -rf *.o

fclean		:	clean
				rm -rf $(NAME)