#ifndef FT_SELECT
# define FT_SELECT
			
# include "../libft/libft.h"
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <termios.h>
# include <term.h>
# include <curses.h>
# include <sys/ioctl.h>
# include <fcntl.h>
#include <stdio.h>

void	init_termios(struct termios *term);
#endif