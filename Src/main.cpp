// This is Tobsi's CHIP-8 Emulator (TC8E)
// TC8E sounds like TC 80.

//#include <iostream>

#include "SDL.h"

#include "WindowRender.h"

//#include <string>

int main(int argc, char* argv[])
{

	/*// https://wiki.libsdl.org/SDL_Init
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
	SDL_Window* window = SDL_CreateWindow("TGB", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 400, SDL_WINDOW_SHOWN); // creates a window in the center of the screen
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

	/*SDL_SetRenderDrawColor(renderer, r, g, b, a);

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
	//SDL_Delay(1500); // for me to see the console
	SDL_Quit();*/

    WindowRender().WindowStartup("TC8E", 600, 400);

    return 0;
}

/** [ARTICLES ON DEVELOPING AN EMULATOR / CHIP-8 EMULATOR]
 * https://en.wikipedia.org/wiki/CHIP-8
 * http://www.multigesture.net/articles/how-to-write-an-emulator-chip-8-interpreter/
 * http://devernay.free.fr/hacks/chip8/C8TECH10.HTM
 * http://www.emulator101.com/welcome.html
 * http://www.emulator101.com/introduction-to-chip-8.html
 * https://austinmorlan.com/posts/chip8_emulator/
 *
 * // Wiki //
 * https://en.wikipedia.org/wiki/Bitwise_operation
 *
 * // CMake //
 * https://github.com/mbcrawfo/GenericMakefile
 *
 * // C/C++/SDL //
 * http://www.iso-9899.info/wiki/Main_Page
 * https://wiki.libsdl.org/FrontPage
 *
 * // CHIP-8 ROM PACK //
 * https://www.zophar.net/pdroms/chip8/chip-8-games-pack.html
 *
 * // CHIP-8 Specs //
 *
 * CHIP-8 8-bit registers (Labled V0 - VF. Each Register can hold any valu form 0x00 - 0xFF)
 * Mem: 4096 bytes of memory        0x000 - 0xFFF       0x000 - 0x1FF CHIP-8 Interoreter    0x050 - 0x0A0 16 characters (controller)    0x200 - 0xFFF
 * https://austinmorlan.com/posts/chip8_emulator/   16-bit Index Register
 *
 * */