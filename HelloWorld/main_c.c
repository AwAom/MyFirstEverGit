/* *********************************************************** */
/*                                                             */
/*     AAAAA    WW      WW    AAAAA      OOOOO    MM      MM   */
/*    AA   AA   WW      WW   AA   AA    OO   OO   MMM    MMM   */
/*   AA     AA   WW WW WW   AA     AA  OO     OO  MM M  M MM   */
/*   AAAAAAAAA   WW WW WW   AAAAAAAAA  OO     OO  MM  MM  MM   */
/*   AA     AA    WW  WW    AA     AA   OO   OO   MM      MM   */
/*   AA     AA    WW  WW    AA     AA    OOOOO    MM      MM   */
/*                                                             */
/* *********************************************************** */


#include <unistd.h>

void	ft_putchar(char c);

int		main(void)
{
	ft_putchar('H');
	ft_putchar('e');
	ft_putchar('l');
	ft_putchar('l');
	ft_putchar('o');
	ft_putchar(' ');
	ft_putchar('W');
	ft_putchar('o');
	ft_putchar('r');
	ft_putchar('l');
	ft_putchar('d');
	ft_putchar('!');
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
