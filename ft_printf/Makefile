HEADER = ft_printf.h

SRCS = 	ft_putnbr_dec.c ft_putptr.c ft_printf.c ft_putchar.c ft_puthexa.c \
		ft_putnbr_unsigned.c ft_putstr.c

OBJS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror 
NAME = libftprintf.a

all: $(NAME)
	
$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

%.o: %.c $(HEADER)
	${CC} ${CFLAGS} -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean $(NAME)