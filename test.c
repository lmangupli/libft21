#include "libft.h"
#include <stdio.h>

int main(void)
{
	/*
	printf("====PUTCHAR====\n\n");
	
	int fd;
	char c = 'T';

	fd = open("file", O_WRONLY);
	ft_putchar_fd(c, fd);
	close (fd);
	*/

	

/*
	//memchr
	printf("====MEMCHR====\n");
	printf("void	*memchr(const void *s, int c, size_t n)\n\n");
	
	int c;
	size_t n;
	char s[10] = "elizaveta";
	
	printf("****basic****\n");
	c = 'v';
	n = 9;
	printf("string is '%s'\nint c = '%c' n = %zu\nmemchr -> %s | ft_memchr -> %s\n\n", s, c, n, memchr(s, c, n), ft_memchr(s, c, n));

	printf("****size is 0****\n");
	c = 'v';
	n = 0;
	printf("string is '%s'\nint c = '%c' n = %zu\nmemchr -> %s | ft_memchr -> %s\n\n", s, c, n, memchr(s, c, n), ft_memchr(s, c, n));
	
	printf("****'c' not found in the string****\n");
	c = 'F';
	n = 9;
	printf("string is '%s'\nint c = '%c' n = %zu\nmemchr -> %s | ft_memchr -> %s\n\n", s, c, n, memchr(s, c, n), ft_memchr(s, c, n));
	
	printf("****'c' not found withing n bytes****\n");
	c = 't';
	n = 3;
	printf("string is '%s'\nint c = '%c' n = %zu\nmemchr -> %s | ft_memchr -> %s\n\n", s, c, n, memchr(s, c, n), ft_memchr(s, c, n));
	*/

/*	
	//memcmp
	printf("====MEMCMP====\n");
	printf("int	ft_memcmp(const void *s1, const void *s2, size_t n)\n\n");

	size_t n;
	char str1[] =  "what the fuck";
	char str2[] =  "what if you are ok";
	char *s1 = str1;
	char *s2 = str2;


	printf("****basic****\n");
	n = 20;
	printf("string s1 '%s' | string s2 '%s' | n = %zu\nmemcmp -> %d | ft_memcmp -> %d\n\n", s1, s2, n, memcmp(s1, s2, n), ft_memcmp(s1, s2, n));
	
	printf("****equal strings****\n");
	n = 20;
	s2 = memcpy(s2, str1, 20);
	printf("string s1 '%s' | string s2 '%s' | n = %zu\nmemcmp -> %d | ft_memcmp -> %d\n\n", s1, s2, n, memcmp(s1, s2, n), ft_memcmp(s1, s2, n));

	printf("****zero strings****\n");
	n = 20;
	bzero(str1, 14);
	bzero(str2, 19);
	printf("string s1 '%s' | string s2 '%s' | n = %zu\nmemcmp -> %d | ft_memcmp -> %d\n\n", s1, s2, n, memcmp(s1, s2, n), ft_memcmp(s1, s2, n));


	printf("****\200 and \0****\n");
	n = 20;
	memcpy(str1, "\200", 14);
	memcpy(str2, "\0", 14);
	printf("string s1 '%s' | string s2 '%s' | n = %zu\nmemcmp -> %d | ft_memcmp -> %d\n\n", s1, s2, n, memcmp(s1, s2, n), ft_memcmp(s1, s2, n));
*/	

/*	
//memcpy


	printf("====MEMCCPY====\n");
	printf("void *memccpy(void *restrict dst, const void *restrict src, int c, size_t n)\n\n");

	char src[] = "0123456789";
	char dst[] = "9876543210";
	char src1[] = "0123456789";
	char dst1[] = "9876543210";

	size_t n;
	int c;

	c = '9';
	n = 9;

	printf("original memccpy\n");
	printf("src -> '%s' | dst -> '%s'\nmemccpy(dst, src, '%c', %zu) -> '%s'\n", src, dst, c, n, memccpy(dst, src, c, n));
	printf("my memccpy\n");
	printf("src -> '%s' | dst -> '%s'\nft_memccpy(dst, src, '%c', %zu) -> '%s'\n", src, dst, c, n, ft_memccpy(dst1, src1, c, n));

*/

/*
//memmove
	printf("====MEMMOVE====\n");
	printf("void    *ft_memmove(void *dst, const void *src, size_t len)\n\n");

	char src[] = "elizaveta";
	char src1[] = "elizaveta";
	printf("src = '%s'\nmemmove(src + 4, src, 4) -> %s | ft_memmove(src + 4, src, 4)    -> %s\n", src, memmove(src + 4, src, 4), ft_memmove(src1 + 4, src1, 4));
*/

/*
//ft_substr
	printf("====FT_SUBSTR====\n");
	printf("void    *ft_substr(char const *s, unsigned int start, size_t len)\n\n");
	
	char s[] = "elizaveta_mangupli";
	size_t len = 8;
	int start = 16;
	char *str;
	str = ft_substr(s, start, len);
	printf("string is -> '%s'\nsubstring is -> '%s'\n", s, str);
*/

/*
	//ft_strjoin

	printf("====FT_STRJOIN====\n");
	printf("char        *ft_strjoin(char const *s1, char const *s2)\n\n");
	char s1[] = "elizaveta";
	char s2[] = "";
	char *new;
	new = ft_strjoin(s1, NULL);
	printf("s1 -> '%s' | s2 -> '%s'\nft_strjoin -> '%s'\n", s1, s2, new);
*/
/*
	//ft_strtrim
	printf("====FT_STRTRIM====\n");
	printf("char    *ft_strtrim(char const *s1, char const *set)n\n");
	
	char str[] = "123liza123";
	char set[] = "123";
	char *new;
	new = ft_strtrim(str, set);
	printf("original string -> '%s' | set -> '%s'\ntrimmed string is -> '%s'\n", str, set, new);
*/

/*
//ft_split

	printf("====FT_SPLIT====\n");
	printf("char **ft_split(char const *s, char c)\n");

	char s[] = "__i_wanna___see__fun__words";
	char c = '_';
	int i;
	char **new;
	int words;
	new = ft_split(s, c);

	printf("original string is -> '%s' | delimiter is -> '%c'\n", s, c);
	i = 0;
	while (new[i])
	{
		printf("%d string - > '%s'\n", i, new[i]);
		i++;
	}
*/

/*	
	//ft_itoa
	
	printf("====FT_ITOA====\n");
	printf("har        *ft_itoa(int n)\n");
	
	int n = -9456947;
	char *str;
	printf ("number of symbols -> %ld\n", ft_cntnmb(n));
	str = ft_itoa(n);
	printf("my number is -> %d\nmy number in char -> '%s'\n", n, str);
*/

/*
	//ft_putnbr
	printf("====ft_PUTNBR====\n");
	printf("void        ft_putnbr(int n)\n");

	int n;
	n = -14280;
	ft_putnbr(n);
	ft_putchar('\n');
*/
/*
	
	//calloc
	printf("====CALLOC====\n");
	size_t count = 6;
	size_t size = 1;
	char *str;
	str = ft_calloc(count, size);
	printf("%s\n", str);
*/	
	
/*
	//strcpy
	char src[] = "elizaveta";
	char dst[10];
	char dst1[10];
	printf("src -> '%s'\nstrcpy(src, dst) -> '%s'\n", src, strcpy(dst, src));
	printf("src -> '%s'\nft_strcpy(src, dst) -> '%s'\n", src, ft_strcpy(dst1, src));
*/

	//strncpy
	char src[] = "elizaveta";
	char dst[10];
	char dst1[10];
	size_t len = 10;
	//printf("src -> '%s' len = %zu\nstrncpy(src, dst) -> '%s'\n", src, len, strncpy(dst, src, len));
	printf("src -> '%s' len = %zu\nft_strncpy(src, dst, len) -> '%s'\n", src, len, ft_strncpy(dst1, src, len));
	
	
	return(0);
}


