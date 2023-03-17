#ifndef MINISHELL_H
# define MINISHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./libft/libft.h"
typedef struct NODE
{
	char		*str;
    int         option;
    int         free;
	struct NODE	*next;
}				envp;

int ft_strserarch(char *str,char c);
void ft_pwd();
char *ft_strplusequal(char *str,int k);
void ft_cd(envp **env,char *str);
void export(envp **env1 ,char *str,int freeme);
int	ft_strcmp( char *s1,  char *s2);
#endif