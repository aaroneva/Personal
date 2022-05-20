#include "Window.h"
using namespace std;
#include <iostream>

void Window::Input(int& DirectionX, int& DirectionY)
{
    const Uint8* keys = SDL_GetKeyboardState(NULL);
    DirectionX = 0;

    DirectionY = 0;

    if (keys[SDL_SCANCODE_UP])
    {
        std::cout << "se preciono arriba";

        DirectionY = 1;
    }
    else if (keys[SDL_SCANCODE_DOWN])
    {
        DirectionY = -1;
    }

    //Input
    SDL_Event e;

    while (SDL_PollEvent(&e))
    {

    }
}
