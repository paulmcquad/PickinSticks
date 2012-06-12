#include <SDL/SDL.h>

#include "main.hpp"
#include "input.hpp"
#include "player.hpp"

using namespace std;

int main ( int argc, char* argv[] )
{
    Main main;
    main.Setup(); // Init SDL
    main.Event(); // Window Event

    main.Clean(); //Quit SDL
    return 0;
}
