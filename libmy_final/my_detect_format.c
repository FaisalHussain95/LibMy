/*
** my_detect_format.c for My detect format custom in /home/salfai/etna/devc/Jour_07/hussai_f/my_str_to_wordtab
** 
** Made by HUSSAIN Faisal
** Login   <hussai_f@etna-alternance.net>
** 
** Started on  Mon Oct 26 11:32:10 2015 HUSSAIN Faisal
** Last update Tue Nov 17 12:05:57 2015 HUSSAIN Faisal
*/

int	wait_for_word(int index, char *str)
{
  int	i;

  i = index;
  while ((*(str + i) != '\0') &&
	 (*(str + i) <= 32))
    i++;
  return (i);
}

int	word_length(int repere, char *str)
{
  int	i;

  i = repere;
  while ((*(str + i) != '\0') &&
	 (*(str + i) > 32))
    i++;
  return (i - repere);
}

int	test_word(int repere, int length, char *str)
{
  int	i;
  int	res;

  res = 0;
  for (i = repere; i < (length + repere); i++)
    {
      if (((*(str + i) >= 65) && (*(str + i) <= 90)) ||
	  ((*(str + i) >= 97) && (*(str + i) <= 122)) ||
	  ((*(str + i) >= 48) && (*(str + i) <= 57)))
	res++;
    }
  if (res == length)
    res = 1;
  else
    res = 0;
  return (res);
}

int		my_count_words(char *str)
{
  char		res;
  int		index;
  int		length;

  index = 0;
  res = 0;
  while ((*(str + index) != '\0'))
    {
      index = wait_for_word(index, str);
      length = word_length(index, str);
      if ((test_word(index, length, str) == 1) && (length > 0))
	res++;
      index = index + length;
    }
  return (res);
}
