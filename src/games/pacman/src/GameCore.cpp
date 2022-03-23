/*
** EPITECH PROJECT, 2022
** Project
** File description:
** Description
*/

#include "Core.hpp"

Pacman::Core::Core(IGraphicsLib **gfx)
{
    this->_state = GS_MENU;
    this->_game = nullptr;
    this->_level = 0;
    this->_highScore = 0;  // TODO: Read from file where we save scores
    this->_gfx = gfx;
}

void Pacman::Core::showMenu()
{
    GFX->drawText("IN MENU, PRESS S TO PLAY", 0, 0);
    GFX->drawText("PRESS Q TO QUIT", 0, 1);
    GFX->drawText("HIGHSCORE: " + std::to_string(this->_highScore), 0, 2);
    GFX->drawText("GS: " + std::to_string(this->_state), 0, 3);
}

void Pacman::Core::showGameOver()
{
    GFX->drawText("YOU LOST, PRESS S TO TRY AGAIN", 0, 0);
    GFX->drawText("PRESS Q TO QUIT", 0, 1);
    GFX->drawText("HIGHSCORE: " + std::to_string(this->_highScore), 0, 2);
}

void Pacman::Core::startGame()
{
    this->_game = new Level();
}