#pragma once
#include "die.h"
#include "piece.h"
#include "house.h"
#define NOMINMAX
#include <Windows.h>
#include <SFML/Graphics.hpp>
#include <iostream>
class board
{
	die dice;
	house h1;
public:
	board();
	int play();
	
};