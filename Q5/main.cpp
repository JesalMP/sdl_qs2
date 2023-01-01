//
// Created by jesal on 30-12-2022.
//

#include <bits/stdc++.h>
#define SDL_MAIN_HANDLED
#include <windows.h>
#include <SDL2/SDL.h>
using namespace std;
int main(int argc, char *argv[]){
    SDL_Window* window = NULL;
    SDL_Init(SDL_INIT_VIDEO);
    bool quit = false;
    SDL_Event event;
    window = SDL_CreateWindow
            (
                    "Lmao", SDL_WINDOWPOS_UNDEFINED,
                    SDL_WINDOWPOS_UNDEFINED,
                    800,
                    600,
                    SDL_WINDOW_SHOWN
            );

    // Setup renderer
    SDL_Renderer* renderer = NULL;
    renderer =  SDL_CreateRenderer( window, -1, SDL_RENDERER_ACCELERATED);
    SDL_Surface * image = SDL_LoadBMP("download.bmp");
    SDL_Texture * texture = SDL_CreateTextureFromSurface(renderer, image);
    while (!quit)
    {
        SDL_WaitEvent(&event);

        switch (event.type)
        {
            case SDL_QUIT:
                quit = true;
                break;
        }

        SDL_Rect dstrect = { 0, 0, 1200, 900 };
        SDL_RenderCopy(renderer, texture, NULL, &dstrect);
        SDL_RenderPresent(renderer);

        SDL_Rect dstrect2 = { 640, 480, 160, 120 };
        SDL_RenderCopy(renderer, texture, NULL, &dstrect2);
        SDL_RenderPresent(renderer);
    }

    SDL_DestroyTexture(texture);
    SDL_FreeSurface(image);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);

    SDL_Quit();

    return 0;
}