/*
** my_strncmp.c for Strcmp to n in /home/salfai/etna/devc/Jour_04/hussai_f/my_strncmp
** 
** Made by HUSSAIN Faisal
** Login   <hussai_f@etna-alternance.net>
** 
** Started on  Thu Oct 22 11:59:16 2015 HUSSAIN Faisal
** Last update Tue Oct 27 14:05:25 2015 HUSSAIN Faisal
*/
int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;

  for (i = 0; i < n; i++)
    {
      if (*(s1 + i) < *(s2 + i))
	return (-1);
      else if (*(s1 + i) > *(s2 + i))
	return (1);
      else if (*(s2 + i) == '\0')
	return (1);
    }
  return (0);
}
