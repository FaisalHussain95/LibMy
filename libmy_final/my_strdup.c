/*
** my_strdup.c for My_strdup function  in /home/salfai/etna/devc/Jour_07/hussai_f
** 
** Made by HUSSAIN Faisal
** Login   <hussai_f@etna-alternance.net>
** 
** Started on  Mon Oct 26 09:53:16 2015 HUSSAIN Faisal
** Last update Tue Oct 27 14:04:08 2015 HUSSAIN Faisal
*/

#include <stdlib.h>

int	my_strlen(char *);
char	*my_strcpy(char *, char *);

char	*my_strdup(char *str)
{
  int	strlen;
  char	*res;

  strlen = my_strlen(str);
  res = malloc(strlen * sizeof(*str));
  res = my_strcpy(res, str);
  return (res);
}
