#include <stdio.h>
#include <stdlib.h>
#include "renderer.h"
#define WIDTH 64
#define HEIGHT 32




int main(int argc, char const *argv[])
{
    int frame[HEIGHT][WIDTH][7];
    // TODO:Have to build a function to render a specific resolution
    for (int i = 0; i < HEIGHT; i++)
    {
        for (int j = 0; j < WIDTH; j++)
        {
            frame[i][j][0] = rand();
            frame[i][j][1] = rand();
            frame[i][j][2] = rand();

            // frame[i][j][0] = 100;
            // frame[i][j][1] = 100;
            // frame[i][j][2] = 100;

            frame[i][j][3] = (frame[i][j][1] + frame[i][j][2]) / 2;
            frame[i][j][4] = (frame[i][j][0] + frame[i][j][2]) / 2;
            frame[i][j][5] = (frame[i][j][0] + frame[i][j][1]) / 2;

            frame[i][j][6] = (frame[i][j][0] + frame[i][j][1] + frame[i][j][2]) / 3;
        }
        
    }
    renderFrame(frame);

    return 0;
}

