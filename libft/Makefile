NAME		=	libft.a

DEP			= 	$(wildcard *.h) Makefile

SOURCES		=	$(wildcard *.c)

BONUS		=	$(wildcard ft_lst*.c)

FILTER		=	$(filter-out $(BONUS), $(SOURCES))
				
OBJS		=	$(FILTER:.c=.o)

OBJS_B		=	$(BONUS:.c=.o)

CC			=	cc

RM			=	rm -f

CFLAGS		=	-Wall -Wextra -Werror

AR			=	ar rcs

%.o: %.c
			$(CC) $(CFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS) $(DEP)
				$(AR) $(NAME) $(OBJS)

bonus:		$(OBJS_B)
				$(AR) $(NAME) $(OBJS_B)

clean:		
				$(RM) $(OBJS) $(OBJS_B)

fclean:		clean
				$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all bonus clean fclean re