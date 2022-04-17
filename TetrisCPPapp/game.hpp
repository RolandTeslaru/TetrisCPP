//
//  game.hpp
//  TetrisC++
//
//  Created by Roland Teslaru on 14.03.2022.
//  Copyright © 2022 Roland Teslaru. All rights reserved.
//

#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <chrono>
#include <random>
#include <time.h>
#include <stack>
#include "GlobalStuff.h"
#include "ResourcePath.hpp"

struct blockMatrix
{
    sf::Color color;
    bool active;
};

struct TetrominoInf
{
    sf::Color color;
    bool matrix[4][4];
    double PozX , PozY;
    int Size;
    std::string ID;
};
struct Board
{
    sf::Color color;
    int matrix[10][20];
};
int game();
int initializeEverything();

//#endif /* game_hpp */
