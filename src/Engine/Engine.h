#ifndef ENGINE_H
#define ENGINE_H

#include <SDL2/SDL.h>
#include <vector>


struct Vector2
{
    float x;
    float y;
};

class Engine
{
    public:
        const int thickness = 15;
        
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
        Vector2 mBallPos;
        Vector2 mPaddlePos;
        // 增量时间
        Uint32 mTicksCount;
        // 物体位置
        Uint8 mPaddleDir;
};


#endif // ENGINE_H