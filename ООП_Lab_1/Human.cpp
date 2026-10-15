#include "Human.h"
#include <iostream>
#include<cstring>

#pragma warning(disable : 4996)

Human::Human(const char* s, int num) {
	if (!s) s = "";
	curs = num;
	name = new char[std::strlen(s) + 1];
	for (int len = 0; s[len] != '\0';len++)
		name[len] = s[len];
	name[std::strlen(s)] = '\0';
}


Human::~Human() {
	delete[] name;
}

void Human::GetName() {
	std::cout << name << std::endl;
	
}
int Human::GetCurs() { return curs; }

void Human::WhatThis(Rectangle& c) {
	if (c.GetLenX() == c.GetLenY()) std::cout << "Это квадрат" << std::endl;
	else std::cout << "Это прямоугольник" << std::endl;
}