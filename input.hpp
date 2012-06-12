#ifndef INPUT_HPP
#define INPUT_HPP

#include "SDL/SDL.h"
#include "SDL/SDL_image.h"

class input
{
    Uint8 *key;
    public:
     void GetInput();

};

enum Direction { UP = 0, DOWN = 1,
                LEFT = 2, RIGHT = 3};

void input::GetInput()
{
/*
    while (Game.Done() == false )
    {
        key = SDL_GetKeyState( NULL);
        if ( key {SDLK_UP})
            player.Move(UP);
        else if ( key {SDLK_DOWN})
            player.Move(DOWN);
            if ( key {SDLK_LEFT})
            player.Move(LEFT);
        else if (key {SDLK_RIGHT})
            player.Move(RIGHT);

    }
            if ( key[SDLK_RIGHT] && key[SDLK_UP])
            {
                player.HalfSpeed();
                player.Move( RIGHT );
                player.Move( UP );
            }*/
}

#endif // INPUT_HPP
