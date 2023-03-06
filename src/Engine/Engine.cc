#include "Engine.h"


Engine::Engine()
{
    m_pWindow = nullptr;
    m_pRenderer = nullptr;
    isRunning = true;
}

Engine::~Engine()
{}


bool Engine::Initialize()
{
    if (SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        SDL_Log("can not initial SDL: %s", SDL_GetError());
        return false;
    }

    m_pWindow = SDL_CreateWindow(
        "Game Example",
        100,  // top left x-coordinate of window
        100,  // top left y-coordinate of window
        1024, // width of window
        768,  // height of window
        0     // flags
    );

    if ( m_pWindow == nullptr )
    {
        SDL_Log("can not initial window: %s", SDL_GetError());
        return false;
    }

    m_pRenderer = SDL_CreateRenderer(
        m_pWindow,
        -1,
        SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC
    );

    if ( m_pRenderer == nullptr )
    {
        SDL_Log("can not initial renderer: %s", SDL_GetError());
        return false;
    }

    return true;
}


void Engine::RunLoop()
{
    while (isRunning)
    {
        ProcessInput();
        UpdateGame();
        GenerateOutput();
    }
}

void Engine::Shutdown()
{
    SDL_DestroyWindow(m_pWindow);
    SDL_DestroyRenderer(m_pRenderer);
    SDL_Quit();
}

void Engine::ProcessInput()
{
    SDL_Event event;
    while (SDL_PollEvent(&event))
    {
        switch (event.type)
        {
        case SDL_QUIT:
            /* code */
            isRunning = false;
            break;
        
        default:
            break;
        }
    }
    /* for capture keyboard event
    const Uint8* stat = SDL_GetKeyboardState(NULL);
    if (stat[SDL_SCANCODE_ESCAPE])
    {
        isRunning = false;
    }
    */
}

void Engine::UpdateGame()
{

}

void Engine::GenerateOutput()
{
    // 将后台缓冲区清除为一种颜色（游戏的当前缓冲区）
    // 绘制游戏场景
    // 互换前台缓冲区和后台缓冲区
    SDL_SetRenderDrawColor(
        m_pRenderer,
        0,
        0,
        255,
        255
    );

    SDL_RenderClear(m_pRenderer);
    SDL_RenderPresent(m_pRenderer);
}
