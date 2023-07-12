#include <stdio.h>
#include "helper.h"

#define WIDTH 64
#define HEIGHT 32
#define PIXELREP "O"
void renderFrame(int frame[HEIGHT][WIDTH][7])
{
    for (int i = 0; i < HEIGHT; i++)
    {
        for (int j = 0; j < WIDTH; j++)
        {
            int arr[7] = {
                frame[i][j][0],
                frame[i][j][1],
                frame[i][j][2],
                frame[i][j][3],
                frame[i][j][4],
                frame[i][j][5],
                frame[i][j][6]};
            int pixel = largestSix(7, arr);

            switch (pixel)
            {
            case 0:
                printf("\033[1;31m%s\033[1;0m",PIXELREP);
                break;
            case 1:
                printf("\033[1;32m%s\033[1;0m",PIXELREP);
                break;
            case 2:
                printf("\033[1;34m%s\033[1;0m",PIXELREP);
                break;
            case 3:
                printf("\033[1;36m%s\033[1;0m",PIXELREP);
                break;
            case 4:
                printf("\033[1;35m%s\033[1;0m",PIXELREP);
                break;
            case 5:
                printf("\033[1;33m%s\033[1;0m",PIXELREP);
                break;
            case 6:
                printf("\033[1;37m%s\033[1;0m",PIXELREP);
                break;

            default:
                break;
            }

            //printf("%d", pixel+1);

            // if (frame[i][j][0] >= frame[i][j][1])
            // {
            //     if(frame[i][j][0] >= frame[i][j][2]){
            //         printf("\033[1;31m0\033[1;0m");
            //     }else{
            //         printf("\033[1;34m0\033[1;0m");
            //     }
            // }else{
            //     if(frame[i][j][1] >= frame[i][j][2]){
            //         printf("\033[1;32m0\033[1;0m");
            //     }else{
            //         printf("\033[1;34m0\033[1;0m");
            //     }
            // }
        }
        printf("\n");
    }
}