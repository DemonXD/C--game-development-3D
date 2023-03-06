#ifndef ENGINE_H
#define ENGINE_H

#include <SDL2/SDL.h>

class Engine
{
    public:
        Engine();
        ~Engine();
        bool Initialize();
        void RunLoop();
        void Shutdown();
    private:
        void ProcessInput();
        void UpdateGame();
        void GenerateOutput();
        bool isRunning;
        SDL_Window* m_pWindow;
        SDL_Renderer* m_pRenderer;
};


#endif // ENGINE_H