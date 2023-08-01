

NAME := solve

CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -MMD -MP -O3
RM := rm -f

all : $(NAME)

SRCS := \
	Cube.cpp \
	main.cpp

OBJS := \
	$(SRCS:.cpp=.o)

DEPS := \
	$(SRCS:.cpp=.d)

-include $(DEPS)

clean :
	$(RM) $(OBJS)
	$(RM) $(DEPS)

fclean : clean
	$(RM) $(NAME)

re : fclean
	make all

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o : %.c
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY : all clean fclean re
