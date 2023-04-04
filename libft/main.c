#include "libft.h"

// FT_STRITERI FUNCTION
// static void	uppercase(unsigned int i, char *s) {
// 	printf("\tIter n %i - %c \n", i, *s);
// 	*s = ft_toupper(*s);
// }

// FT_STRITERI ZERO FUNCTION
// static void	zero_iteri(unsigned int i, char *s) { i = 0; *s = 0; }

// FT_STRMAPI FUNCTION
// static char	print_s_mapi(unsigned int i, char c) {
// 	printf("\tIteration n %u, with char %c -> will be transformed into %c\n", i, c, c + 1);
// 	return (c + 1);
// }

// LIST PRINTER
// static void print_list(t_list *lst)
// {
// 	while (lst) // does not print the NULL
// 	{
// 		printf("lst->content: %s\n", lst->content);
// 		lst = lst->next;
// 	}
// 	printf("**** End of the list ****\n\n");
// }

// FT_LSTDELONE AND FT_LSTCLEAR FUNCTION
// static void del(void *content)
// {
// 	if (content)
// 	{
// 		printf("del() will free this content: %s\n", (char *)content);
// 		free(content);
// 	}
// }

// FT_LSTITER
// static void	iterator(void *content)
// {
// 	if (content)
// 	{
// 		*((char *) content) = '@';
// 		content++;
// 	}
// 	else
// 		printf("*** no content ***");
// }

// FT_LSTMAP
// static void	*mapper(void *content)
// {
// 	printf("The mapper function modifies: %s\n", (char *)content);
// 	size_t	i = 0;
// 	while (*((char *) content + i))
// 	{
// 		// printf("%c -> %c\n", *((char *)content + i), *((char *)content + i) + 1);
// 		*((char *)content + i) -= 1;
// 		i++;
// 	}
// 	printf("The string is modified in: %s\n", (char *)content);
// 	printf("\n");
// 	return (content);
// }

int main ()
{
	// FT_STRLEN
	// size_t size = ft_strlen("Hello");
	// printf("%lu\n", size);

	// FT_MEMSET
	// char mem[] = {'f', 't', 'g', 'v', 'h'};
	// void *s = mem;
	// char c = 'c';
	// void *p = ft_memset(s, c, 5);
	// printf("ft_memset returns a pointer to the memory area: %p", p);

	// FT_BZERO
	// char mem[] = {'f', 't', 'g', 'v', 'h'};
	// printf("BEFORE ft_bezero: mem[0] = %c; mem[1] = %c; mem[2] = %c; mem[3] = %c; mem[4] = %c;\n", mem[0], mem[1], mem[2], mem[3], mem[4]);
	// void *s = mem;
	// ft_bzero(s, 5);
	// printf("AFTER ft_bezero: mem[0] = %c; mem[1] = %c; mem[2] = %c; mem[3] = %c; mem[4] = %c;\n", mem[0], mem[1], mem[2], mem[3], mem[4]);

	// FT_MEMCPY
	// char dest[] = "NicoCastel";
	// char src[] = "    ";
	// size_t n = 4;
	// void *p = ft_memcpy(dest, src, n);
	// void *q = ft_memcpy(((void *)0), ((void *)0), 3);
	// printf("ft_memcpy returns a pointer to the memory dest: %s\n", p);
	// printf("ft_memcpy with p to void: %p\n", q);

	// FT_MEMMOVE
	// char str[] = "abcdefghijklmnopqrstuvwxyz";
	// char *src = str + 5;
	// char *dest = str + 10;
	// size_t	n = 12;
	// if (src < dest)
	// 	printf("If src < dest, the copy is done from right to left\n");
	// else
	// 	printf("If src > dest, the copy is done from left to right\n");
	// printf("Result of ft_memmove(): %s\n", ft_memmove(dest, src, n));

	// FT_STRLCPY
	// char dest[] = "Dest where copy the string.";
	// char src[] = "COPY!";
	// char dest[] = "    ";
	// char src[] = "Nico";
	// char dest[] = "";
	// char src[] = "";
	// size_t src_len = ft_strlcpy(dest, src, ft_strlen(dest));
	// printf("dest now is ----> %s\n", dest);
	// printf("main.c: ft_strlcpy returns the length of the string it tried to create, which is src: %lu\n", src_len);

	// FT_STRLCAT
	// char src[] = "Castel";
	// char dest[] = "Nico";
	// size_t d_size = 15;
	// DSIZE < FT_STRLEN(DEST) - 1
	// char src[] = "Castel";
	// char dest[] = "Nico";
	// size_t d_size = 1;
	// char src[] = "333";
	// char dest[] = "HEHEOIHOEIHE         ";
	// size_t d_size = 50;
	// printf("The concatenated string is: %s\n", dest);
	// if (ft_strlcat(dest, src, d_size) >= d_size)
	// 	printf("The returned value is bigger than d_size: it should be handled!");
	// else
	// 	printf("ft_strlcat tried to create a string of %lu chars \n", ft_strlcat(dest, src, d_size));

	// FT_MEMCHR
	// char str[] = "HelloMario";
	// void *ptr_toMatch = ft_memchr(str, 'M', 10);
	// ft_putchar_fd(*ptr_toMatch, 0);

	// FT_TOLOWER
	// FT_TOUPPER

	// // FT_STRCHR
	// int n = -512 % 256;
	// unsigned char c_n = (unsigned char) n;
	// printf("n is %u, which is ascii of %c \n", n, c_n);
	// int n = 1111 % 256;
	// unsigned char c_n = (unsigned char) n;
	// printf("n is %u, which is ascii of %c \n", n, c_n);
	// int	c = 'C';
	// const char	*str = "NicoCastel";
	// char *p = ft_strchr(str, c);
	// printf("The returned pointer %p  points to %c\n", p, *p);

	// FT_STRRCHR
	// char 	s[] = "AB_CBDBCEC_BB";
	// char c  = 'f';
	// printf("%c at position %p\n", *(ft_strrchr(s, c)), ft_strrchr(s, c));

	// FT_STRNCMP
	// char *s1 = "atoms\0  \0  \0\0\0";
	// char *s2 = "ato\0";
	// size_t n = 3;
	// int j = strncmp(s1, s2, n);
	// int i = ft_strncmp(s1, s2, n);
	// printf("Result of strncmp(): %d\n", j);
	// printf("Result of ft_strncmp(): %d\n", i);

	// FT_MEMCHR
	// char *str = "abcdefghilmNopqrstuvz";
	// char n_bytes = 20; // change the n_bytes to ft_strlen(str) - 1
	// char *p = ft_memchr(str, 'N', n_bytes);
	// printf("The returned pointer %p points to %c\n", p, *p);

	// FT_MEMCMP
	// char *s1 = "";
	// char *s2 = "";
	// int n = ft_memcmp(s1, s2, 4);
	// printf("%d\n", n);

	// FT_STRNSTRN
	// TEST 1 - basic case
	// const char s1[] = "lorem ipsum dolor sit amet";
	// const char s2[] = "ipsum";
	// size_t n = 15;
	// TEST 2 - basic case
	// const char s1[] = "lorem ipsum dolor sit amet";
	// const char s2[] = "ipsumm";
	// size_t n = 15;
	// TEST 3 - consider not the whole s1
	// const char s1[] = "Hi, the next week I'll check for an evaluator.";
	// const char s2[] = "evaluator";
	// size_t n = ft_strlen(s1) - 5;
	// TEST 4 - n 0
	// const char s1[] = "Hi, the next week I'll check for an evaluator.";
	// const char s2[] = "evaluator";
	// size_t n = 0;
	// TEST 5 - string found at the end of the word
	// const char s1[] = "aaabcabcd";
	// const char s2[] = "abcd";
	// size_t	n = 9;

	// char *p = ft_strnstr(s1, s2, n);
	// char *q = strnstr(s1, s2, n);
	// if (p)
	// 	printf("ft_strnstr --> The returned pointer is %p and points to char \"%c\", because \"%s\" was found.\n", p, *p, p);
	// else
	// 	printf("ft_strnstr(): NULL ptr returned. No match.\n");
	// if (q)
	// 	printf("strnstr --> The returned pointer is %p and points to char \"%c\", because \"%s\" was found.\n", q, *q, q);
	// else
	// 	printf("strnstr(): NULL ptr returned. No match.\n");

	// FT_ATOI
	// printf("0 -> %d\n", ft_atoi("0"));
	// printf("546:5 -> %d\n", ft_atoi("546:5"));
	// printf("-3645 -> %d\n", ft_atoi("-3645"));
	// printf("+3440 -> %d\n", ft_atoi("+3440"));
	// printf("03467 -> %d\n", ft_atoi("03467"));
	// printf("0000098 -> %d\n", ft_atoi("0000098"));
	// printf("+-65 -> %d\n", ft_atoi("+-65"));
	// printf("-+34 -> %d\n", ft_atoi("-+34"));
	// printf("++12 -> %d\n", ft_atoi("++12"));
	// printf("--12 -> %d\n", ft_atoi("--12"));
	// printf("+47+5 -> %d\n", ft_atoi("+47+5"));
	// printf("-45-6 -> %d\n", ft_atoi("-45-6"));
	// printf("\\e123 -> %d\n", ft_atoi("\e123"));
	// printf("\\t\\n\\r\\v\\f 469    \\n -> %d\n", ft_atoi("\t\n\r\v\f 469    \n"));
	// printf("-2147483648 -> %d\n", ft_atoi("-2147483648"));
	// printf("3000000000 -> %d\n", ft_atoi("3000000000"));
	// printf("\\t\\n\\r\\v\\fK469    \\n -> %d\n", ft_atoi("\t\n\r\v\fK469    \n"));
	// printf("\\n\\n\\n   -46\\b9  \\n5d6    \\n -> %d\n", ft_atoi("\n\n\n   -46\b9  \n5d6    \n"));
	// printf("\"\" -> %d\n", ft_atoi(""));

	// zeroes return
	// char *s = "+-1234";
	// char	*s = "----1234   ";

	// special cases
	// char *s = "\01234";

	// int n = atoi(s);
	// int m = ft_atoi(s);
	// printf("atoi(): %d\n", n);
	// printf("ft_atoi(): %d\n", m);

	// FT_CALLOC
	// void *p = ft_calloc(5, sizeof(int));
	// int i = 0;
	// while (i < 6) // 6 because count a free byte more
	// {
	// 	printf("Allocated at %p (the allocated value is %c)\n", p, *(int *)p);
	// 	i++;
	// }

	// FT_STRDUP
	// const char *str = "Hey oh let's go!";
	// char *p = ft_strdup(str);
	// printf("%s\n", p);


	// ________________________________________________________


	// FT_SUBSTR
	// const char *str = "Hello, my name is Nico!";
	// unsigned int start = 18;
	// size_t len = 5;
	// char *p = ft_substr(str, start, len);
	// printf("%s\n", p);
	// printf("%s\n", (ft_substr("", 1, 1)));

	// FT_STRJOIN
	// char *s1 = "Hi, this is...";
	// char *s2 = "The 42 strjoin function!";
	// char *p = ft_strjoin(s1, s2);
	// printf("%s\n", p);

	// FT_STRTRIM
	// char s[] = "xyyyNICOxzxy";
	// char s[] = "lorem \n ipsum \t dolor \n sit \t amet";
	// char s[] = "lorem ipsum dolor sit amet";
	// char s[] = "   \t \t \n\n   \t\t     \n       ";
	// char set[] = "xyz";
	// char *p = ft_strtrim(s, set);
	// if (p)
	// 	printf("main(): %p\n", p);
	// 	printf("main(): %s\n", p);

	// FT_SPLIT
	// char s[] = "      Allocate the     right memory     please!  ";
	// char *s = "Hello!";
	// char c = ' ';
	// char **p = ft_split(s, c);
	// int i, j;
	// i = 0;
	// j = 0;
	// printf("\nmain()\n");
	// while (p[i])
	// {
	// 	j = 0;
	// 	while (p[i][j])
	// 	{
	// 		printf("%c", p[i][j]);
	// 		j++;
	// 	}
	// 	i++;
	// 	printf("\n");
	// }
	// // free(p);
	// // i = 0;
	// // j = 0;
	// // while (p[i])
	// // {
	// // 	j = 0;
	// // 	while (p[i][j])
	// // 	{
	// // 		printf("%c", p[i][j]);
	// // 		j++;
	// // 	}
	// // 	i++;
	// // 	printf("\n");
	// // }

	// FT_ITOA
	// ft_itoa(0);
	// ft_itoa(-2);
	// ft_itoa(-321);
	// ft_itoa(2982);
	// ft_itoa(-445982);
	// ft_itoa(-2147483648);

	// FT_STRMAPI
	// char *str = "NicoCastel";
	// printf("I apply each char of str a function which increments each char by 1:\n\n");
	// char *p = ft_strmapi(str, &print_s_mapi);
	// printf("\nReturned pointer p %p to allocated memory with content %s\n", p, p);
	// printf("Final result: %s\n", p);

	// FT_STRITERI
	// char *str = "";
	// ft_striteri(str, &zero_iteri);
	// char str[] = "Hello I am Nico";
	// ft_striteri(str, &uppercase);
	// printf("I iterate through the str and apply a func which make it uppercase:\n");
	// printf("\t\nFinal result: %s\n", str);

	// FT_PUTCHAR_FD
	// ft_putchar_fd('c', 0);

	//FT_PUTSTR_FD
	// ft_putstr_fd("Hello", 0);

	// FT_PUTENDL_FD
	// ft_putendl_fd("Hello", 0);

	// FT_PUTNBR_FD
	// ft_putnbr_fd(-2, 0);
	// printf("\n");
	// ft_putnbr_fd(10, 0);
	// printf("\n");
	// ft_putnbr_fd(-214385, 0);
	// printf("\n");
	// ft_putnbr_fd(6543, 0);


// __________________BONUS PART_________________________

	// split a string and use the splitted to create a linked list
	// char	*animals = "   Dog  Cat     Horse   Elephant  GUITAR    Camel  Fish    Shark";
	// char	**animals_splitted = ft_split(animals, ' ');

	// // FT_LSTNEW & FT_LSTADD_BACK
	// t_list	*animal_list = ft_lstnew(animals_splitted[0]);
	// int i = 1;
	// while (animals_splitted[i])
	// {
	// 	ft_lstadd_back(&animal_list, ft_lstnew(animals_splitted[i]));
	// 	i++;
	// }
	// printf("List after add_back:\n");
	// print_list(animal_list);

	// // FT_LSTITER
	// ft_lstiter(animal_list, &iterator);
	// print_list(animal_list);

	// // FT_LSTSIZE
	// printf("\nThe list has %d elements.\n", ft_lstsize(animal_list));

	// // FT_LSTADD_FRONT
	// char	*new_animals = "----Crow-Spider------------Zebra";
	// char	**new_animals_splitted = ft_split(new_animals, '-');
	// i = 0;
	// while (new_animals_splitted[i])
	// {
	// 	ft_lstadd_front(&animal_list, ft_lstnew(new_animals_splitted[i]));
	// 	i++;
	// }
	// printf("\nList after add_front:\n");
	// print_list(animal_list);
	// printf("\nAfter the new add the list has %d elements.\n\n", ft_lstsize(animal_list));

	// // FT_LSTLAST
	// printf("ft_lstlast(): The content of last node of the list is: %s\n\n", ft_lstlast(animal_list)->content);

	// FT_LSTDELONE
	// t_list *temp = animal_list;
	// char	*intruder = "GUITAR";
	// while (temp)
	// {
	// 	if (temp->content)
	// 	{
	// 		if (ft_strncmp(temp->content, intruder, ft_strlen(intruder)) == 0)
	// 		{
	// 			printf("I'll delete an element: %s\n", temp->content);
	// 			printf("Its address is: %p\n", temp->content);
	// 			ft_lstdelone(temp, &del);
	// 			printf("But the next element are still stored.");
	// 		}
	// 	}
	// 	temp = temp->next;
	// }
	// printf("\nThe list, after deletion of one element: ");
	// print_list(animal_list);
	// temp = animal_list;

	// FT_LSTCLEAR
	// ft_lstclear(&animal_list, &del);
	// printf("\nList after ftclear():\n");
	// print_list(animal_list);

	// // FT_LSTMAP
	// printf("\nThe mapper will print modified contents:\n");
	// t_list *new_list = ft_lstmap(animal_list, &mapper, &del);
	// printf("The old list is:\n");
	// print_list(animal_list);
	// printf("\nThe new copy of the list, with modified values:\n");
	// print_list(new_list);
}
