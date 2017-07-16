#include <stdio.h>

void	initialize(int *i, int *total, int *neg)
{
	*i = 0;
	*total = 0;
	*neg = 1;
}

int		atoi(char str)
{
	int i;
	int total;
	int neg;

	while (i >= 0 && str != '\0')
	{
		if (str == '+')
			i++;
		if (str < 48 || str > 57)
			return (neg * total);
		total = (total * 10) + (str - 48);
		i++;
	}
	return (neg * total);
}

int add(int nbr1, int nbr2)
{
    int nbr3;
    nbr3 = nbr1 + nbr2;
    return (nbr3);
}

int sub(int nbr1, int nbr2)
{
    int nbr3;
    nbr3 = nbr1 - nbr2;
    return (nbr3);
}

int mult(int nbr1, int nbr2)
{
    int nbr3;
    nbr3 = nbr1 * nbr2;
    return (nbr3);
}

int div(int nbr1, int nbr2)
{
    int nbr3;
    nbr3 = nbr1 / nbr2;
    return (nbr3);
}

int mod(int nbr1, int nbr2)
{
    int nbr3;
    nbr3 = nbr1 % nbr2;
    return (nbr3);
}

int do_math(char *str)
{
    int i = 0;
    int nb;
    while (str[i] != '\0')
    {
        if (str[i] == '+' || str[i] == '-')
        {
            if (str[i] == '+')
                nb = add(atoi(str[i - 1]), atoi(str[i + 1]));
            else
                nb = sub(atoi(str[i - 1]), atoi(str[i + 1]));
        }
        if (str[i] == '*' || str[i] == '/' || str[i] == '%')
        {
            if (str[i] == '*')
                nb = mult(atoi(str[i - 1]), atoi(str[i + 1]));
            else if (str[i] == '/')
                nb = div(atoi(str[i - 1]), atoi(str[i + 1]));
            else
                nb = mod(atoi(str[i - 1]), atoi(str[i + 1]));
        }
        i++;
    }
    return (nb);
}

int main()
{
    char *str = "3+2";
    printf("%d", do_math(str));
    return (0);
}
