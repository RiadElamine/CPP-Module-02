NAME = a.out

SOURCE = main.cpp \
		Fixed.cpp

OBJECT = $(SOURCE:.cpp=.o)

HEARDER = Fixed.hpp

CFLAGS = -Wall -Wextra -Werror -std=c++98

all :$(NAME)

$(NAME): $(OBJECT)
	c++ $(CFLAGS) $(OBJECT) -o $(NAME)

%.o: %.cpp $(HEARDER)
	c++ $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(NAME)

re: fclean all