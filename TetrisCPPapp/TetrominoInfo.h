//
//  TetrominoInfo.h
//  TetrisC++
//
//  Created by Roland Teslaru on 14.04.2022.
//  Copyright © 2022 Roland Teslaru. All rights reserved.
//

#ifndef TetrominoInfo_h
#define TetrominoInfo_h
#include "game.hpp"
TetrominoInf blocks[7] =
{
    {
        {255,165,0},
        {
            {0,0,1,0}, // L BLOCK
            {1,1,1,0},
            {0,0,0,0},
            {0,0,0,0}
        },
        5,4,3,
        "L"
    },
    {
        {255,0,0}, // Z BLOCK
        {
            {1,1,0,0},
            {0,1,1,0},
            {0,0,0,0},
            {0,0,0,0}
        },
        5,4,3,
        "Z"
    },
    {
        {224,255,255}, // I BLOCK
        {
            {0,0,0,0},
            {1,1,1,1},
            {0,0,0,0},
            {0,0,0,0}
        },
        5,4,4,
        "I"
    },
    {
        {0,0,255}, // J BLOCK
        {
            {1,0,0,0},
            {1,1,1,0},
            {0,0,0,0},
            {0,0,0,0}
        },
        5,4,3,
        "J"
        
    },
    {
        {255,255,0}, // O BLOCK
        {
            {1,1,0,0},
            {1,1,0,0},
            {0,0,0,0},
            {0,0,0,0}
        },
        5,4,2,
        "O"
    },
    {
        {0,0,255}, // S BLOCK
        {
            {0,1,1,0},
            {1,1,0,0},
            {0,0,0,0},
            {0,0,0,0}
        },
        5,4,3,
        "S"
        
    },
    {
        {128,0,128}, // T BLOCK
        {
            {0,1,0,0},
            {1,1,1,0},
            {0,0,0,0},
            {0,0,0,0}
        },
        5,4,3,
        "T"
        
    }
},current;

#endif /* TetrominoInfo_h */
