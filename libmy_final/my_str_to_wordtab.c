/*
** my_str_to_wordtab.c for My str to wordtab in /home/salfai/etna/devc/Jour_07/hussai_f/my_str_to_wordtab
** 
** Made by HUSSAIN Faisal
** Login   <hussai_f@etna-alternance.net>
** 
** Started on  Mon Oct 26 10:53:31 2015 HUSSAIN Faisal
** Last update Tue Nov 17 12:14:28 2015 HUSSAIN Faisal
*/

#include <stdlib.h>

int	wait_for_word(int index, char *str);
int	word_length(int repere, char *str);
int	test_word(int repere, int length, char *str);
int	my_count_words(char *str);

char	**alloc_first_dim(char *str)
{
  char	**tab;
  int	length;

  length = my_count_words(str);
  tab = malloc((length + 1) * sizeof(*tab));
  return (tab);
}

char	**my_str_to_wordtab(char *str)
{
  char	**wordtab;
  int	index;
  int	length;
  int	i;
  int	j;

  i = 0;
  wordtab = alloc_first_dim(str);
  while (*(str + index) != '\0')
    {
      index = wait_for_word(index, str);
      length = word_length(index, str);
      if ((test_word(index, length, str) == 1) && (length != 0))
	{
	  wordtab[i] = malloc((length + 1) * sizeof(**wordtab));
	  for (j = 0; j < length; j++)
	    *(wordtab[i] + j) = *(str + index + j);
	  i++;
	}
      index = index + length;
    }
  wordtab[i] = malloc(sizeof(**wordtab));
  *wordtab[i] = '\0';
  return (wordtab);
}
