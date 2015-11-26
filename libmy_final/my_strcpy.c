/*
** my_strcpy.c for My String Copy in /home/salfai/etna/devc/Jour_04/hussai_f/my_strcpy
** 
** Made by HUSSAIN Faisal
** Login   <hussai_f@etna-alternance.net>
** 
** Started on  Thu Oct 22 10:23:18 2015 HUSSAIN Faisal
** Last update Tue Oct 27 14:02:42 2015 HUSSAIN Faisal
*/
char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (*(src + i) != '\0')
    {
      *(dest + i) = *(src + i);
      i++;
    }
  *(dest + i) = *(src + i);
  return (dest);
}
