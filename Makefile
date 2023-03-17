NAME = minishell
CFLAGS = -Wall  -Wextra -Werror
RM = rm -f
SRC = export.c\
	  cd.c\
	  

OBJECT = ${SRC:.c=.o}
all: $(NAME)
$(NAME) : $(OBJECT)
		make -C libft
		cc $(OBJECT) ./libft/libft.a -o $(NAME) 

clean:
	make clean -C ./libft
	$(RM) $(OBJECT)
	
fclean:
	make fclean -C ./libft
	$(RM) $(OBJECT) 
	$(RM) $(NAME)

re: fclean all