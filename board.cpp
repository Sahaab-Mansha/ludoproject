#include "board.h"
using namespace sf;
board::board()
{
     h1.sethouse(4, 5, Color::Green);
}

int board::play()
{
	bool start = true;
	int x, y, temp = 0;
	int arr[10]{};
	int size=0;
	bool rolled = false;
	RenderWindow window(sf::VideoMode(1000, 980), "LUDO STAR", sf::Style::Titlebar | sf::Style::Close);
	Event ev;
	Texture backgroundTexture;

	if (!backgroundTexture.loadFromFile("ludo.jpg")) {
		return EXIT_FAILURE;
	}
	Sprite backgroundImage(backgroundTexture);



	while (window.isOpen())
	{
		rolled = false;
		while (window.pollEvent(ev))
		{

			switch (ev.type)
			{
			case Event::Closed:
				window.close();
				break;
			case Event::KeyPressed:
				if (ev.key.code == Keyboard::Escape)
					window.close();

				break;
			case Event::MouseButtonPressed:
				if (ev.mouseButton.button == Mouse::Left)
				{
					x = ev.mouseButton.x;
					y = ev.mouseButton.y;
					cout << x << " " << y << endl;
				}
				if (x >= 463 && x <= 536 && y >= 451 && y <= 523)
				{
					start = false;
					std::fill(std::begin(arr), std::end(arr), 0);
					size = 0;
					rolled = true;
					temp = dice.roll();
					arr[size] = temp;
					size++;
					window.draw(backgroundImage);
					h1.draw(window);
					dice.display(window);
					window.display();
					Sleep(300);
					if (temp == 6)
					{
						temp = dice.roll();
						window.draw(backgroundImage);
						h1.draw(window);
						dice.display(window);
						window.display();
						Sleep(300);
						temp = dice.roll();
						arr[size] = temp;
						size++;
						window.draw(backgroundImage);
						h1.draw(window);
						dice.display(window);
						window.display();
						Sleep(300);
						if (temp == 6)
						{
							temp = dice.roll();
							window.draw(backgroundImage);
							h1.draw(window);
							dice.display(window);
							window.display();
							Sleep(300);
							temp = dice.roll();
							arr[size] = temp;
							size++;
							window.draw(backgroundImage);
							h1.draw(window);
							dice.display(window);
							window.display();
							Sleep(300);
							if (temp == 6)
							{
								temp = 0;
							}
						}
					}

				}
				break;

			}
			if (rolled == true)
				break;

		}
		
		if (temp != 0 && rolled == true)
		{

			h1.turn(arr, size, window, backgroundImage, dice);

		}
		else if(start==true){
			window.clear();
			window.draw(backgroundImage);
			h1.draw(window);
			dice.display(window);
			window.display();
		}
	}


};