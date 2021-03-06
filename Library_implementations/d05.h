/********************************************************************************************************************************
 ***********	file name:	d05.h											*********
 ***********	Author:		Lorthar Mabandla									*********
 ***********	Date:		23 March 2019										*********
 ***********	purpose:	Header file for all functions in Day 05 of the C Piscine 				*********
 *******************************************************************************************************************************/
#ifndef _D05_H_
#define _D05_H_
extern int ft_str_is_numeric(char *str);
extern void ft_putnbr(int nb);
extern void ft_putchar(char c);
extern int ft_str_is_lowercase(char *str);
extern int ft_str_is_uppercase(char *str);
extern int ft_str_is_printable(char *str);
extern char *ft_strcat(char *dest, char *src);
extern void ft_putstr(char *str);
extern char *ft_strncat(char *dest, char *src, int nb);
extern unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
extern unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
#endif
