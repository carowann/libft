#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>

int main()
{
	printf("Test isalnum\n");
	printf("Test: %d\n", isalnum(2));
	printf("Returns: %d\n", ft_isalnum(2));
	printf("Test: %d\n", isalnum('9'));
	printf("Returns: %d\n", ft_isalnum('9'));

	printf("Test isalpha\n");
	printf("Test: %d\n", isalpha('2'));
	printf("Returns: %d\n", ft_isalpha('2'));
	printf("Test: %d\n", isalpha('e'));
	printf("Returns: %d\n", ft_isalpha('e'));

	printf("Test isdigit\n");
	printf("Test: %d\n", isdigit('s'));
	printf("Returns: %d\n", ft_isdigit('s'));
	printf("Test: %d\n", isdigit('9'));
	printf("Returns: %d\n", ft_isdigit('9'));

	printf("Test isascii\n");
	printf("Test: %d\n", isascii(129));
	printf("Returns: %d\n", ft_isascii(129));
	printf("Test: %d\n", isascii(103));
	printf("Returns: %d\n", ft_isascii(103));

	printf("Test isprint\n");
	printf("Test: %d\n", isprint(129));
	printf("Returns: %d\n", ft_isprint(129));
	printf("Test: %d\n", isprint(103));
	printf("Returns: %d\n", ft_isprint(103));

	printf("Test toupper\n");
	printf("Test: %d\n", toupper('b'));
	printf("Returns: %d\n", ft_toupper('b'));
	printf("Test: %d\n", toupper('Z'));
	printf("Returns: %d\n", ft_toupper('Z'));
	printf("Test: %d\n", toupper('1'));
	printf("Returns: %d\n", ft_toupper('1'));

	printf("Test tolower\n");
	printf("Test: %d\n", tolower('b'));
	printf("Returns: %d\n", ft_tolower('b'));
	printf("Test: %d\n", tolower('A'));
	printf("Returns: %d\n", ft_tolower('A'));
	printf("Test: %d\n", tolower(' '));
	printf("Returns: %d\n", ft_tolower(' '));

	printf("Test strlen\n");
	printf("Test: %lu\n", strlen("b"));
	printf("Returns: %zu\n", ft_strlen("b"));
	printf("Test: %lu\n", strlen("pippo"));
	printf("Returns: %zu\n", ft_strlen("pippo"));
	printf("Test: %lu\n", strlen(" "));
	printf("Returns: %zu\n", ft_strlen(" "));
	printf("Test: %lu\n", strlen(""));
	printf("Returns: %zu\n", ft_strlen(""));

	printf("Test memset\n");
	char str1[50];
	char str2[50];
	strcpy(str1, "Ciao pippo");
	printf("%s\n", str1);
	printf("Test: %s\n", (char *)memset(str1, 'f', 3));
	strcpy(str2, "Ciao pippo");
	printf("Returns: %s\n", (char *)ft_memset(str2, 'f', 3));

	printf("Test bzero\n");
	char str3[50];
	char str4[50];
	strcpy(str3, "Ciao pippo");
	printf("String: %s\n", str3);
	bzero(str3, 3);
	printf("Test:\n");
	write(1, &str3, 10);
	printf("\n");
	strcpy(str4, "Ciao pippo");
	ft_bzero(str4, 3);
	printf("Returns:\n");
	write(1, &str4, 10);
	write(1, "\n", 1);

	printf("Test memcpy\n");
	char str5[50];
	char str6[50];
	char str7[50];
	char str8[50];
	strcpy(str5, "Ciao pippo");
	strcpy(str6, "Addio pluto");
	strcpy(str7, "Ciao pippo");
	strcpy(str8, "Addio pluto");
	printf("String1: %s\n", str5);
	printf("String2: %s\n", str6);
	memcpy(str5, str6, 3);
	write(1, str5, 10);
	write(1, "\n", 1);
	ft_memcpy(str7, str8, 3);
	write(1, str7, 10);
	write(1, "\n", 1);

	printf("Test overlapping memmove\n");
	char str9[50] = "Ciao pippo come va"; 
	char str10[50] = "Ciao pippo come va"; 
    char *first, *second; 
    first = str9; 
    second = str10; 
    printf("String :%s\n ", str9); 
    memmove(first + 8, first, 10); 
    printf("Test: %s\n ", str9); 
	ft_memmove(second + 8, second, 10);
    printf("Returns: %s\n ", str10); 

	printf("Test strchr\n");
	char str11[50] = "Ciao pippo come va"; 
	char str12[50] = "Ciao pippo come va"; 
	printf("String; %s\n", str11);
	printf("Test: %s\n", strchr(str11, 'p'));
	printf("Returns: %s\n", strchr(str12, 'p'));
	char str13[50] = "Ciao pippo come va"; 
	char str14[50] = "Ciao pippo come va"; 
	printf("Test: %s\n", strchr(str13, 't'));
	printf("Returns: %s\n", strchr(str14, 't'));
	char str15[50] = "Ciao pippo come va"; 
	char str16[50] = "Ciao pippo come va"; 
	printf("Test: %s\n", strchr(str15, '\0'));
	printf("Returns: %s\n", strchr(str16, '\0'));


}
