#ifndef MAIN_HPP
#define MAIN_HPP

#include "SDL/SDL.h"
#include "SDL/SDL_image.h"

#include "player.hpp"

class Main
{
    private:
        bool fullscreen;
        SDL_Surface *buffer;
        SDL_Surface *image;

        SDL_Rect crop;
        SDL_Rect location;
        // event handling
        SDL_Event event;
    public:
//        System();
//        ~System();
        void Clean();

        int Background();
        int Event();
        int Setup();
};

int Main::Background()
{
   image = IMG_Load("PSVIII_Moosader.png");
//   image = SDL_LoadBMP("PeachKat_Moosader.bmp");

    Uint32 colorkey = SDL_MapRGB(image->format, 0xFF, 0, 0xFF);

    SDL_SetColorKey(image, SDL_SRCCOLORKEY, colorkey);

    crop.x = 0; crop.y = 0;
    crop.w = 32; crop.h = 32;

    for (int j = 0; j <= 480; j += 32){
        for (int k = 0; k <=  640; k+= 32){
        location.x = k; location.y = j;
        location.w = 32; location.h = 32;

    SDL_BlitSurface (image, &crop, buffer, &location);
        }
    }
    return 1;
}

void Main::Clean ()
{
    SDL_FreeSurface(buffer);
    //Free the image
    SDL_FreeSurface(image);
    //Quit SDL
    SDL_Quit();
}

int Main::Event()
{
    // Game loop
    while (event.type != SDL_QUIT)
    {
      // input.GetInput();
        //player.Update();
        //Draw to screen
        //level.Draw(buffer)
//        player.player(buffer)
        Main::Background ();


        SDL_PollEvent ( &event);
        SDL_Flip (buffer);
    }
    return 1;

}

int Main::Setup()
{
    //Start SDL
    SDL_Init( SDL_INIT_EVERYTHING );
    SDL_WM_SetCaption("Pickin Sticks", NULL);

    //The images
    bool fullscreen = false;

    if (fullscreen == true)
        buffer = SDL_SetVideoMode( 640, 480, 32, SDL_SWSURFACE | SDL_FULLSCREEN );
    else
        buffer = SDL_SetVideoMode( 640, 480, 32, SDL_SWSURFACE);

    return 1;
}

#endif // MAIN_HPP
