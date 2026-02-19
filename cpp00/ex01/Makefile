NAME = PhoneBook


SOURCES = 	PhoneBook.cpp \
		



OBJECTS = $(SOURCES:.cpp=.o)

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
