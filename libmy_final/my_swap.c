/*
** my_swap.c for My Swap Integer in /home/salfai/etna/devc/Jour_03/hussai_f/my_swap
** 
** Made by HUSSAIN Faisal
** Login   <hussai_f@etna-alternance.net>
** 
** Started on  Wed Oct 21 12:39:17 2015 HUSSAIN Faisal
** Last update Wed Oct 21 13:51:59 2015 HUSSAIN Faisal
*/
void my_swap(int *a, int *b);

void my_swap(int *a, int *b)
{
  int temp;

  temp = *a;
  *a = *b;
  *b = temp;
}
