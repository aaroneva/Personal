#pragma once
#include "SDL_image.h"
#include <string>
#include "SDL.h"


class Image
{
private:
    int width;

    int height;

    int x;

    int y;

    SDL_Texture* image;

public:
    void Load(std::string path);

    int GetWidth();

    int GetHeight();

    int GetX();

    int GetY();

    void SetX(int _x);

    void SetY(int _y);

    SDL_Texture* GetTexture();
};
