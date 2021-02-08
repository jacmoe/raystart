/*# This file is part of the
# ██████╗  █████╗ ██╗   ██╗███████╗████████╗ █████╗ ██████╗ ████████╗
# ██╔══██╗██╔══██╗╚██╗ ██╔╝██╔════╝╚══██╔══╝██╔══██╗██╔══██╗╚══██╔══╝
# ██████╔╝███████║ ╚████╔╝ ███████╗   ██║   ███████║██████╔╝   ██║   
# ██╔══██╗██╔══██║  ╚██╔╝  ╚════██║   ██║   ██╔══██║██╔══██╗   ██║   
# ██║  ██║██║  ██║   ██║   ███████║   ██║   ██║  ██║██║  ██║   ██║   
# ╚═╝  ╚═╝╚═╝  ╚═╝   ╚═╝   ╚══════╝   ╚═╝   ╚═╝  ╚═╝╚═╝  ╚═╝   ╚═╝   
#   project
#
#   https://github.com/jacmoe/pxlwolf
#
#   (c) 2021 Jacob Moena
#
#   Zlib License
#*/
#include "Game.hpp"
#include "raylib.h"

Game::Game()
{
}

Game::~Game()
{
}

bool Game::OnUserCreate()
{
    return true;
}

bool Game::OnUserUpdate(double deltaTime)
{
    return true;
}

bool Game::OnUserRender()
{
    BeginDrawing();

    ClearBackground(RAYWHITE);

    DrawText("Congrats! Your Raystart project is running :)", 100, 200, 20, LIGHTGRAY);

    EndDrawing();
    return true;
}

bool Game::OnUserDestroy()
{
    return true;
}
