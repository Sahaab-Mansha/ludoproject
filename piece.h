#pragma once
#include <SFML/Graphics.hpp>
#include "position.h"

using namespace sf;

class piece
{
    CircleShape circle;
    position pos;
    bool safe;
    bool win;
    bool alive;
    int kill = 0;
public:
    
    piece();
    piece(int piece, int house);
    void draw(RenderWindow& window);
    void increment(int house_no);
    void initialposition(int piece, int house);
    void setclr(Color clr);
    bool issafe();
    bool isalive();
    void setdead(int piece_no,int house_no);
    bool iswin();
    void increment_kill();
    bool can_enter();
    bool same_position(piece s);
    bool in_radius(int x,int y);
    bool can_jump(int num);
};
