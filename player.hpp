#ifndef PLAYER_HPP
#define PLAYER_HPP

class Player
{
  SDL_Surface *buffer;
  SDL_Surface *image;

  SDL_Rect crop;
  SDL_Rect location;

  public:
    int player();

};

int Player::player()
{
  //  image = IMG_Load("PSVIII_Moosader.png");
  //  image = SDL_LoadBMP("PeachKat_Moosader.bmp");

    Uint32 colorkey = SDL_MapRGB(image->format, 0xFF, 0, 0xFF);

    SDL_SetColorKey(image, SDL_SRCCOLORKEY, colorkey);

    crop.x = 0, crop.y = 0;
    crop.w = 32; crop.h = 32;
    location.x = 0; location.y = 0;
    location.w = 32; location.h = 32;

    SDL_BlitSurface (image, &crop, buffer, &location);
    return 1;
}

#endif // PLAYER_HPP
