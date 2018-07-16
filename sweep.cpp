#include<iostream>
#include<graphics.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>

using namespace std;

/*int ext(int &sum,int z,int x,int box[][11],int box1[][11])
{
    if(box[z][x]==0)
    {
        if(z<9&&box1[z+1][x]==0)
        {
            box1[z+1][x]=1;
            ext(sum,z+1,x,box,box1);
        }
        if(x<9&&box1[z][x+1]==0)
        {
            box1[z][x+1]=1;
            ext(sum,z,x+1,box,box1);
        }
        if(z>0&&box1[z-1][x]==0)
        {
            box1[z-1][x]=1;
            ext(sum,z-1,x,box,box1);
        }
        if(x>0&&box1[z][x-1]==0)
        {
            box1[z][x-1]=1;
            ext(sum,z,x-1,box,box1);
        }
        if(z<9&&box1[z-1][x-1]==0)
        {
            box1[z-1][x-1]=1;
            ext(sum,z-1,x-1,box,box1);
        }
        if(x<9&&box1[z-1][x+1]==0)
        {
            box1[z-1][x+1]=1;
            ext(sum,z-1,x+1,box,box1);
        }
        if(z>0&&box1[z+1][x-1]==0)
        {
            box1[z+1][x-1]=1;
            ext(sum,z+1,x-1,box,box1);
        }
        if(x>0&&box1[z+1][x+1]==0)
        {
            box1[z+1][x+1]=1;
            ext(sum,z+1,x+1,box,box1);
        }
    }
    return 0;
}

int ext1(int &sum,int z,int x,int box[][16],int box1[][16])
{
    if(box[z][x]==0)
    {
        if(z<9&&box1[z+1][x]==0)
        {
            box1[z+1][x]=1;
            ext1(sum,z+1,x,box,box1);
        }
        if(x<9&&box1[z][x+1]==0)
        {
            box1[z][x+1]=1;
            ext1(sum,z,x+1,box,box1);
        }
        if(z>0&&box1[z-1][x]==0)
        {
            box1[z-1][x]=1;
            ext1(sum,z-1,x,box,box1);
        }
        if(x>0&&box1[z][x-1]==0)
        {
            box1[z][x-1]=1;
            ext1(sum,z,x-1,box,box1);
        }
        if(z<9&&box1[z-1][x-1]==0)
        {
            box1[z-1][x-1]=1;
            ext1(sum,z-1,x-1,box,box1);
        }
        if(x<9&&box1[z-1][x+1]==0)
        {
            box1[z-1][x+1]=1;
            ext1(sum,z-1,x+1,box,box1);
        }
        if(z>0&&box1[z+1][x-1]==0)
        {
            box1[z+1][x-1]=1;
            ext1(sum,z+1,x-1,box,box1);
        }
        if(x>0&&box1[z+1][x+1]==0)
        {
            box1[z+1][x+1]=1;
            ext1(sum,z+1,x+1,box,box1);
        }
    }
    return 0;
}*/

int ext2(int &sum,int z,int x,int box[][21],int box1[][21])
{
    if(box[z][x]==0)
    {
        if(z<9&&box1[z+1][x]==0)
        {
            box1[z+1][x]=1;
            ext2(sum,z+1,x,box,box1);
        }
        if(x<9&&box1[z][x+1]==0)
        {
            box1[z][x+1]=1;
            ext2(sum,z,x+1,box,box1);
        }
        if(z>0&&box1[z-1][x]==0)
        {
            box1[z-1][x]=1;
            ext2(sum,z-1,x,box,box1);
        }
        if(x>0&&box1[z][x-1]==0)
        {
            box1[z][x-1]=1;
            ext2(sum,z,x-1,box,box1);
        }
        if(z<9&&box1[z-1][x-1]==0)
        {
            box1[z-1][x-1]=1;
            ext2(sum,z-1,x-1,box,box1);
        }
        if(x<9&&box1[z-1][x+1]==0)
        {
            box1[z-1][x+1]=1;
            ext2(sum,z-1,x+1,box,box1);
        }
        if(z>0&&box1[z+1][x-1]==0)
        {
            box1[z+1][x-1]=1;
            ext2(sum,z+1,x-1,box,box1);
        }
        if(x>0&&box1[z+1][x+1]==0)
        {
            box1[z+1][x+1]=1;
            ext2(sum,z+1,x+1,box,box1);
        }
    }
    return 0;
}

main()
{
    int box[21][21],box1[21][21],box2[21][21];
    char text[21][21][2];
    int xax,xay,flag=0,flag1=0,x,z,qop,poq;

    int i,loss=0,sum=0,flags=0;
    float m=12.5,n=12.5,a;

    int maxx,maxy;

    DWORD sw=GetSystemMetrics(SM_CXSCREEN);                 //Window created
    DWORD sh=GetSystemMetrics(SM_CYSCREEN);
    initwindow(sw,sh,"SWEEP 'EM UP",-3,-3);

    setfillstyle(SOLID_FILL,BLACK);
    floodfill(5,5,WHITE);
    rectangle(400,500,500,550);
    setcolor(RED);
    outtextxy(430,520,"EASY");
    setcolor(WHITE);
    rectangle(600,500,700,550);
    setcolor(RED);
    outtextxy(625,518,"MEDIUM");
    setcolor(WHITE);
    rectangle(800,500,900,550);
    setcolor(RED);
    outtextxy(830,520,"HARD");

    POINT p;
    int qwe=0;

    while(1)
    {
        if(GetAsyncKeyState(VK_LBUTTON))
        {
            GetCursorPos(&p);
            if(p.x>400&&p.x<500&&p.y>500&&p.y<550)
            {
                qwe=1;
                break;
            }
            else if(p.x>600&&p.x<700&&p.y>500&&p.y<550)
            {
                qwe=2;
                break;
            }
            else if(p.x>800&&p.x<900&&p.y>500&&p.y<550)
            {
                qwe=3;
                break;
            }
        }

    }

    initwindow(sw,sh,"SWEEP 'EM UP",-3,-3);

    switch(qwe)
    {
        case 1: for(z=0;z<10;z++)
                {
                    for(x=0;x<10;x++)
                    {
                        box[z][x]=NULL;
                        box1[z][x]=NULL;
                        box2[z][x]=NULL;
                    }
                }

                srand(time(0));

                while(flag!=15)
                {
                    xax=(rand()%10);
                    xay=(rand()%10);
                    if(box[xax][xay]>=9)
                        box[xax][xay]++;
                    else
                    {
                        box[xax][xay]=9;
                        flag++;
                    }
                }

                for(z=0;z<10;z++)
                {
                    for(x=0;x<10;x++)
                    {
                        itoa(box[z][x],text[z][x],10);
                    }
                }

                for(z=0;z<10;z++)
                {
                    for(x=0;x<10;x++)
                    {
                        if(strcmp(text[z][x],"9")==0||strcmp(text[z][x],"10")==0||strcmp(text[z][x],"11")==0||strcmp(text[z][x],"12")==0||strcmp(text[z][x],"13")==0)
                            strcpy(text[z][x],"*");
                    }
                }

                for(z=0;z<10;z++)
                {
                    for(x=0;x<10;x++)
                    {
                        for(qop=-1;qop<2;qop++)
                        {
                            for(poq=-1;poq<2;poq++)
                            {
                                if(box[z][x]==9||box[z][x]==10||box[z][x]==11||box[z][x]==12||box[z][x]==13)
                                    continue;
                                else if(box[z+qop][x+poq]==9)
                                {
                                    box[z][x]++;
                                    itoa(box[z][x],text[z][x],10);
                                }
                                else if(box[z+qop][x+poq]==10)
                                {
                                    box[z][x]=box[z][x]+2;
                                    itoa(box[z][x],text[z][x],10);
                                }
                                else if(box[z+qop][x+poq]==11)
                                {
                                    box[z][x]=box[z][x]+3;
                                    itoa(box[z][x],text[z][x],10);
                                }
                                else if(box[z+qop][x+poq]==12)
                                {
                                    box[z][x]=box[z][x]+4;
                                    itoa(box[z][x],text[z][x],10);
                                }
                                else if(box[z+qop][x+poq]==13)
                                {
                                    box[z][x]=box[z][x]+5;
                                    itoa(box[z][x],text[z][x],10);
                                }
                            }
                        }
                    }
                }

                a=m;

                maxx=getmaxx()/50-5;
                maxy=getmaxy()/50-5;

                setcolor(WHITE);
                setfillstyle(SOLID_FILL,LIGHTGRAY);
                rectangle(maxx*25,maxy*25,(maxx+10)*25,(maxy+10)*25);
                floodfill(maxx+5,maxy+5,WHITE);

                while(1)
                {
                    for(i=maxx,z=0;i<maxx+10;i++,z++)
                    {
                        m=a+(i*25)-3;
                        for(int j=maxy,x=0;j<maxy+10;j++,x++)
                        {
                            n=a+(j*25)-6;
                            setcolor(WHITE);
                            rectangle(i*25,j*25,(i+1)*25,(j+1)*25);
                            if(box1[z][x]==1)
                            {
                                if(strcmp(text[z][x],"P")==0)
                                {
                                    setcolor(WHITE);
                                    outtextxy(m,n,text[z][x]);
                                }

                                else
                                {
                                    switch(box[z][x])
                                    {
                                        case 0: setcolor(YELLOW);
                                                outtextxy(m,n,text[z][x]);
                                                break;
                                        case 1: setcolor(LIGHTGREEN);
                                                outtextxy(m,n,text[z][x]);
                                                break;
                                        case 2: setcolor(GREEN);
                                                outtextxy(m,n,text[z][x]);
                                                break;
                                        case 3: setcolor(LIGHTBLUE);
                                                outtextxy(m,n,text[z][x]);
                                                break;
                                        case 4: setcolor(BLUE);
                                                outtextxy(m,n,text[z][x]);
                                                break;
                                        case 5: setcolor(LIGHTRED);
                                                outtextxy(m,n,text[z][x]);
                                                break;
                                        case 6: setcolor(RED);
                                                outtextxy(m,n,text[z][x]);
                                                break;
                                        case 7: setcolor(LIGHTMAGENTA);
                                                outtextxy(m,n,text[z][x]);
                                                break;
                                        case 8: setcolor(MAGENTA);
                                                outtextxy(m,n,text[z][x]);
                                                break;
                                        case 9: setcolor(BROWN);
                                                outtextxy(m,n,text[z][x]);
                                                break;
                                    }
                                }
                            }
                        }
                    }

                    if(sum==90)
                    {
                        outtextxy(625,175,"YOU WIN");
                        getch();
                    }

                    if(loss==1)
                    {
                        getch();
                    }
                    while(1)
                    {
                        if(GetAsyncKeyState(VK_LBUTTON))
                        {
                            GetCursorPos(&p);
                            for(i=maxx,z=0;i<maxx+10;i++,z++)
                            {
                                for(int j=maxy,x=0;j<maxy+10;j++,x++)
                                {
                                    if((p.x>(i*25)&&p.x<((i+1)*25))&&(p.y>((j+1)*25)&&p.y<((j+2)*25)))
                                    {
                                        box1[z][x]=1;
                                        if(box[z][x]==0)
                                        {
                                            ext2(sum,z,x,box,box1);
                                        }
                                        if(strcmp(text[z][x],"*")==0)
                                        {
                                            outtextxy(625,175,"GAME OVER");
                                            loss++;
                                        }
                                    }
                                }
                            }
                        }

                        for(z=0;z<10;z++)
                        {
                            for(x=0;x<10;x++)
                            {
                                if(box1[z][x]==1)
                                    box2[z][x]++;
                                if(box2[z][x]==1)
                                    sum++;
                            }
                        }
                        break;
                    }
                }
                break;

        case 2: for(z=0;z<15;z++)
                {
                    for(x=0;x<15;x++)
                    {
                        box[z][x]=NULL;
                        box1[z][x]=NULL;
                        box2[z][x]=NULL;
                    }
                }

                srand(time(0));

                while(flag!=20)
                {
                    xax=(rand()%15);
                    xay=(rand()%15);
                    if(box[xax][xay]>=9)
                        box[xax][xay]++;
                    else
                    {
                        box[xax][xay]=9;
                        flag++;
                    }
                }

                for(z=0;z<15;z++)
                {
                    for(x=0;x<15;x++)
                    {
                        itoa(box[z][x],text[z][x],10);
                    }
                }

                for(z=0;z<15;z++)
                {
                    for(x=0;x<15;x++)
                    {
                        if(strcmp(text[z][x],"9")==0||strcmp(text[z][x],"10")==0||strcmp(text[z][x],"11")==0||strcmp(text[z][x],"12")==0||strcmp(text[z][x],"13")==0)
                            strcpy(text[z][x],"*");
                    }
                }

                for(z=0;z<15;z++)
                {
                    for(x=0;x<15;x++)
                    {
                        for(qop=-1;qop<2;qop++)
                        {
                            for(poq=-1;poq<2;poq++)
                            {
                                if(box[z][x]==9)
                                    continue;
                                else if(box[z+qop][x+poq]==9)
                                {
                                    box[z][x]++;
                                    itoa(box[z][x],text[z][x],10);
                                }
                                else if(box[z+qop][x+poq]==10)
                                {
                                    box[z][x]=box[z][x]+2;
                                    itoa(box[z][x],text[z][x],10);
                                }
                                else if(box[z+qop][x+poq]==11)
                                {
                                    box[z][x]=box[z][x]+3;
                                    itoa(box[z][x],text[z][x],10);
                                }
                                else if(box[z+qop][x+poq]==12)
                                {
                                    box[z][x]=box[z][x]+4;
                                    itoa(box[z][x],text[z][x],10);
                                }
                                else if(box[z+qop][x+poq]==13)
                                {
                                    box[z][x]=box[z][x]+5;
                                    itoa(box[z][x],text[z][x],10);
                                }
                            }
                        }
                    }
                }
                a=m;

                maxx=getmaxx()/50-7.5;
                maxy=getmaxy()/50-7.5;

                setcolor(WHITE);
                setfillstyle(SOLID_FILL,LIGHTGRAY);
                rectangle(maxx*25,maxy*25,(maxx+15)*25,(maxy+15)*25);
                floodfill(maxx+5,maxy+5,WHITE);

                while(1)
                {
                    for(i=maxx,z=0;i<maxx+15;i++,z++)
                    {
                        m=a+(i*25)-3;
                        for(int j=maxy,x=0;j<maxy+15;j++,x++)
                        {
                            n=a+(j*25)-6;
                            setcolor(WHITE);
                            rectangle(i*25,j*25,(i+1)*25,(j+1)*25);
                            if(box1[z][x]==1)
                            {
                                if(strcmp(text[z][x],"P")==0)
                                {
                                    setcolor(WHITE);
                                    outtextxy(m,n,text[z][x]);
                                }

                                else
                                {
                                    switch(box[z][x])
                                    {
                                        case 0: setcolor(YELLOW);
                                                outtextxy(m,n,text[z][x]);
                                                break;
                                        case 1: setcolor(LIGHTGREEN);
                                                outtextxy(m,n,text[z][x]);
                                                break;
                                        case 2: setcolor(GREEN);
                                                outtextxy(m,n,text[z][x]);
                                                break;
                                        case 3: setcolor(LIGHTBLUE);
                                                outtextxy(m,n,text[z][x]);
                                                break;
                                        case 4: setcolor(BLUE);
                                                outtextxy(m,n,text[z][x]);
                                                break;
                                        case 5: setcolor(LIGHTRED);
                                                outtextxy(m,n,text[z][x]);
                                                break;
                                        case 6: setcolor(RED);
                                                outtextxy(m,n,text[z][x]);
                                                break;
                                        case 7: setcolor(LIGHTMAGENTA);
                                                outtextxy(m,n,text[z][x]);
                                                break;
                                        case 8: setcolor(MAGENTA);
                                                outtextxy(m,n,text[z][x]);
                                                break;
                                        case 9: setcolor(BROWN);
                                                outtextxy(m,n,text[z][x]);
                                                break;
                                    }
                                }
                            }
                        }
                    }

                    if(sum==205)
                    {
                        outtextxy(625,100,"YOU WIN");
                        getch();
                    }

                    if(loss==1)
                        getch();
                    while(1)
                    {
                        if(GetAsyncKeyState(VK_LBUTTON))
                        {
                            GetCursorPos(&p);
                            for(i=maxx,z=0;i<maxx+15;i++,z++)
                            {
                                for(int j=maxy,x=0;j<maxy+15;j++,x++)
                                {
                                    if((p.x>(i*25)&&p.x<((i+1)*25))&&(p.y>((j+1)*25)&&p.y<((j+2)*25)))
                                    {
                                        box1[z][x]=1;
                                        if(box[z][x]==0)
                                        {
                                            ext2(sum,z,x,box,box1);
                                        }
                                        if(strcmp(text[z][x],"*")==0)
                                        {
                                            outtextxy(625,100,"GAME OVER");
                                            loss++;
                                        }
                                    }
                                }
                            }
                        }

                        for(z=0;z<15;z++)
                        {
                            for(x=0;x<15;x++)
                            {
                                if(box1[z][x]==1)
                                    box2[z][x]++;
                                if(box2[z][x]==1)
                                    sum++;
                            }
                        }
                        break;
                    }
                }
                break;

        case 3: for(z=0;z<20;z++)
                {
                    for(x=0;x<20;x++)
                    {
                        box[z][x]=NULL;
                        box1[z][x]=NULL;
                        box2[z][x]=NULL;
                    }
                }

                srand(time(0));

                while(flag!=25)
                {
                    xax=(rand()%20);
                    xay=(rand()%20);
                    if(box[xax][xay]>=9)
                        box[xax][xay]++;
                    else
                    {
                        box[xax][xay]=9;
                        flag++;
                    }
                }

                for(z=0;z<20;z++)
                {
                    for(x=0;x<20;x++)
                    {
                        itoa(box[z][x],text[z][x],10);
                    }
                }

                for(z=0;z<20;z++)
                {
                    for(x=0;x<20;x++)
                    {
                        if(strcmp(text[z][x],"9")==0||strcmp(text[z][x],"10")==0||strcmp(text[z][x],"11")==0||strcmp(text[z][x],"12")==0||strcmp(text[z][x],"13")==0)
                            strcpy(text[z][x],"*");
                    }
                }

                for(z=0;z<20;z++)
                {
                    for(x=0;x<20;x++)
                    {
                        for(qop=-1;qop<2;qop++)
                        {
                            for(poq=-1;poq<2;poq++)
                            {
                                if(box[z][x]==9)
                                    continue;
                                else if(box[z+qop][x+poq]==9)
                                {
                                    box[z][x]++;
                                    itoa(box[z][x],text[z][x],10);
                                }
                                else if(box[z+qop][x+poq]==10)
                                {
                                    box[z][x]=box[z][x]+2;
                                    itoa(box[z][x],text[z][x],10);
                                }
                                else if(box[z+qop][x+poq]==11)
                                {
                                    box[z][x]=box[z][x]+3;
                                    itoa(box[z][x],text[z][x],10);
                                }
                                else if(box[z+qop][x+poq]==12)
                                {
                                    box[z][x]=box[z][x]+4;
                                    itoa(box[z][x],text[z][x],10);
                                }
                                else if(box[z+qop][x+poq]==13)
                                {
                                    box[z][x]=box[z][x]+5;
                                    itoa(box[z][x],text[z][x],10);
                                }
                            }
                        }
                    }
                }
                a=m;

                maxx=getmaxx()/50-10;
                maxy=getmaxy()/50-10;

                setcolor(WHITE);
                setfillstyle(SOLID_FILL,LIGHTGRAY);
                rectangle(maxx*25,maxy*25,(maxx+20)*25,(maxy+20)*25);
                floodfill(maxx+5,maxy+5,WHITE);

                while(1)
                {
                    for(i=maxx,z=0;i<maxx+20;i++,z++)
                    {
                        m=a+(i*25)-3;
                        for(int j=maxy,x=0;j<maxy+20;j++,x++)
                        {
                            n=a+(j*25)-6;
                            setcolor(WHITE);
                            rectangle(i*25,j*25,(i+1)*25,(j+1)*25);
                            if(box1[z][x]==1)
                            {
                                if(strcmp(text[z][x],"P")==0)
                                {
                                    setcolor(WHITE);
                                    outtextxy(m,n,text[z][x]);
                                }

                                else
                                {
                                    switch(box[z][x])
                                    {
                                        case 0: setcolor(YELLOW);
                                                outtextxy(m,n,text[z][x]);
                                                break;
                                        case 1: setcolor(LIGHTGREEN);
                                                outtextxy(m,n,text[z][x]);
                                                break;
                                        case 2: setcolor(GREEN);
                                                outtextxy(m,n,text[z][x]);
                                                break;
                                        case 3: setcolor(LIGHTBLUE);
                                                outtextxy(m,n,text[z][x]);
                                                break;
                                        case 4: setcolor(BLUE);
                                                outtextxy(m,n,text[z][x]);
                                                break;
                                        case 5: setcolor(LIGHTRED);
                                                outtextxy(m,n,text[z][x]);
                                                break;
                                        case 6: setcolor(RED);
                                                outtextxy(m,n,text[z][x]);
                                                break;
                                        case 7: setcolor(LIGHTMAGENTA);
                                                outtextxy(m,n,text[z][x]);
                                                break;
                                        case 8: setcolor(MAGENTA);
                                                outtextxy(m,n,text[z][x]);
                                                break;
                                        case 9: setcolor(BROWN);
                                                outtextxy(m,n,text[z][x]);
                                                break;
                                    }
                                }
                            }
                        }
                    }

                    if(sum==375)
                    {
                        outtextxy(625,75,"YOU WIN");
                        getch();
                    }

                    if(loss==1)
                        getch();
                    while(1)
                    {
                        if(GetAsyncKeyState(VK_LBUTTON))
                        {
                            GetCursorPos(&p);
                            for(i=maxx,z=0;i<maxx+20;i++,z++)
                            {
                                for(int j=maxy,x=0;j<maxy+20;j++,x++)
                                {
                                    if((p.x>(i*25)&&p.x<((i+1)*25))&&(p.y>((j+1)*25)&&p.y<((j+2)*25)))
                                    {
                                        box1[z][x]=1;
                                        if(box[z][x]==0)
                                        {
                                            ext2(sum,z,x,box,box1);
                                        }
                                        if(strcmp(text[z][x],"*")==0)
                                        {
                                            outtextxy(625,75,"GAME OVER");
                                            loss++;
                                        }
                                    }
                                }
                            }
                        }

                        for(z=0;z<20;z++)
                        {
                            for(x=0;x<20;x++)
                            {
                                if(box1[z][x]==1)
                                    box2[z][x]++;
                                if(box2[z][x]==1)
                                    sum++;
                            }
                        }
                        break;
                    }
                }
                break;
    }
}
