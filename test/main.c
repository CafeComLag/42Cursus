#include "./libft/libft.h"
#include <stdio.h>
#include <bsd/string.h> 

int	main(void)
{
	// ft_strnstr teste
	printf("%s\n", ft_strnstr("dracula", "dr", 2));
	printf("%s\n", ft_strnstr("dracula", "dro", 3));
	printf("%s\n", ft_strnstr("dracula", "dracula", sizeof("dracula")));



	/*char	test[] = "teste";
	char	*result = ft_strchr(test, 0);
	// ft_strchr test
	printf("%p\n", &test);
	printf("%p\n", &result);
	printf("%p\n", ft_strchr("Queres cafe?", 'c'));
	printf("%s\n", ft_strchr("Queres cafe?", 'C'));*/

	/*// ft_strlcat test.
 	char *str = "Yoshitaka Amano";
 	char buff1[10] = "";
 	char buff2[10] = "";

	printf("-=-=-=-=-=-=-=-=-=-=-=-=\n");
 	printf("Strlcat=%zu\n", strlcat(buff1, str, 4));
 	printf("ft_strlcat=%zu\n", ft_strlcat(buff2, str, 4));
	printf("%s\n%s\n", buff1, buff2);
	printf("-=-=-=-=-=-=-=-=-=-=-=-=\n");*/


	/*char	dest[11] = "aba";
	char	dest2[11] = "aba";
	printf("-=-=-=-=-=-=-=-=-=-=-=-=\n");
 	printf("Strlcat=%zu\n", strlcat(dest, "caxi", 15));
 	printf("ft_strlcat=%zu\n", ft_strlcat(dest2, "caxi", 15));
	printf("%s\n%s\n", dest, dest2);
	printf("-=-=-=-=-=-=-=-=-=-=-=-=\n");*/
	

	/* ft_substr test.
	char	str[] = "Vasteknikov Yoshitaka Amano blablalbalbalbalba";

	printf("%s", ft_substr(str, 12, 15));*/

	/*char	s1[] = "Quero";
	char	s2[] = " Cafe!";

	printf("%s", ft_strjoin(s1, s2));*/ 
	
	
}
