#pragma once
class position 
{
	int x, y;
	int x1, y1;
  public:
	  position(int piece, int house);
	/*position(int x, int y)
	{
		this->x = x;bbb
		this->y = y;
		setpos(x, y);
	}*/
	  void setpos(int x, int y);
	void increment(int house_no);
	int getx1();
	int gety1();
	int getx();
	int gety();
	bool safe_pos();
	bool initial_pos();
	bool win_pos();
};