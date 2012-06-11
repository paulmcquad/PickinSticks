#include <SDL/SDL.h>
#include "main.hpp"

using namespace std;

int main ( int argc, char* argv[] )
{
    Main main;
    main.Setup(); // Init

    //Quit SDL
    SDL_Quit();

     return 0;
}
