#pragma once
#include"Rectangle.h"

class Human{
private:
	char* name;
	int curs;

public:
	Human(const char *s, int num);

	~Human();
	Human(const Human&) = delete;
	Human& operator=(const Human&) = delete;


	void WhatThis(Rectangle &c);


	void GetName();
	int GetCurs();


};
