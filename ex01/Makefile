CPP := c++
FLAGS := -Wall -Wextra -O2 -I..

SRCS := $(wildcard *.cpp) \
		../ex00/adder.cpp
OBJS := $(SRCS:.cpp=.o)
TARGET := ex01

.PHONY: all clean fclean re

all: $(TARGET)

$(TARGET): $(OBJS)
	@$(CPP) $(FLAGS) -o $(TARGET) $(OBJS)
	@rm -f $(OBJS)

%.o: %.cpp
	@$(CPP) $(FLAGS) -c $< -o $@
clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(TARGET)

re: fclean all
