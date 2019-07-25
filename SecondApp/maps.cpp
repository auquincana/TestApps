#include <iostream>
#include <string>
#include <map>

int main()
{
	const std::map<std::string, int> mapCityPopulation{ 
		{ "Beijing", 21'707'000 },
		{ "London", 8'787'892 },
		{ "New York", 8'622'698 } 
	};

	for (auto&[city,population] : mapCityPopulation)
		std::cout << city << ": " << population << '\n';
	
	std::map<std::string, int>  mapUsersAge{ { "Alex", 45 },{ "John", 25 } }; 
	
	std::map mapCopy{ mapUsersAge }; 
	
	if (auto[iter, wasAdded] = mapCopy.insert_or_assign("John", 26); !wasAdded) 
		std::cout << iter->first << " reassigned...\n"; 
	
	for (const auto&[key, value] : mapCopy) 
		std::cout << key << ", " << value << '\n';
}