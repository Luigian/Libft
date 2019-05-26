/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 18:31:15 by lusanche          #+#    #+#             */
/*   Updated: 2019/05/25 15:50:49 by lusanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

/*
** FUNCTIONS JUST FOR THIS TEST PURPOSES (definitions at the end of this file)
*/ 

void	ft_add_char(char *s);
void	ft_add_index(unsigned int index, char *s);
void	ft_fill_a(char *s);
char	ft_toupper_char(char c);
char	ft_toindex(unsigned int index, char c);

int		main(void)
{
	printf("\n");
	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>> L I B F T   T E S T <<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
	printf("-----------------------------------------------------------------------------\n");
	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> PART 1 <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_memset]\n");
	char s26[50];
	strcpy(s26, "america");
	ft_memset(s26, 'y', 4);//FT_MEMSET
	printf("%s\n", s26);
	printf("\n");
	printf("[memset]\n");
	char s27[50];
	strcpy(s27, "america");
	memset(s27, 'y', 4);
	printf("%s\n", s27);
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_bzero]\n");
	char s28[50];
	strcpy(s28, "12345678");
	ft_bzero(s28, 1);//FT_BZERO
	printf("(%s)\n", s28);
	printf("\n");
	printf("[bzero]\n");
	char s29[51];
	strcpy(s29, "12345678");
	bzero(s29, 1);
	printf("(%s)\n", s29);
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_memcpy]\n");
	char s30[50], s31[50];
	strcpy(s30, "blue");
	strcpy(s31, "black");
	printf("%s\n", ft_memcpy(s30, s31, 3));//FT_MEMCPY
	printf("\n");
	printf("[memcpy]\n");
	char s32[50], s33[50];
	strcpy(s32, "blue");
	strcpy(s33, "black");
	printf("%s\n", memcpy(s32, s33, 3));
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_memccpy]\n");
	char s34[50], s35[50];
	strcpy(s34, "rocky");
	strcpy(s35, "ernest");
	printf("%s\n", ft_memccpy(s34, s35, 'r', 4));//FT_MEMCCPY
	printf("%s\n", s34);
	printf("\n");
	printf("[memccpy]\n");
	char s36[50], s37[50];
	strcpy(s36, "rocky");
	strcpy(s37, "ernest");
	printf("%s\n", memccpy(s36, s37, 'r', 4));
	printf("%s\n", s36);
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_memmove]\n");
	char s38[50], s39[50];
	strcpy(s38, "jupi");
	strcpy(s39, "saturn");
	printf("%s\n", ft_memmove(s38, s39, 2));//FT_MEMMOVE
	printf("\n");
	printf("[memmove]\n");
	char s40[50], s41[50];
	strcpy(s40, "jupi");
	strcpy(s41, "saturn");
	printf("%s\n", memmove(s40, s41, 2));
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_memchr]\n");
	char s42[50];
	strcpy(s42, "mountain");
	printf("%s\n", ft_memchr(s42, 'n', 4));//FT_MEMCHR
	printf("%s\n", s42);	
	printf("\n");
	printf("[memchr]\n");
	char s43[50];
	strcpy(s43, "mountain");
	printf("%s\n", memchr(s43, 'n', 4));
	printf("%s\n", s43);	
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_memcmp]\n");
	char s44[50], s45[50];
	strcpy(s44, "a");
	strcpy(s45, "aaa");
	printf("%d\n", ft_memcmp(s44, s45, 2));//FT_MEMCMP
	printf("\n");
	printf("[memcmp]\n");
	char s46[50], s47[50];
	strcpy(s46, "a");
	strcpy(s47, "aaa");
	printf("%d\n", memcmp(s46, s47, 2));
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_strlen]\n");
	printf("%zu\n", ft_strlen("longitud"));// FT_STRLEN 
	printf("\n");
	printf("[strlen]\n");
	printf("%lu\n", strlen("longitud")); 
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_strdup]\n");
	printf("%s\n", ft_strdup("Anthony"));//FT_STRDUP
	printf("\n");
	printf("[strdup]\n");
	printf("%s\n", strdup("Anthony"));
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_strcpy]\n");
	char s1 [50];
	printf("%s\n", ft_strcpy(s1, "life"));//FT_STRCPY
	printf("\n");
	char s2 [50];
	printf("[strcpy]\n");
	printf("%s\n", strcpy(s2, "life"));
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_strncpy]\n");
	char s3 [50];
	printf("%s\n", ft_strncpy(s3, "metropolis", 3));//FT_STRNCPY
	printf("\n");
	printf("[strncpy]\n");
	char s4 [50];
	printf("%s\n", strncpy(s4, "metropolis", 3));
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_strcat]\n");
	char s5[50], s6[50];
	strcpy(s5, "Luis");
	strcpy(s6, "Sanchez");
	printf("%s\n", ft_strcat(s5, s6));//FT_STRCAT
	printf("\n");
	printf("[strcat]\n");
	char s7[50], s8[50];
	strcpy(s7, "Luis");
	strcpy(s8, "Sanchez");
	printf("%s\n", strcat(s7, s8));
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_strncat]\n");
	char s9[50], s10[50];
	strcpy(s9, "Chris");
	strcpy(s10, "Cornell");
	printf("%s\n", ft_strncat(s9, s10, 3));//FT_STRNCAT
	printf("\n");
	printf("[strncat]\n");
	char s11[50], s12[50];
	strcpy(s11, "Chris");
	strcpy(s12, "Cornell");
	printf("%s\n", strncat(s11, s12, 3));
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_strlcat]\n");
	char s14[50], s15[50];
	strcpy(s14, "Mr");
	strcpy(s15, "Robot");
	printf("%zu\n", ft_strlcat(s14, s15, 4));//FT_STRLCAT
	printf("%s\n", s14);
	printf("\n");
	printf("[strlcat]\n");
	char s16[50], s17[50];
	strcpy(s16, "Mr");
	strcpy(s17, "Robot");
	printf("%lu\n", strlcat(s16, s17, 4));
	printf("%s\n", s16);
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_strchr]\n");
	char *p1;
	p1 = ft_strchr("yellow", 'l');//FT_STRCHR
	printf("%s\n", p1);
	printf("\n");
	printf("[strchr]\n");
	char *p2;
	p2 = strchr("yellow", 'l');
	printf("%s\n", p2);
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_strrchr]\n");
	char *p3;
	p3 = ft_strrchr("yellow", 'l');//FT_STRRCHR
	printf("%s\n", p3);
	printf("\n");
	printf("[strrchr]\n");
	char *p4;
	p4 = strrchr("yellow", 'l');
	printf("%s\n", p4);
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_strstr]\n");
	char s18[50], s19[50];
	strcpy(s18, "carbbono");
	strcpy(s19, "bon");
	char *p5;
	p5 = ft_strstr(s18, s19);//FT_STRSTR
	printf("%s\n", p5);
	printf("\n");
	printf("[strstr]\n");
	char s20[50], s21[50];
	strcpy(s20, "carbbono");
	strcpy(s21, "bon");
	char *p6;
	p6 = ft_strstr(s20, s21);
	printf("%s\n", p6);
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_strnstr]\n");
	char s22[50], s23[50];
	strcpy(s22, "tritricolor");
	strcpy(s23, "tric");
	char *p7;
	p7 = ft_strnstr(s22, s23, 7);//FT_STRNSTR
	printf("%s\n", p7);
	printf("\n");
	printf("[strnstr]\n");
	char s24[50], s25[50];
	strcpy(s24, "tritricolor");
	strcpy(s25, "tric");
	char *p8;
	p8 = strnstr(s24, s25, 7);
	printf("%s\n", p8);
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_strcmp]\n");
	printf("%d\n", ft_strcmp("hola", "hol"));//FT_STRCMP	
	printf("\n");
	printf("[strcmp]\n");
	printf("%d\n", strcmp("hola", "hol"));	
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_strncmp]\n");
	printf("%d\n", ft_strncmp("uola", "hol", 3));//FT_STRNCMP	
	printf("\n");
	printf("[strncmp]\n");
	printf("%d\n", strncmp("uola", "hol", 3));	
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_atoi]\n");
	printf("%d\n", ft_atoi("   \t\n\v\f\r -1986abc "));//FT_ATOI
	printf("\n");
	printf("[atoi]\n");
	printf("%d\n", atoi("   \t\n\v\f\r -1986abc "));
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_isalpha]\n");
	printf("%d\n", ft_isalpha('h'));//FT_ISALPHA
	printf("%d\n", ft_isalpha('*'));//FT_ISALPHA
	printf("\n");
	printf("[isalpha]\n");
	printf("%d\n", isalpha('h'));
	printf("%d\n", isalpha('*'));
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_isdigit]\n\n");
	printf("\"digit '3'\"\t");	
	(ft_isdigit('3')) ? (printf("is digit\n")) : (printf("is not digit\n"));// FT_ISDIGIT 
	printf("\"not digit 'h'\"\t");	
	(ft_isdigit('h')) ? (printf("is digit\n")) : (printf("is not digit\n"));// FT_ISDIGIT 
	printf("\"not digit 11\"\t");	
	(ft_isdigit(11)) ? (printf("is digit\n")) : (printf("is not digit\n"));// FT_ISDIGIT 
	printf("\"digit 48\"\t");	
	(ft_isdigit(48)) ? (printf("is digit\n")) : (printf("is not digit\n"));// FT_ISDIGIT 
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_isalnum]\n");
	printf("%d\n", ft_isalnum('5'));//FT_ISALNUM
	printf("%d\n", ft_isalnum('+'));//FT_ISALNUM
	printf("\n");
	printf("[isalnum]\n");
	printf("%d\n", isalnum('5'));
	printf("%d\n", isalnum('+'));
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_isascii]\n");
	printf("%d\n", ft_isascii('~'));//FT_ISASCII
	printf("%d\n", ft_isascii('8'));//FT_ISASCII
	printf("\n");
	printf("[isascii]\n");
	printf("%d\n", isascii('~'));
	printf("%d\n", isascii('8'));
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_isprint]\n");
	printf("%d\n", ft_isprint('\t'));//FT_ISPRINT
	printf("\n");
	printf("[isprint]\n");
	printf("%d\n", isprint('\t'));
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_toupper]\n");
	printf("%c\n", ft_toupper('a'));//FT_TOUPPER
	printf("\n");
	printf("[toupper]\n");
	printf("%c\n", toupper('a'));
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_tolower]\n");
	printf("%c\n", ft_tolower('A'));//FT_TOLOWER
	printf("\n");
	printf("[tolower]\n");
	printf("%c\n", tolower('A'));
	printf("-----------------------------------------------------------------------------\n");
	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> PART 2 <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_memalloc]\n");
	char *s51;
	s51 = ft_memalloc(3);//FT_MEMALLOC
	printf("%d\n",*s51);
	strcpy(s51, "hi");
	printf("%s\n", s51);
	printf("\n");
	printf("[expected]\n");
	printf("0\nhi\n");
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_memdel]\n");
	char **tofree;
	tofree = ft_memalloc(1);
	tofree[0] = ft_memalloc(3);
	tofree[0][0] = 'p';
	tofree[0][1] = 'u';
	tofree[0][2] = '\0';
	tofree[1] = NULL;
	printf("%s\n", tofree[0]);
	printf("%d\n", (int)tofree[0]);
	printf("----------\n");
	ft_memdel((void **)tofree);//FT_MEMDEL
	printf("%s\n", tofree[0]);
	printf("%d\n", (int)tofree[0]);
	printf("\n");
	printf("[expected]\n");
	printf("pu\n(some adress)\n----------\n(null)\n0\n");
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_strnew]\n");
	char *s52;
	s52 = ft_strnew(5);//FT_STRNEW
	printf("(%s)\n", s52);
	printf("\n");
	printf("[expected]\n");
	printf("(empty)\n");
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_strdel]\n");
	char **tofree2;
	tofree2 = ft_memalloc(1);
	tofree2[0] = ft_strnew(2);
	tofree2[0][0] = 'y';
	tofree2[0][1] = 'o';
	tofree2[0][2] = '\0';
	tofree2[1] = NULL;
	printf("%s\n", tofree2[0]);
	printf("%d\n", (int)tofree2[0]);
	printf("----------\n");
	ft_strdel(tofree2);//FT_STRDEL
	printf("%s\n", tofree2[0]);
	printf("%d\n", (int)tofree2[0]);
	printf("\n");
	printf("[expected]\n");
	printf("yo\n(some adress)\n----------\n(null)\n0\n");
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_strclr]\n");
	char s13 [50];
	printf("%s\n", strcpy(s13, "Pluton"));
	ft_strclr(s13);//FT_STRCLR
	printf("(%s)\n", s13);
	printf("\n");
	printf("[expected]\n");
	printf("Pluton\n");
	printf("(empty)\n");
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_striter]\n");
	char s49[50];
	strcpy(s49, "Adam Ondra");
	ft_striter(s49, ft_add_char);//FT_STRITER		ft_add_char
	printf("\n");
	printf("\n");
	printf("[expected]\n");
	printf("A-d-a-m- -O-n-d-r-a-\n");
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_striteri]\n");
	char s50[50];
	strcpy(s50, "Shauna");
	ft_striteri(s50, ft_add_index);//FT_STRITERI	ft_add_index
	printf("\n");
	printf("\n");
	printf("[expected]\n");
	printf("S[0]h[1]a[2]u[3]n[4]a[5]\n");
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_strmap]\n");
	char *s53;
	s53 = ft_strmap("animation", ft_toupper_char);//FT_STRMAP	ft_toupper_char
	printf("%s\n", s53);
	printf("\n");
	printf("[expected]\n");
	printf("ANIMATION\n");
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_strmapi]\n");
	char *s54;
	s54 = ft_strmapi("australia", ft_toindex);//FT_STRMAPI		ft_toindex
	printf("%s\n", s54);
	printf("\n");
	printf("[expected]\n");
	printf("012345678\n");
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_strequ]\n");
	printf("%d\n", ft_strequ("lex", "lex"));//FT_STREQU
	printf("\n");
	printf("[expected]\n");
	printf("1\n");
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_strnequ]\n");
	printf("%d\n", ft_strnequ("levis", "lev", 3));//FT_STRNEQU
	printf("\n");
	printf("[expected]\n");
	printf("1\n");
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_strsub]\n");
	char *s55;
	s55 = ft_strsub("A star is born", 2, 4);//FT_STRSUB
	printf("%s\n", s55);
	printf("\n");
	printf("[expected]\n");
	printf("star\n");
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_strjoin]\n");
	char *s56;
	s56 = ft_strjoin("Jack", "son");//FT_STRJOIN
	printf("%s\n", s56);
	printf("%lu\n", strlen(s56));
	printf("\n");
	printf("[expected]\n");
	printf("Jackson\n7\n");
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_strtrim]\n");
	char *s57;
	s57 = ft_strtrim("\t \nh,o,l,a, \t\n ");//FT_STRTRIM
	printf("%s\n", s57);
	printf("%lu\n", ft_strlen(s57));
	printf("\n");
	printf("[expected]\n");
	printf("h,o,l,a,\n8\n");
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_strsplit]\n");
	char **s58;
	s58 = ft_strsplit("*hola***como**te*va**", '*');//FT_STRSPLIT
	printf("%s", s58[0]);
	printf("%lu\n", ft_strlen(s58[0]));
	printf("%s", s58[1]);
	printf("%lu\n", ft_strlen(s58[1]));
	printf("%s", s58[2]);
	printf("%lu\n", ft_strlen(s58[2]));
	printf("%s", s58[3]);
	printf("%lu\n", ft_strlen(s58[3]));
	printf("%s\n", s58[4]);
	printf("\n");
	printf("[expected]\n");
	printf("hola4\ncomo4\nte2\nva2\n(null)\n");
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_itoa]\n");
	printf("%s\n", ft_itoa(198600));//FT_ITOA
	printf("\n");
	printf("[expected]\n");
	printf("198600\n");
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_putchar]\n");
	ft_putchar('f');//FT_PUTCHAR
	printf("\n\n");
	printf("[printf]\n");
	printf("f\n");
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_putstr]\n");
	ft_putstr("hello world!");// FT_PUTSTR 
	printf("\n\n");
	printf("[printf]\n");
	printf("hello world!\n");
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_putendl]\n");
	ft_putendl("hello mars!");// FT_PUTENDL 
	printf("\n");
	printf("[printf]\n");
	printf("hello mars!\n");
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_putnbr]\n");
	ft_putnbr(-2147483648);// FT_PUTNBR 
	printf("\n");
	ft_putnbr(-12345);// FT_PUTNBR 
	printf("\n");
	ft_putnbr(1986);// FT_PUTNBR 
	printf("\n\n");
	printf("[printf]\n");
	printf("%ld\n", -2147483648);
	printf("%d\n", -12345);
	printf("%d\n", 1986);
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_putchar_fd]\n");
	ft_putchar_fd('g', 1);//FT_PUTCHAR_FD	
	printf("\n");
	printf("\n");
	printf("[expected]\n");
	printf("g\n");
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_putstr_fd]\n");
	ft_putstr_fd("Muse", 1);//FT_PUTSTR_FD	
	printf("\n");
	printf("\n");
	printf("[expected]\n");
	printf("Muse\n");
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_putendl_fd]\n");
	ft_putendl_fd("Thorn", 1);//FT_PUTENDL_FD	
	printf("\n");
	printf("[expected]\n");
	printf("Thorn\n");
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_putnbr_fd]\n");
	ft_putnbr_fd(-31416, 1);//FT_PUTNBR_FD	
	printf("\n");
	printf("\n");
	printf("[expected]\n");
	printf("-31416\n");
	printf("-----------------------------------------------------------------------------\n");
	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> BONUS PART <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
	printf("-----------------------------------------------------------------------------\n");
	printf("[ft_strlstnew]\n");
	char *s59;
	t_list *list1;
	s59 = "42";
	list1 = ft_lstnew(s59, 3);//FT_LSTNEW
	printf("%s\n", list1->content);
	printf("%zu\n", list1->content_size);
	int conte[1];
	t_list *list2;
	conte[0] = 42;
	list2 = ft_lstnew(conte, 4);//FT_LSTNEW
	printf("%d\n", *((int *)list2->content));
	printf("%zu\n", list2->content_size);
	printf("\n");
	printf("[expected]\n");
	printf("42\n3\n42\n4\n");
	printf("-----------------------------------------------------------------------------\n");
	return(0);
}

/*
** for ft_striter
*/
void	ft_add_char(char *s)
{
	ft_putchar(*s);
	ft_putchar('-');
}	

/*
** for ft_striteri
*/
void	ft_add_index(unsigned int index, char *s)
{
	ft_putchar(*s);
	ft_putchar('[');
	ft_putnbr(index);
	ft_putchar(']');
}

/*
** for ft_strmap
*/
char	ft_toupper_char(char c)
{
	return (c - 32);
}

/*
** for ft_strmapi
*/
char	ft_toindex(unsigned int index, char c)
{
	return (c - c + 48 + index);
}
