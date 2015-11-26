/*
** my_putstr.c for My Put String in /home/salfai/etna/devc/Jour_03/hussai_f/my_putstr
** 
** Made by HUSSAIN Faisal
** Login   <hussai_f@etna-alternance.net>
** 
** Started on  Wed Oct 21 11:01:34 2015 HUSSAIN Faisal
** Last update Tue Oct 27 14:01:13 2015 HUSSAIN Faisal
*/
void	my_putchar(char str);

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (*(str + i) != '\0')
    {
      my_putchar(*(str + i));
      i++;
    }
}
