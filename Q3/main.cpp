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
    window = SDL_CreateWindow
            (
                    "Lmao", SDL_WINDOWPOS_UNDEFINED,
                    SDL_WINDOWPOS_UNDEFINED,
                    1000,
                    700,
                    SDL_WINDOW_SHOWN
            );

    // Setup renderer
    SDL_Renderer* renderer = NULL;
    renderer =  SDL_CreateRenderer( window, -1, SDL_RENDERER_ACCELERATED);
    SDL_SetRenderDrawColor( renderer, 255, 255, 255, 255 );

    // Clear winow
    SDL_RenderClear( renderer );
    fstream myfile("Q3.txt", std::ios_base::in);
    int arr[7][10];
    for(int i=0;i<7;i++)
    {
        for(int j=0;j<10;j++)
        {
            myfile>>arr[i][j];
            cout<<arr[i][j]<<" ";
            if(arr[i][j]==1) {
                SDL_Rect r;
                r.x = j * 100;
                r.y = i * 100;
                r.w = 100;
                r.h = 100;
                SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
                // Render rect
                SDL_RenderFillRect(renderer, &r);
                SDL_RenderDrawLine(renderer, j*100, 0, j*100, 700);
            }
            SDL_RenderDrawLine(renderer, 0, i*100, 1000, i*100);
        }
        cout<<endl;
    }
    SDL_RenderPresent(renderer);

    // Wait for 5 sec
    SDL_Delay( 5000 );

    SDL_DestroyWindow(window);
    SDL_Quit();

    return EXIT_SUCCESS;
}