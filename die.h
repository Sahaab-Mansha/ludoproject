#pragma once
#include <iostream>
#define NOMINMAX
#include <Windows.h>
#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;
class die {

protected:
	int random;
public:

	int roll();
	void display(RenderWindow& window);
	
};