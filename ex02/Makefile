CPP := c++
FLAGS := -Wall -Wextra -O2 -I..

SRCS := $(wildcard *.cpp)
OBJS := $(SRCS:.cpp=.o)
TARGET := ex02

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
