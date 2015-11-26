/*
** my_getnbr.c for My Get Nbr in /home/salfai/Bureau/etna/devc/slf
** 
** Made by HUSSAIN Faisal
** Login   <hussai_f@etna-alternance.net>
** 
** Started on  Sun Nov  8 12:27:16 2015 HUSSAIN Faisal
** Last update Tue Nov 17 12:04:59 2015 HUSSAIN Faisal
*/

static char	my_char_num(char chr)
{
  if ((chr >= 48) && (chr <= 57))
    return (chr);
  return ('R');
}

static int	my_num_neg(char *str)
{
  int		i;
  int		signe;

  i = 0;
  signe = 1;
  while ((*(str + i) < 48) || (*(str + i) > 57))
    {
      if (*(str + i) == '-')
	signe = signe * (-1);
      i++;
    }
  return (signe);
}

int	my_getnbr(char *str)
{
  int	i;
  int	res;
  
  i = 0;
  res = 0;
  while (my_char_num(*(str + i)) == 'R')
    i++;
  while (my_char_num(*(str + i)) != 'R')
    {
      if (my_num_neg(str) < 0)
	res = ((res * 10) - (my_char_num(*(str + i)) - 48));
      else
	res = ((res * 10) + (my_char_num(*(str + i)) - 48));
      i++;
    }
  return (res);
}
