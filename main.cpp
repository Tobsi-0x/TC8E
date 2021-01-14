// This is Tobsi's CHIP-8 Emulator (TC8E)
// TC8E sounds like TC 80.

#include <iostream>
#include <Windows.h>

// #include "DisplayTest.h"
#include "include/SDL2/SDL.h"
#include <string>

int main(int argc, char* argv[])
{

	// https://wiki.libsdl.org/SDL_Init
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
	{
		SDL_Log("SDL Init: [FAILED] Error code: ", SDL_GetError());

		return 1;
	}
	else
	{
		//SDL_Log("SDL Init: [SUCCESSFUL]");
        std::cout << "SDL Init: [SUCCESSFUL]" << std::endl;
    }

	// Makes the window
	SDL_Window* window = SDL_CreateWindow("TGB", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 400, SDL_WINDOW_SHOWN); // creates a window in the center of the screen
	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0); // rendering init

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
	/*r = 85;
	g = 0;
	b = 170;*/
	r=0;
	g=0;
	b=255;
	a = 255;

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
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Delay(1500); // for me to see the console
	SDL_Quit();

    return 0;
}