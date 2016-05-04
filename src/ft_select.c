#include "../inc/ft_select.h"
int main(int ac, char **av, char **env)
{
	struct winsize win;
	struct termios term;

	if (ac <= 1)
		return 0;
	(void)env;
	(void)ac;
	(void)av;
	init_termios(&term);
	ioctl(0, TIOCGWINSZ, &win);
	// if (!*env)
	// 	return (0);
	// while(sig++ < 32)
	// 	signal(sig, func(sig));
	return (0);
}

// void			func(int sig)
// {
// 	printf()
// 	char			cp[2];

// 	// if (sig == SIGWINCH)
// 	// 	ft_winch();
// 	// if (sig == SIGINT)
// 	// {
// 	// 	ft_termcl();
// 	// 	exit(0);
// 	// }
// 	else if (sig == SIGCONT)
// 	{
// 		signal(SIGTSTP, func);
// 		ft_init_termios(NULL);
// 		ft_display(ft_static(NULL));
// 	}
// 	else if (sig == SIGTSTP)
// 	{
// 		ft_bzero(cp, 3);
// 		cp[0] = 26;
// 		ft_termcl();
// 		signal(SIGTSTP, SIG_DFL);
// 		ioctl(0, TIOCSTI, cp);
// 	}
// }