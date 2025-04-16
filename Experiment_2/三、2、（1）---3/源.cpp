#include <iostream>

void main()
{
	int i;

	for (i = 1; i <= 5; i++) {
		if (i % 2)
			std::cout << ' * ';
		else
			continue;
		std::cout << '# ';
	}
	std::cout << "$\n";
}

