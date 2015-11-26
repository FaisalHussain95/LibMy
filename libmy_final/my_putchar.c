/*
** my_putchar.c for my_putchar in /home/salfai/etna/devc/hussai_f/my_putchar
** 
** Made by HUSSAIN Faisal
** Login   <hussai_f@etna-alternance.net>
** 
** Started on  Mon Oct 19 10:00:50 2015 HUSSAIN Faisal
** Last update Tue Nov 17 12:06:26 2015 HUSSAIN Faisal
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
