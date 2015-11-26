/*
** my_strcmp.c for Strcmp in /home/salfai/etna/devc/Jour_04/hussai_f/my_strcmp
** 
** Made by HUSSAIN Faisal
** Login   <hussai_f@etna-alternance.net>
** 
** Started on  Thu Oct 22 11:59:16 2015 HUSSAIN Faisal
** Last update Tue Oct 27 14:02:15 2015 HUSSAIN Faisal
*/
int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (*(s1 + i) != '\0')
    {
      if (*(s1 + i) < *(s2 + i))
	return (-1);
      else if (*(s1 + i) > *(s2 + i))
	return (1);
      else if (*(s2 + i) == '\0')
	return (1);
      i++;
    }
  if (*(s2 + i) != '\0')
    return (-1);
  return (0);
}
