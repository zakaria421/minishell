#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct NODE
{
	char		*str;
    int         option;
	struct NODE	*next;
}				envp;

//---------------------------------------------->


void printnode(envp *str)
{
    envp *st;
    st = str;
    while(st)
    {
        
        printf("%s | %d\n",st->str,st->option);
        st = st->next;
    }
 
   
}

//------------------------------------------
void	make_node(envp **st, char *str)
{
	envp	*head;

	head = malloc(sizeof(envp));
	if (!head)
		return ;
	head->str = str;
    head->option = 1;
	head->next = *st;
	*st = head;
}


// int	main(int argc, char **argv, char **env)
// {
// 	int i = 0;
// 	envp *env1 = NULL;
// 	while (env[i] != '\0')
// 		i++;
// 	i -= 2;
// 	while (i >= 0)
// 	{
// 		make_node(&env1, env[i]);
// 		i--;
// 	}
//    //ft_lstadd_back(&env1,ft_lstnew("_=/usr/bin/env",0));
//     printnode(env1);
//     // //unset
//     // deleteNode(&env1,"PATH");
//     // deleteNode(&env1,"PWD");
//      printf("-----------------------------------------------\n");
//     // printnode(env1);
//     //export
//    printnode(env1);


// }