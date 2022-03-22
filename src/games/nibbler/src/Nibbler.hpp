/*
** EPITECH PROJECT, 2022
** Project
** File description:
** Description
*/

#pragma once

#include <deque>
#include <stack>
#include "Terrain.hpp"
#include <cstddef>

typedef struct
{
    int x;
    int y;
} segment_t;

class Nibbler
{
    public:
        Nibbler(int nibbler_start_x, int nibbler_start_y, Terrain *scene);

        ~Nibbler() = default;

        void appendSegment();

        void turn(int xOffset, int yOffset);

        int moveForward();

        segment_t head();

        segment_t tail();

        void draw();

        bool nibblerCollision(int x, int y);

        size_t length();
    private:
        std::deque<segment_t> _body;

        segment_t _pastTile;

        Terrain *_scene;

        int _xMovement = -1;

        int _yMovement = 0;
};