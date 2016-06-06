/*
** echo.c for echo in /home/jabbar_y/rendu/42sh/NE_PAS_TOUCHER
**
** Made by Jabbari Yassir
** Login   <jabbar_y@epitech.net>
**
** Started on  Tue May 31 15:15:24 2016 Jabbari Yassir
** Last update Mon Jun  6 02:51:29 2016 Jabbari Yassir
*/

#include "42sh.h"

int		echo_n(char **tab)
{
  int		i;

  i = 2;
  if (tab[i])
    {
      while (tab[i])
	{
	  my_putstr(tab[i]);
	  if (tab[i + 1])
	    my_putstr(" ");
	  i++;
	}
    }
  return (0);
}

int		echo(char **tab, t_list *list)
{
  int		i;

  i = 1;
  if (tab[i] && ((my_strcmp("-n", tab[i])) == 0))
    echo_n(tab);
  else if (tab[i] && (tab[i][0] == '$'))
    echo_valuenv(tab, list);
  else
    {
      while (tab[i])
	{
	  my_putstr(tab[i]);
	  if (tab[i + 1])
	    my_putstr(" ");
	  i++;
	}
      my_putstr("\n");
    }
  return (0);
}
