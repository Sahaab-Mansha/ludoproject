#pragma once
#include "piece.h"
#include "die.h"
class house {

private:
	piece* pieces;
	int no_pieces;
	int house_no;
	int wins=0;
	bool win=false;
	int no_alive;
	int alive()
	{
		no_alive = 0;
		for (int i = 0; i < no_pieces; i++)
		{
			if (pieces[i].isalive() == true)
				no_alive++;
		}
		return no_alive;
	}
public:
	house();
	house(int no_of_pieces, int no, Color clr);
    void sethouse(int no_of_pieces, int no,Color clr);
    void draw(RenderWindow& window);
	void increment(int piece_no);
	void turn(int num[3],int no_of_rolls,RenderWindow& window,Sprite& backgroundimage,die& dice);
	int no_of_wins();
};
