#include "../inc/ft_select.h"
#include <stdio.h>

void	init_termios(struct termios *term)
{
	struct winsize win;
	
	if (tgetent(NULL, getenv("TERM")) < 1)
		return ;
	if (tcgetattr(0, term) == -1)
		return ;
	term->c_lflag &= ~(ICANON);
	term->c_lflag &= ~(ECHO);
	term->c_cc[VMIN] = 0;
	term->c_cc[VTIME] = 0;
	ioctl(0, TIOCGWINSZ, &win);
	printf("bangbang");
	if (tcsetattr(0, TCSADRAIN, pterm) == -1)
	{
		ft_putstr("tcsetattr error");
		return (0);
	}
}