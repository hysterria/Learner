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
	
	ABelyaeva::MenuItem study = { "1 - Хочу учиться математике(жеска)", ABelyaeva::show_menu,study_children,study_size };
	ABelyaeva::MenuItem exit = { "0 - Я лучше пойду полежу...RIP", ABelyaeva::exit };

	ABelyaeva::MenuItem* main_children[] = { &exit,&study };
	const int main_size = sizeof(main_children) / sizeof(main_children[0]);

	ABelyaeva::MenuItem main = { nullptr,ABelyaeva::show_menu,main_children,main_size };

	study_summ.parent = &study;
	study_substract.parent = &study;
	study_multiply.parent = &study;
	study_devide.parent = &study;
	study_go_back.parent = &study;

	study.parent = &main;
	exit.parent = &main;

	const ABelyaeva::MenuItem* current = &main;
	do {
		current = current->func(current);
	} while (true);

	return 0;
}