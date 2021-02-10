#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (!av || !av[0] || ac < 1)
		return (0);
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			av[i][j] = toupper(av[i][j]);
			j++;
		}
		i++;
	}
	i = 1;
	while (av[i])
	{
		std::cout << av[i];
		i++;
	}
	std::cout << std::endl;
	return (0);
}
