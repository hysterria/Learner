#include <clocale>
#include <iostream>

#include "menu.hpp"
#include "menu_functions.hpp"


int main() {
	std::setlocale(LC_ALL, "");

	ABelyaeva::MenuItem study_summ = { "1 - Хочу научиться складывать...?!?", ABelyaeva::study_summ };
	ABelyaeva::MenuItem study_substract = { "2 - Хочу научиться вычитать (*)(*)", ABelyaeva::study_substract };
	ABelyaeva::MenuItem study_multiply = { "3 - Хочу научиться умножать...пожалуйста....",ABelyaeva::study_multiply };
	ABelyaeva::MenuItem study_devide = { "4 - Хочу научиться делить.Сюда мне это деление....",ABelyaeva::study_devide };
	ABelyaeva::MenuItem study_go_back = { "0 - выйти (не в окно)",ABelyaeva::study_go_back };

	ABelyaeva::MenuItem* study_children[] = {
		&study_go_back,
		&study_summ,
		&study_substract,
		&study_multiply,
		&study_devide
	};
	const int study_size = sizeof(study_children) / sizeof(study_children[0]);
	
	ABelyaeva::MenuItem study = { "1 - Хочу учиться математике(жеска)", ABelyaeva::study };
	ABelyaeva::MenuItem exit = { "0 - Я лучше пойду полежу...RIP", ABelyaeva::exit };

	ABelyaeva::MenuItem* main_children[] = { &exit,&study };
	const int main_size = sizeof(main_children) / sizeof(main_children[0]);

	int user_input;
	do {
		std::cout << "Welcome to Hell!" << std::endl;
		for (int i = 1; i < main_size; i++) {
			std::cout << main_children[i]->title << std::endl;
		}
		std::cout << main_children[0]->title << std::endl;
		std::cout << "$%#%$#^%$%$^%$ > ";

		std::cin >> user_input;
		main_children[user_input]->func();

		std::cout << std::endl;
	} while (true);
	return 0;
}