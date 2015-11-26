/*
** my_strcat.c for My String Cat in /home/salfai/etna/devc/Jour_04/hussai_f
** 
** Made by HUSSAIN Faisal
** Login   <hussai_f@etna-alternance.net>
** 
** Started on  Thu Oct 22 14:34:44 2015 HUSSAIN Faisal
** Last update Tue Nov 17 12:07:59 2015 HUSSAIN Faisal
*/
char	*my_strcat(char *str1, char *str2)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (*(str1 + i) != '\0')
    i++;
  while (*(str2 + j) != '\0')
    {
      *(str1 + i) = *(str2 + j);
      i++;
      j++;
    }
  *(str1 + i) = '\0';
  return (str1);
}
