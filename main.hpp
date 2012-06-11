#ifndef MAIN_HPP
#define MAIN_HPP

class Main
{
    private:
        int screenWidth, screenHeight;
        bool fullscreen;

    public:
//        System();
//        ~System();
        int Setup();

        SDL_Surface *buffer;
};


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

    SDL_Event event;

    while (event.type != SDL_QUIT)
    {
        SDL_PollEvent ( &event);
        SDL_Flip (buffer);
    }
     return 1;
}

#endif // MAIN_HPP
