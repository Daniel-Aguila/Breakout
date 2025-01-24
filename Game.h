//
// Created by dagui on 1/23/2025.
//

#ifndef GAME_H
#define GAME_H

#include <glad/glad.h>
#include <GLFW/glfw3.h>

//
// Created by dagui on 1/23/2025.
//

//Enum provides constant values in which the first has a value of 0, then 1, so on
enum GameState{
    GAME_ACTIVE,
    GAME_MENU,
    GAME_WIN,
};

class Game{
public:
    GameState State;
    bool Keys[1024];
    unsigned int Width, Height;

    //unsigned stores [0,infinity) instead of -infinity, infinity like a normal int
    Game(unsigned int width, unsigned int height);
    ~Game();

    void Init();

    void ProcessInput(float dt);
    void Update(float dt);
    void Render();
};



#endif //GAME_H
