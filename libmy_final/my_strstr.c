/*
** my_strstr.c for My String String in /home/salfai/etna/devc/Jour_04/hussai_f/my_strstr
** 
** Made by HUSSAIN Faisal
** Login   <hussai_f@etna-alternance.net>
** 
** Started on  Fri Oct 23 17:08:25 2015 HUSSAIN Faisal
** Last update Tue Nov 17 12:11:40 2015 HUSSAIN Faisal
*/
int	my_getstrlen(char *str)
{
  int	i;

  i = 0;
  while (*(str + i) != '\0')
    i++;
  return (i);
}

char	*my_strstr(char *str, char *to_find)
{
  char	res;
  int	i;
  int	j;

  res = 0;
  i = 0;
  while (*(str + i) != '\0')
    {
      if (*(str + i) == *(to_find))
	{
	  res = i;
	  j = 0;
	  while (*(str + i) == *(to_find + j) &&
		 (*(str + i) != '\0') && (*(to_find + j) != '\0'))
	    {
	      i++;
	      j++;
	    }
	  if (j == my_getstrlen(to_find))
	    return (str + res);
	  i--;
	}
      i++;
    }
  return ("null");
}
