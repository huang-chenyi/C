#include <iostream>

void main()
{
	int m, n, k;

	m = 1000;
	n = 45;
	std::cout << "\n(" << m << ':' << n << ')';
	k = 0;
	while (m >= n) {
		m = m - n;
		k = k + 1;
	}
	std::cout << k << "-- - " << m << std::endl;
}

