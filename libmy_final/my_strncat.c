/*
** my_strncat.c for My String Cat to N in /home/salfai/etna/devc/Jour_04/hussai_f
** 
** Made by HUSSAIN Faisal
** Login   <hussai_f@etna-alternance.net>
** 
** Started on  Thu Oct 22 15:19:17 2015 HUSSAIN Faisal
** Last update Tue Oct 27 14:05:01 2015 HUSSAIN Faisal
*/
char	*my_strncat(char *str1, char *str2, int n)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (*(str1 + i) != '\0')
    i++;
  while (*(str2 + j) != '\0')
    j++;
  for (j = 0; j < n; j++)
    {
      *(str1 + i) = *(str2 + j);
      i++;
    }
  if (j > n)
    *(str1 + i) = '\0';
  return (str1);
}
