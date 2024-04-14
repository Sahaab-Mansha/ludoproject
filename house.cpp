#include "house.h"
#include "SFML/Graphics.hpp"
using namespace sf;

house::house()
{

}
house::house(int no_of_pieces, int no, Color clr)
{
    house_no = no;
    no_pieces = no_of_pieces;
   pieces = new piece[no_pieces];
    for (int i = 0; i < no_pieces; i++) {
        pieces[i].initialposition(i + 1, house_no);
        pieces[i].setclr(clr);
    }
}
void house::sethouse(int no_of_pieces, int no,Color clr) {
    house_no = no;
    no_pieces = no_of_pieces;
    pieces = new piece[no_pieces];
    for (int i = 0; i < no_pieces; i++) {
        pieces[i].initialposition(i+1,house_no);
        pieces[i].setclr(clr);
    }
}
void house::draw(RenderWindow& window)
{
    for (int i = 0; i < no_pieces; i++)
    {
        pieces[i].draw(window);

    }
}
void house::increment(int piece_no)
{
    pieces[piece_no-1].increment(house_no);
}
void house::turn(int roll[10], int no_of_rolls, RenderWindow& window, Sprite& backgroundImage, die& dice)
{
    int x, y;
    bool clicked = false;
    for (int j = 0; j < no_of_rolls; j++)
    {
        clicked = false;
        Event ev;
        while (!clicked)
        {
            if (roll[0] != 6 && alive() == 0)
            {
                clicked = true;
            }
            else if (window.pollEvent(ev))
            {
                if (ev.type == Event::MouseButtonPressed && ev.mouseButton.button == Mouse::Left)
                {
                    x = ev.mouseButton.x;
                    y = ev.mouseButton.y;
                    cout << "x:" << x << " " << "y:" << y;
                    for (int i = 0; i < no_pieces; i++)
                    {

                        if (this->pieces[i].in_radius(x, y) == true)
                        {
                            clicked = true;
                            if (!pieces[i].isalive() && roll[j] == 6)
                            {
                                window.clear();
                                increment(i + 1);
                                window.draw(backgroundImage);
                                draw(window);
                                dice.display(window);
                                window.display();
                            }
                       
                            else if (!pieces[i].can_jump(roll[j]))
                            {
                                clicked = false;
                            }
                            else
                            {
                                for (int s = 0; s < roll[j]; s++)
                                {
                                    window.clear();
                                    increment(i + 1);
                                    window.draw(backgroundImage);
                                    draw(window);
                                    dice.display(window);
                                    window.display();
                                    Sleep(300);
                                }

                            }
                            if (clicked == true)
                            {
                                break;
                            }

                        }


                    }

                }
            }
        }
    }
}

int::house::no_of_wins()
{
    for (int i = 0; i < no_pieces; i++)
    {
        if (pieces[i].iswin() == true)
        {
            wins++;
        }
    }
    if (wins == no_pieces)
        win = true;
    
    return wins;
}