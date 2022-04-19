#include <iostream>
#include <stdint.h>

typedef struct	s_data {

	std::string	str;
	char		c;
	int			i;
}				Data;

uintptr_t serialize(Data* ptr) {

	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {

	return reinterpret_cast<Data*>(raw);
}

int main( void ) {

	Data *data = new Data;

	data->str = "hello world";
	data->c = 'O';
	data->i = 10;

	std::cout << "Data: " << data << ". data->str: " << data->str << ". data->i: " << data->i << ". data->c: " << data->c << std::endl << std::endl;

	uintptr_t serialized = serialize(data);
	Data *new_data = deserialize(serialized);

	std::cout << "Data: " << data << ". data->str: " << data->str << ". data->i: " << data->i << ". data->c: " << data->c << std::endl;
	std::cout << "New_data: " << new_data << ". new_data->str: " << new_data->str << ". new_data->i: " << new_data->i << ". new_data->c: " << new_data->c << std::endl << std::endl;

	std::cout << "Change of values:" << std::endl;

	new_data->str = "It's changed !!";
	new_data->c = 'P';
	new_data->i = 42;

	std::cout << "Data: " << data << ". data->str: " << data->str << ". data->i: " << data->i << ". data->c: " << data->c << std::endl;
	std::cout << "New_data: " << new_data << ". new_data->str: " << new_data->str << ". new_data->i: " << new_data->i << ". new_data->c: " << new_data->c << std::endl << std::endl;

	delete data;

	return 0;
}
