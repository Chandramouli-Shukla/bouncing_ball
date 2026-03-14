#include<graphics.h>
#include<windows.h>
#include"mmsystem.h"

//#pragma comment(lib, "winmm.lib")

//winmm.lib WinMM.lib

int main(int argc, char const *argv[]) {
    
    /*int gd =DETECT, gm;

    initgraph(&gd, &gm, (char*)"");
    circle(250, 250, 50);
    getch;
    closegraph();
    return 0;*/

    int w = 1000;
    int h = 600;

    int speedx = 2;
    int speedy = 2;

    int ballX = w/2;
    int ballY = h/2;
    

    
   

    initwindow(w, h);

    while (1)
    {
        cleardevice();
        circle(ballX, ballY, 10);
        
        ballX = ballX+speedx;

        ballY = ballY+speedy;


        if (ballX>w-10)
        {
            speedx = -speedx;
            //PlaySound(TEXT("blip.wav"), NULL, SND_SYNC);
            
        }   

        if (ballX<0+10)
        {
            speedx = -speedx;

        }

        if (ballY>h-10)
        {
            speedy = -speedy;

        }   

        if (ballY<0+10)
        {
            speedy = -speedy;
        }


        delay(10);
    }


    getch();
    
}


