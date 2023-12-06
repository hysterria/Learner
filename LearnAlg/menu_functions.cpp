#include "menu_functions.hpp"

#include <cstdlib>
#include <iostream>

const ABelyaeva::MenuItem* ABelyaeva::show_menu(const MenuItem* current) {
	std::cout << "Welcome to Hell!" << std::endl;
	for (int i = 1; i < current->children_count; i++) {
		std::cout << current->children[i]->title << std::endl;
	}
	std::cout << current->children[0]->title << std::endl;
	std::cout << "$%#%$#^%$%$^%$ > ";

	int user_input;
	std::cin >> user_input;
	std::cout << std::endl;
	
	return current->children[user_input];
}
const ABelyaeva::MenuItem* ABelyaeva::exit(const MenuItem* current) {
	std::exit(0);
}

const ABelyaeva::MenuItem* ABelyaeva::study_summ(const MenuItem* current) {
	//TODO
	std::cout << current->title << std::endl;
	return current->parent;
}
const ABelyaeva::MenuItem* ABelyaeva::study_substract(const MenuItem* current) {
	//TODO
	std::cout << current->title << std::endl;
	return current->parent;
}
const ABelyaeva::MenuItem* ABelyaeva::study_multiply(const MenuItem* current) {
	//TODO
	std::cout << current->title << std::endl;
	return current->parent;
}
const ABelyaeva::MenuItem* ABelyaeva::study_devide(const MenuItem* current) {
	//TODO
	std::cout << current->title << std::endl;
	return current->parent;
}
const ABelyaeva::MenuItem* ABelyaeva::study_go_back(const MenuItem* current) {
	//TODO
	return current->parent->parent;
}