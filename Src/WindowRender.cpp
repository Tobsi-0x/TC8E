//
// Created by Tobsi on 21-01-2021.
//

#include <iostream>
#include "WindowRender.h"
#include "SDL.h"

WindowRender::WindowRender(){
    std::cout << "START" << std::endl;
}

WindowRender::~WindowRender(){
    std::cout << "END" << std::endl;
}

int WindowRender::WindowStartup(char const* title, int windowWidth, int windowHeight){

    // https://wiki.libsdl.org/SDL_Init
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
    {
        // SDL_Log("SDL Init: [FAILED] Error code: ", SDL_GetError());
        std::cout << "SDL Init: [FAILED] Error code: " << SDL_GetError() << std::endl;

        return 1;
    }
    else
    {
        // SDL_Log("SDL Init: [SUCCESSFUL]");
        std::cout << "SDL Init: [SUCCESSFUL]" << std::endl;
    }

    // Makes the window
    SDL_Window* window = SDL_CreateWindow(title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, windowWidth, windowHeight, SDL_WINDOW_SHOWN); // creates a window in the center of the screen
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED); // rendering init // window, -1, 0

    if (renderer == NULL)
    {
        std::cout << "Rendering: [FAILED]" << std::endl;
    }
    else
    {
        std::cout << "Rendering: [SUCCESSFUL]" << std::endl;
    }

    // Background color (Purple)
    uint32_t r, g, b, a;
    r=19; // 85
    g=19; // 0
    b=70; // 170
    a = 255; // 255
    /* https://encycolorpedia.com/191970 & https://encycolorpedia.com/0e0e7b & https://encycolorpedia.com/191970 & https://encycolorpedia.com/14145a RED https://encycolorpedia.com/890000*/

    SDL_SetRenderDrawColor(renderer, r, g, b, a);

    bool IsRunning = true;

    SDL_Event event; // used to close the program

    while (IsRunning)
    {

        if (SDL_PollEvent(&event) != 0) // SDLK_ESCAPE eller SDL_SCANCODE_ESCAPE		SDL_PollEvent(&event)
        {

            if (event.type == SDL_QUIT)
            {
                std::cout << "Window state: [CLOSE AND STOP]" << std::endl;
                IsRunning = false;
            }
            if (event.key.keysym.scancode == SDL_SCANCODE_ESCAPE) { // if the user presses the escape key, they also close the program.
                std::cout << "Window state: [CLOSE AND STOP]" << std::endl;
                IsRunning = false;
            }
        }

        SDL_RenderClear(renderer);

        SDL_RenderPresent(renderer); // updates the renderer

    }

    // cleanup
    WindowCleanUp(window, renderer);
    //SDL_Delay(1500); // for me to see the console
    SDL_Quit();

    return 1;
}

void WindowRender::WindowCleanUp(SDL_Window* window, SDL_Renderer* renderer){
    // cleanup
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
}


