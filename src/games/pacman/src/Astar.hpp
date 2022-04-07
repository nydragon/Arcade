/*
** EPITECH PROJECT, 2022
** Project
** File description:
** Description
*/

#pragma once

#include "Terrain.hpp"
#include <algorithm>
#include <valarray>
#include <iostream>
#include <stack>

typedef std::pair<size_t /* x */, size_t /* x */> coordinates_t;

class Node
{
    public:
        Node(Node *parent, coordinates_t position);

        Node *parent;

        coordinates_t position;

        int g;

        int h;

        int f;
};

std::deque<coordinates_t> calculateAStar(coordinates_t start, coordinates_t end, map_t map);

bool operator==(Node y, Node x);