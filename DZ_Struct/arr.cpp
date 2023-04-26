#include <iostream>
#include<string>
//Task 1
struct movues {
	std::string title;
	int year;
	std::string genre;
	unsigned int duration;
	unsigned int pice;
};
void show_movie(const movues &PD) {
	std::cout << "Movie title: " << PD.title << std::endl;
	std::cout << "Year release: " << PD.year << std::endl;
	std::cout << "Film genre: " << PD.genre << std::endl;
	std::cout << "Movie in minutes: " << PD.duration << std::endl;
	std::cout << "Price per movie disc: " << PD.pice << std::endl;
}
//Task 2




int main() {
	setlocale(LC_ALL, "Rus");

	//Task 1	
	movues x{ "MONK AND DEMON", 2022, "Comedy", 130, 480 };
	show_movie(x);
	std::cout << "---------------------------\n";
	std::cout << "---------------------------\n";
	//Task 2
	std::cout << "Задача 2.\nФункция, которая возвращает объект с самой высокой ценой за диск.\n";
	movues a { "Avanar 2", 1989, "Adventure", 150, 580 };
	show_movie(a);
	std::cout << "---------------------------\n";
	movues b { "Rokki 2", 2010, "Action", 210, 780 };
	show_movie(b);
	std::cout << "---------------------------\n";
	movues c { "Apocalypse", 2000, "Catastrophe", 180, 680 };
	show_movie(c);
	std::cout << "---------------------------\n";

	return 0;
}