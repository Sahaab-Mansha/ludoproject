#include "piece.h"
#include <iostream>
using namespace std;
piece::piece() : circle(25), pos(-1, 1) {

    this->circle.setPosition(pos.getx1(), pos.gety1());
}
piece::piece(int piece, int house) : circle(25), pos(piece, house)
{

    this->circle.setPosition(pos.getx1(), pos.gety1());
}
void piece::initialposition(int piece, int house)
{
    pos.setpos(-1 * piece, house);
    this->circle.setPosition(pos.getx1(), pos.gety1());
    alive = false;
}
void piece::draw(RenderWindow& window)
{
    window.draw(this->circle);
}
void piece::increment(int house_no)
{
    pos.increment(house_no);
    this->circle.setPosition(pos.getx1(), pos.gety1());
}
void piece::setclr(Color clr)
{
    this->circle.setFillColor(clr);
}
bool piece::issafe()
{
    if (pos.safe_pos() == true)
      safe = true;
    else 
         safe = false;

    return safe;
}
bool piece::isalive()
{
    if (pos.initial_pos() == true)
        alive = false;
    else
        alive = true;

    return alive;
}
bool piece::iswin()
{
    if (pos.win_pos() == true)
        win = true;
    else
        win = false;

    return win;
}
void piece::increment_kill()
{
    kill++;
}
bool piece::can_enter()
{
    if (kill > 0)
        return true;
    return false;
}
bool piece::same_position(piece s)
{
    if (s.pos.getx1() == pos.getx1())
    {
        return true;
    }
    return false;
}
void piece::setdead(int piece_no,int house_no)
{
    alive = false;
    pos.setpos(-1*piece_no,house_no);
    this->circle.setPosition(pos.getx1(), pos.gety1());
}
bool piece::in_radius(int x, int y) {
    Vector2f centerPosition = this->circle.getPosition() + Vector2f(this->circle.getRadius(), circle.getRadius());
    cout << "center position" << centerPosition.x << " " << centerPosition.y<<endl;
    float dx = x - centerPosition.x;
    float dy = y - centerPosition.y;
    cout << "dx" << dx << " " << "dy" << dy << endl;
    float distanceSquared = dx * dx + dy * dy;
    float radiusSquared = circle.getRadius() * circle.getRadius();
    cout << "distance squared" << distanceSquared << "raduis squared" << radiusSquared << endl;
    return distanceSquared <= radiusSquared;
}
bool piece::can_jump(int num)
{
    if (pos.getx() >= 8 && pos.getx() <= 12)
    {
        if (pos.getx() + num <= 12)
            return true;
        else
            return false;
    }
    return true;
}