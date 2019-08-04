#include <iostream>
#include <regex>

#ifndef _WIN32
#define ending true
#endif
#ifndef __linux__
#define ending false
#endif

int main(int argc, char* argv[])
{
	try
	{
		if(argc > 1)
		{
			throw std::runtime_error("No Arguments Plz");
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		exit(0);
	}
	
	int arr[11];
	std::string text;
	int max = 0;
	std::regex p("[^0-9]");

	std::cout << "Please enter 10 integer values" << std::endl;

	for (int i = 0; i < 10; i++)
	{
		std::cin >> text;
		if(regex_search(text, p))
		{
			std::cout << "Nope, try again" << std::endl;
			i--;
		}
		else
		{
			arr[i] = stoi(text);
		}
	}

	std::cout << "Executing Stalin Sort" << std::endl;

	max = arr[0];

	for (int i = 0; i < 10; i++)
	{
		int j = i + 1;

		if (max < arr[i])
		{
			max = arr[i];
		}

		if (max > arr[j])
		{
			arr[j] = 0;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] != 0)
		{
			std::cout << arr[i] << std::endl;
		}
	}

	if(ending)
	{
		system("pause");
	}

	return 0;
}
