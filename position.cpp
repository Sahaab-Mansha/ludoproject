#include "position.h"
position::position(int piece, int house)
{
	y = house;
	x = -1 * piece;
	setpos(x, y);
}
/*position(int x, int y)
{
	this->x = x;bbb
	this->y = y;
	setpos(x, y);
}*/
void position::setpos(int x, int y)
{
	this->x = x;
	this->y = y;
	if (y == 1)
	{
		if (x == 0)
		{
			x1 = 480;
			y1 = 629;
		}
		if (x == -1)
		{
			x1 = 320;
			y1 = 725;
		}
		if (x == -2)
		{
			x1 = 285;
			y1 = 787;
		}
		if (x == -3)
		{
			x1 = 219;
			y1 = 785;
		}
		if (x == -4)
		{
			x1 = 321;
			y1 = 847;
		}
		if (x >= 7 && x <= 12)
		{
			x1 = 477;
			y1 = 930 - (x - 7) * 57;
		}
		else if (x >= 13 && x <= 18)
		{
			x1 = 418;
			y1 = 926 - (x - 13) * 57;
		}
		else if (x >= 1 && x <= 6) {

			x1 = 538;
			y1 = 644 + (x - 1) * 57;
		}
	}
	else if (y == 2)
	{
		if (x == 0)
		{
			x1 = 358;
			y1 = 554;
		}
		else if (x == -1)
		{
			x1 = 70;
			y1 = 405;
		}
		else if (x == -2)
		{
			x1 = 100;
			y1 = 465;
		}
		else if (x == -3)
		{
			x1 = 60;
			y1 = 524;
		}
		else if (x == -4)
		{
			x1 = 170;
			y1 = 467;
		}
		else if (x >= 13 && x <= 18)
		{
			x1 = 50 + (x - 13) * 48;
			y1 = 643 - (x - 13) * 28;
		}
		else if (x >= 7 && x <= 12)
		{
			y1 = 700 + (x - 7) * 30;
			x1 = 70 + (x - 7) * 50;
		}
		else if (x >= 1 && x <= 6) {

			x1 = 352 - (x - 1) * 50;
			y1 = 610 + (x - 1) * 28;
		}
	}
	else if (y == 3)
	{
		if (x == 0)
		{
			x1 = 360;
			y1 = 422;
		}
		else if (x == -1)
		{
			x1 = 321;
			y1 = 200;
		}
		else if (x == -2)
		{
			x1 = 289;
			y1 = 136;
		}
		else if (x == -3)
		{
			x1 = 324;
			y1 = 80;
		}
		else if (x == -4)
		{
			x1 = 218;
			y1 = 140;
		}
		else if (x >= 13 && x <= 18)
		{
			x1 = 105 + (x - 13) * 50;
			y1 = 183 + (x - 13) * 28;
		}
		else if (x >= 7 && x <= 12)
		{
			y1 = 230 + (x - 7) * 28;
			x1 = 85 + (x - 7) * 50;
		}
		else if (x >= 1 && x <= 6) {

			x1 = 295 - (x - 1) * 50;
			y1 = 430 - (x - 1) * 28;
		}
	}
	else if (y == 4)
	{
		if (x == 0)
		{
			x1 = 480;
			y1 = 354;
		}
		else if (x == -1)
		{
			x1 = 630;
			y1 = 80;
		}
		else if (x == -2)
		{
			x1 = 667;
			y1 = 137;
		}
		else if (x == -3)
		{
			x1 = 630;
			y1 = 198;
		}
		else if (x == -4)
		{
			x1 = 730;
			y1 = 139;
		}
		else if (x >= 13 && x <= 18)
		{
			x1 = 535;
			y1 = 7 + (x - 13) * 56;
		}
		else if (x >= 7 && x <= 12)
		{
			y1 = 10 + (x - 7) * 55;
			x1 = 480;
		}
		else if (x >= 1 && x <= 6) {

			x1 = 418;
			y1 = 290 - (x - 1) * 57;
		}
	}
	else if (y == 5)
	{
		if (x == 0)
		{
			x1 = 594;
			y1 = 417;
		}
		else if (x == -1)
		{
			x1 = 887;
			y1 = 406;
		}
		else if (x == -2)
		{
			x1 = 856;
			y1 = 464;
		}
		else if (x == -3)
		{
			x1 = 785;
			y1 = 465;
		}
		else if (x == -4)
		{
			x1 = 885;
			y1 = 520;
		}
		else if (x >= 13 && x <= 18)
		{
			x1 = 900 - (x - 13) * 48;
			y1 = 285 + (x - 13) * 28;
		}
		else if (x >= 7 && x <= 12)
		{
			x1 = 870 - (x - 7) * 48;
			y1 = 235 + (x - 7) * 28;
		}
		else if (x >= 1 && x <= 6) {

			x1 = 600 + (x - 1) * 48;
			y1 = 325 - (x - 1) * 28;
		}
	}
	else if (y == 6)
	{
		if (x == 0)
		{
			x1 = 600;
			y1 = 561;
		}
		else if (x == -1)
		{
			x1 = 628;
			y1 = 724;
		}
		else if (x == -2)
		{
			x1 = 664;
			y1 = 790;
		}
		else if (x == -3)
		{
			x1 = 633;
			y1 = 846;
		}
		else if (x == -4)
		{
			x1 = 729;
			y1 = 785;
		}
		else if (x >= 13 && x <= 18)
		{
			x1 = 845 - (x - 13) * 48;
			y1 = 750 - (x - 13) * 28;
		}
		else if (x >= 7 && x <= 12)
		{
			x1 = 880 - (x - 7) * 48;
			y1 = 700 - (x - 7) * 28;
		}
		else if (x >= 1 && x <= 6) {

			x1 = 660 + (x - 1) * 48;
			y1 = 505 + (x - 1) * 28;
		}
	}

}
void position::increment(int house_no)
{

	 if (x < 0)
	{
		setpos(14, y);
	}
	else if (x == 18)
	{

		if (y == 6)
		{
			setpos(1, 1);
		}
		else {
			setpos(1, y + 1);
		}
	}

	else if (house_no != y && x == 7)
	{
		setpos(13, y);
	}
	else if (x == 12)
	{
		setpos(0, y);
	}
	else if(x!=0)
	 {
		setpos(x + 1, y);
	}
}

int position::getx1()
{
	return x1;
}
int position::gety1()
{
	return y1;
}
int position::getx()
{
	return x;
}
int position::gety()
{
	return y;
}
bool position::safe_pos()
{
	if (x == 5 || x == 14)
	{
		return true;
	}
	return false;
}
bool position::initial_pos()
{
	if (x == -1 || x == -2 || x == -3 || x == -4)
	{
		return true;
	}
	return false;
}
bool position::win_pos()
{
	if (x == 0)
	{
		return true;
	}
	return false;
}