/*
** my_put_nbr.c for My put Nomber in /home/salfai/etna/devc/Jour_05/hussai_f
** 
** Made by HUSSAIN Faisal
** Login   <hussai_f@etna-alternance.net>
** 
** Started on  Fri Oct 23 14:35:11 2015 HUSSAIN Faisal
** Last update Tue Oct 27 14:00:27 2015 HUSSAIN Faisal
*/
void	my_putchar(char chr);

void	my_nb_isneg(int n)
{
  int	tab[10];
  int	i;
  int	nbrlen;

  if (n < 0)
    {
      i = 0;
      n = n * (-1);
      while (n > 0)
	{
	  tab[i] = (n % 10);
	  n = n / 10;
	  i++;
	}
      nbrlen = i - 1;
      for (i = nbrlen; i > (-1); i--)
	my_putchar(tab[i] + 48);
    }
}

void	my_nb_islimit(int n)
{
  int	tab[10];
  int	i;
  int	nbrlen;

  if (n == -2147483648)
    {
      i = 0;
      n = 2147483647;
      while (n > 0)
	{
	  if (i == 0)
	    tab[i] = (n % 10) + 1;
	  else
	    tab[i] = (n % 10);
	  n = n / 10;
	  i++;
	}
      nbrlen = i - 1;
      for (i = nbrlen; i > (-1); i--)
	my_putchar(tab[i] + 48);
    }
  else
    my_nb_isneg(n);
}

void	my_put_nbr(int n)
{
  int	tab[10];
  int	i;
  int	nbrlen;

  i = 0;
  if (n < 0)
    {
      my_putchar('-');
      my_nb_islimit(n);
    }
  else if ((n != 0) && (n >= 10))
    {
      while (n > 0)
	{
	  tab[i] = (n % 10);
	  n = n / 10;
	  i++;
	}
      nbrlen = i - 1;
      for (i = nbrlen; i > (-1); i--)
	my_putchar(tab[i] + 48);
    }
  else
    my_putchar(n + 48);
}
