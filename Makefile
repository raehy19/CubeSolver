NAME := solve

CC := cc
CFLAGS := -Wall -Wextra -Werror -MMD -MP -O3
RM := rm -f

all : $(NAME)

SRCS := \
	CubeSolver.c \


OBJS := \
	$(SRCS:.c=.o)

DEPS := \
	$(SRCS:.c=.d)

-include $(DEPS)

clean :
	$(RM) $(OBJS)
	$(RM) $(DEPS)

fclean : clean
	$(RM) $(NAME)

re : fclean
	make all

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY : all clean fclean re
