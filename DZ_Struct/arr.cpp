#include <iostream>
#include<string>
//Task 1
struct movies {
	std::string title;
	int year;
	std::string genre;
	unsigned int duration;
	unsigned int price;
};
void show_movie(const movies &d) {
	std::cout << "1 Movie title: " << d.title << std::endl;
	std::cout << "2 Year release: " << d.year << std::endl;
	std::cout << "3 Film genre: " << d.genre << std::endl;
	std::cout << "4 Movie in minutes: " << d.duration << std::endl;
	std::cout << "5 Price per movie disc: " << d.price << std::endl;
}
//Task 2
movies expen_sive(const movies& x, const movies& y, const movies& z) {
	unsigned int max_price = x.price;
	const movies* ppr = &x;
	if (y.price > x.price) {
		max_price = y.price;
		ppr = &y;
	}
	if (z.price > y.price) {
		max_price = z.price;
		ppr = &z;
	}
	return *ppr;
}

void update_info(movies& film) {	
	int num;
	std::cout << "Выберите номер строки для изменения  от 1 до 5 -> ";
	std::cin >> num;
	switch (num)
	{
	case 1:
		std::cout << "Введите новое название фильма -> ";
		std::cin.ignore();
		std::getline(std::cin, film.title);
		break;
	case 2:
		std::cout << "Введите новый год выхода фильма -> ";		
		std::cin>> film.year;
		break;
	case 3:
		std::cout << "Введите новое название жанра фильма -> ";
		std::cin.ignore();
		std::getline(std::cin, film.genre);
		break;
	case 4:
		std::cout << "Введите новую продолжительность фильма -> ";		
		std::cin >> film.duration;
		break;
	case 5:
		std::cout << "Введите новую цену за диск -> ";		
		std::cin >> film.price;
		break;
	default:
		std::cout << "Ввели не верный пункт, попробуйте еще раз!\n\n";
		return;
	}
	std::cout << "Информация обновлена!!!\n\n";
}

int main() {
	setlocale(LC_ALL, "Rus");

	//Task 1	
	movies k{ "MONK AND DEMON", 2022, "Comedy", 130, 480 };
	show_movie(k);
	std::cout << "---------------------------\n";
	std::cout << "---------------------------\n";
	//Task 2
	std::cout << "Задача 2. Список фильмов: \n\n";
	movies a{ "Avanar 2", 1989, "Adventure", 150, 580 };
	movies b{ "Rokki 2", 2010, "Action", 210, 780 };
	movies c{ "Apocalypse", 2000, "Catastrophe", 180, 680 };
	show_movie(a);
	std::cout << "---------------------------\n";
	show_movie(b);
	std::cout << "---------------------------\n";
	show_movie(c);
	std::cout << "---------------------------\n";
	std::cout << "Объект с самой высокой ценой за диск: " << expen_sive(a, b, c).price << '\n';
	std::cout << "---------------------------\n";
	std::cout << "---------------------------\n";
	//Task 3
	std::cout << "Задача 3.\nИзменение информации в фильме \n";
	movies arr[3]{ a, b, c };
	for (int i = 0; i < 3; i++)
	std::cout << i + 1 << " " << arr[i].title << '\n';
	int choice;
	std::cout << "Выберите фильм в котором надо поменять информацию: -> ";
	std::cin >> choice;	
	for (int i = 0; i < 3; i++)
		if (choice == i + 1) {			
			update_info(arr[i]);
			show_movie(arr[i]);
			break;
		}
			
	return 0;
}