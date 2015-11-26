/*
** my_strncpy.c for My strin cpy to n in /home/salfai/etna/devc/Jour_04/hussai_f/my_strncpy
** 
** Made by HUSSAIN Faisal
** Login   <hussai_f@etna-alternance.net>
** 
** Started on  Thu Oct 22 10:56:48 2015 HUSSAIN Faisal
** Last update Tue Oct 27 14:06:51 2015 HUSSAIN Faisal
*/

int	my_strlen2(char *str)
{
  int	i;

  i = 0;
  while(*(str + i) != '\0')
    i++;
  return (i);
}

char	*my_str_inf_n(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while (*(src + i) != '\0')
    {
      *(dest + i) = *(src + i);
      i++;
    }
  *(dest + i) = *(src + i);
  while (i < n)
    {
      i++;
      *(dest + i) = 0;
    }
  return (dest);
}

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  if (my_strlen2(src) <= n)
    dest = my_str_inf_n(dest, src, n);
  else
    {
      for (i = 0; i < n; i++)
	*(dest + i) = *(src + i);
    }
  return (dest);
}
