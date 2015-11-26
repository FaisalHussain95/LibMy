/*
** my_strlen.c for My String Length in /home/salfai/etna/devc/Jour_03/hussai_f/my_strlen
** 
** Made by HUSSAIN Faisal
** Login   <hussai_f@etna-alternance.net>
** 
** Started on  Wed Oct 21 11:35:57 2015 HUSSAIN Faisal
** Last update Sat Oct 24 16:54:27 2015 HUSSAIN Faisal
*/
int	my_strlen(char *str)
{
  int	length;

  length = 0;
  while (*(str + length) != 0)
    length++;
  return (length);
}
