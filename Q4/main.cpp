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
    bool run=true;
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
    SDL_SetRenderDrawColor( renderer, 255, 255, 255, 255 );
    SDL_Rect r1,r2,r3,r4,r5;



    SDL_RenderClear( renderer );



    r1.x = 0;
    r1.y = 0;
    r1.w = 100;
    r1.h = 600;
    SDL_SetRenderDrawColor(renderer, 80, 80, 80, 255);
    SDL_RenderFillRect(renderer, &r1);
    SDL_RenderPresent(renderer);



    r2.x = 20;
    r2.y = 20;
    r2.w = 60;
    r2.h = 60;
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
    // Render rect
    SDL_RenderFillRect(renderer, &r2);
    SDL_RenderPresent(renderer);

    r3.x = 20;
    r3.y = 120;
    r3.w = 60;
    r3.h = 60;
    SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
    // Render rect
    SDL_RenderFillRect(renderer, &r3);
    SDL_RenderPresent(renderer);

    r4.x = 20;
    r4.y = 220;
    r4.w = 60;
    r4.h = 60;
    SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);
    // Render rect
    SDL_RenderFillRect(renderer, &r4);
    SDL_RenderPresent(renderer);

    r5.x = 20;
    r5.y = 320;
    r5.w = 60;
    r5.h = 60;
    SDL_SetRenderDrawColor(renderer, 255, 255, 0, 255);
    // Render rect
    SDL_RenderFillRect(renderer, &r5);
    SDL_RenderPresent(renderer);




    // Wait for 5 sec
    SDL_Delay( 2000 );

    SDL_DestroyWindow(window);
    SDL_Quit();

    return EXIT_SUCCESS;
}