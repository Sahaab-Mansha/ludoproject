#pragma once
#include "die.h"

	int die::roll()
	{
		srand(time(0));
		random = rand() % 6 + 1;
		return random;

	}
	void die::display(RenderWindow& window)
	{
		Texture dice1;
		dice1.loadFromFile("die1.jpg");



		Sprite sprite1(dice1);
		sprite1.setScale(0.43f, 0.43f);
		sprite1.setPosition(453, 442);

		Texture dice2;
		dice2.loadFromFile("projectimages/die2.jpg");
		Sprite sprite2(dice2);
		sprite2.setScale(0.43f, 0.43f);
		sprite2.setPosition(453, 442);

		Texture dice3;
		dice3.loadFromFile("projectimages/die3.png");
		Sprite sprite3(dice3);
		sprite3.setScale(0.18f, 0.18f);
		sprite3.setPosition(453, 442);

		Texture dice4;
		dice4.loadFromFile("projectimages/die4.jpg");
		Sprite sprite4(dice4);
		sprite4.setScale(0.43f, 0.43f);
		sprite4.setPosition(453, 442);

		Texture dice5;
		dice5.loadFromFile("projectimages/die5.jpg");
		Sprite sprite5(dice5);
		sprite5.setScale(0.43f, 0.43f);
		sprite5.setPosition(453, 442);

		Texture dice6;
		dice6.loadFromFile("projectimages/die6.jpg");
		Sprite sprite6(dice6);
		sprite6.setScale(0.43f, 0.43f);
		sprite6.setPosition(453, 442);
		if (random == 1)
		{
			window.draw(sprite1);
		}
		else if (random == 2)
		{
			window.draw(sprite2);

		}
		else if (random == 3)
			window.draw(sprite3);
		else if (random == 4)
			window.draw(sprite4);
		else if (random == 5)
			window.draw(sprite5);
		else if (random == 6)
			window.draw(sprite6);

	}
