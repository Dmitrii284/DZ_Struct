#include <iostream>
#include<string>
//Task 1
struct Movues {
	std::string title;
	int year;
	std::string genre;
	unsigned int duration;
	unsigned int pice;
}x{ "Avanar 2",2010,"Adventure", 150, 280 };


int main() {
	setlocale(LC_ALL, "Rus");

	//Task 1
	
	std::cout << "Movie title: " << x.title << std::endl;
	std::cout << "Year release: " << x.year << std::endl;
	std::cout << "Film genre: " << x.genre << std::endl;
	std::cout << "Movie in minutes: " << x.duration << std::endl;
	std::cout << "Price per movie disc: " << x.pice << std::endl;
	



	return 0;
}