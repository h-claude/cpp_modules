#include <iostream>
#include <cstdlib>
#include "Array.hpp"

#define MAX_VAL 10
int main(int, char**)
{
	{
		Array<int> numbers(MAX_VAL);
		int* mirror = new int[MAX_VAL];
		srand(time(NULL));
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}
		std::cout << "numbers: ";
		for (int i = 0; i < MAX_VAL; i++)
		{
			std::cout << numbers[i] << " ";
		}
		std::cout << std::endl;
		std::cout << "mirror:  ";
		for (int i = 0; i < MAX_VAL; i++)
		{
			std::cout << mirror[i] << " ";
		}
		std::cout << std::endl;
		//SCOPE
		Array<int> tmp = numbers;
		Array<int> test(tmp);

		for (int i = 0; i < MAX_VAL; i++)
		{
			if (mirror[i] != tmp[i])
			{
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}
		std::cout << "All values are the same!" << std::endl;
		try
		{
			numbers[-2] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			numbers[MAX_VAL] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			numbers[i] = rand();
		}
		delete [] mirror;//
	}
	{
		Array<std::string> strings(3);
		strings[0] = "hello";
		strings[1] = "world";
		strings[2] = "!";
		std::cout << strings[0] << " " << strings[1] << strings[2] << std::endl;
		try
		{
			strings[-1] = "error";
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			strings[3] = "error";
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}