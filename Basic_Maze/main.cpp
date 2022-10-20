#include <iostream>
#include "Game.h"



int main()
{
    //Init Game engine 
    Game game;

    //Game itself
    
    while (game.running())
    {
        //Update
        game.update();

        //Render
        game.render();

    }
    return 0;
}

