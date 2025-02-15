# Adapted from https://spin.atomicobject.com/2016/08/26/makefile-c-projects/
NAME ?= libft.a
SRC_DIRS ?= ./src

SRCS := $(shell find $(SRC_DIRS) -name '*.c')
OBJS := $(addsuffix .o,$(basename $(SRCS)))
DEPS := $(OBJS:.o=.d)

INC_DIRS := $(shell find $(SRC_DIRS) -type d)
INC_FLAGS := $(addprefix -I,$(INC_DIRS))

# TODO: Remove debug flag
CPPFLAGS ?= $(INC_FLAGS) -g -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

# %.c.o: %.c
# 	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(DEPS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean

-include $(DEPS)