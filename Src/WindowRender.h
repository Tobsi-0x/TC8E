//
// Created by Tobsi on 21-01-2021.
//

#include <SDL.h>

#ifndef TC8E_WINDOWRENDER_H
#define TC8E_WINDOWRENDER_H


#endif //TC8E_WINDOWRENDER_H

class WindowRender {
public:
    //WindowRender(char const* title, int windowWidth, int windowHeight, int textureWidth, int textureHeight);
    WindowRender();
    ~WindowRender();
    int WindowStartup(char const* title, int windowWidth, int windowHeight);
    void WindowCleanUp(SDL_Window* window, SDL_Renderer* renderer);
    void UpdateRender(void const* buffer, int pitch);

private:

};

