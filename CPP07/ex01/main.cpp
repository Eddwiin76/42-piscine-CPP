#include "iter.hpp"

int main( void ) {

	int i[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	::iter(i, sizeof(i) / sizeof(i[0]), printElement);

	std::cout << std::endl;

	std::string str[] = {"hello world", "ooooh bella", "pole pole", "time time"};
	::iter(str, sizeof(str) / sizeof(str[0]), printElement);

	return 0;
}
