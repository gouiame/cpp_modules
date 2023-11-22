#include <iostream>

void    ft_toupper(char *str)
{
	int i = 0;
	while(str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			std::cout << str[i];
		}
		else
			std::cout << str[i];
		i++;
	}
}

int main(int argc, char *argv[]) {
	if (argc == 1)
	{
		std::cout << "LOUD AND UNBEARABLE FEEDBACK NOISE" << std::endl;
		return 1;
	}

	else
	{
		for (int i = 1; i < argc; i++)
		{
			ft_toupper(argv[i]);
		}
		std::cout << std::endl;
	}

	return 0;
}
