#include "libft.h"
#include <stdio.h>

int main(){
	char *s = ft_substr("tripouille", 0, 42000);;
	printf("%p -- %s\n", s , s);
	free(s);
	s = NULL;
	system("sudo leaks exec");
	return 0;
}
