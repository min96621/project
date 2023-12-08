#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>


void printAsciiArt() 
{
    FILE *file;
    char line[100];  // 파일에서 읽어온 한 줄을 저장할 배열
    file = fopen("/home/iot/바탕화면/★★★★★/춘식 프로젝트/chun", "r");

    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);

    }
    fclose(file);
}
void printAsciiArt2() 
{
    FILE *file;
    char line[100];  // 파일에서 읽어온 한 줄을 저장할 배열
    file = fopen("/home/iot/바탕화면/★★★★★/춘식 프로젝트/saw", "r");

    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);

    }
    fclose(file);
}

void printAsciiArt3() 
{
    FILE *file;
    char line[100];  // 파일에서 읽어온 한 줄을 저장할 배열
    file = fopen("/home/iot/바탕화면/★★★★★/춘식 프로젝트/over", "r");

    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);

    }
    fclose(file);
}

void printAsciiArt4() 
{
    FILE *file;
    char line[100];  // 파일에서 읽어온 한 줄을 저장할 배열
    file = fopen("/home/iot/바탕화면/★★★★★/춘식 프로젝트/win", "r");

    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);

    }
    fclose(file);
}

int main(void)
{
    int room[25][25] = {
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
    };

    int n=2;
    int count=0;
    int i=0;
    int turn = 1;
    double kg = 10;
    double love = 0;
    int sick = 0; 


    
    printAsciiArt();
    printf("       아무 키나 입력하면 게임을 시작합니다.\n");
    getchar();

    srand(time(NULL));
    int x, y;

    while(1)
    {
        int move = rand()%4; // 0.위 1.아래 2.우 3.좌

        // 현재 춘식이의 위치 찾기
        for(int i=0;i<25;i++)
        {
            for(int k=0;k<25;k++)
            {
                if(room[i][k]==3)
                {
                    x=k;
                    y=i;
                    count++;
                }
            }
        }

        switch (move)
        {
            case 0:     //위
                if(y>0 && room[y-1][x] != 1)
                {
                    room[y][x] = 0;
                    y--;
                    room[y][x] = 3;
                }
                break;
            case 1:     //아래
                if(y<24 && room[y+1][x] != 1)
                {
                    room[y][x] = 0;
                    y++;
                    room[y][x] = 3;
                }
                break;
            case 2:     //우
                if(x>0 && room[y][x-1] != 1)
                {
                    room[y][x] = 0;
                    x--;
                    room[y][x] = 3;
                }
                break;
            case 3:     //좌
                if(x<24 && room[y][x+1] != 1)
                {
                    room[y][x] = 0;
                    x++;
                    room[y][x] = 3;
                }
                break;
        }

        //방이 좁아짐
        if(kg>=80)
        {
            n =9;
            while(i<n)
            {
                for(int x = 0; x <= 24; x++)
                {
                    room[i][x] = 1;
                }
                for(int y = 0; y <= 20; y++)
                {
                    room[y][24-i] = 1;
                }
                for(int z = 24; z >=0; z--)
                {
                    room[20-i][z] = 1;
                }
                for(int w = 20; w >=0; w--)
                {
                    room[w][i] = 1;
                }
                i++;
            }
        }
        else if(kg>=60)
        {
            n =7;
            while(i<n)
            {
                for(int x = 0; x <= 24; x++)
                {
                    room[i][x] = 1;
                }
                for(int y = 0; y <= 20; y++)
                {
                    room[y][24-i] = 1;
                }
                for(int z = 24; z >=0; z--)
                {
                    room[20-i][z] = 1;
                }
                for(int w = 20; w >=0; w--)
                {
                    room[w][i] = 1;
                }
                i++;
            }
        }
        else if(kg>=40)
        {
            n =5;
            while(i<n)
            {
                for(int x = 0; x <= 24; x++)
                {
                    room[i][x] = 1;
                }
                for(int y = 0; y <= 20; y++)
                {
                    room[y][24-i] = 1;
                }
                for(int z = 24; z >=0; z--)
                {
                    room[20-i][z] = 1;
                }
                for(int w = 20; w >=0; w--)
                {
                    room[w][i] = 1;
                }
                i++;
            }
        }
        else if(kg>=20)
        {
            n =3;
            while(i<n)
            {
                for(int x = 0; x <= 24; x++)
                {
                    room[i][x] = 1;
                }
                for(int y = 0; y <= 20; y++)
                {
                    room[y][24-i] = 1;
                }
                for(int z = 24; z >=0; z--)
                {
                    room[20-i][z] = 1;
                }
                for(int w = 20; w >=0; w--)
                {
                    room[w][i] = 1;
                }
                i++;
            }
        }
        
        system("clear");

        printf("%d턴이 지났습니다.\n", turn);
        turn++;

        // 병에 걸림, 회복
        if(sick < 9)
        {
            kg += 0.3;
                if(rand()%2 == 0)
                {
                    kg -= 0.2;
                    printf("춘식이 몸무게가 0.2kg 줄었습니다.\n");
                }
            sick = rand()%10;
        }
        else
            kg -= 0.5;
            // printf("춘식이가 병에 걸려 0.5kg 줄었습니다.\n");

            if (rand()%10 < love*0.1) // 애정도에 따른 회복 확률
            {
                printf("춘식이가 병에서 회복했습니다.\n");
                sick =0;
            }
            
            if(sick*rand()%10 == 9)
            {
                printAsciiArt3();
                printf("춘식이가 병에 걸려 죽었습니다. \n");
                printf("게임 종료! 춘식이의 몸무게: %.1fkg, 애정도: %.1f\n", kg, love);
                getchar();
                break;
            }
            
        if(count==0)
        {
            printAsciiArt2();
            printf("춘식이가 압사당해 죽었습니다. \n");
            printf("게임 종료! 춘식이의 몸무게: %.1fkg, 애정도: %.1f\n", kg, love);
            getchar();
            break;
        }
        count=0;
        

        if(kg >= 100)
        {
            printAsciiArt4();
            printf("춘식이가 100kg에 도달했습니다. 게임을 종료합니다. \n");
            printf("춘식이의 몸무게: %.1fkg, 애정도: %.1f\n", kg, love);
            getchar();
            break;

        }

        if(kg <= 0)
        {
            printAsciiArt3();
            printf("춘식이가 아사했습니다. \n");
            printf("게임 종료! 춘식이의 몸무게: %.1fkg, 애정도: %.1f\n", kg, love);
            getchar();
            break;
        }

        printf("몸무게: %.1fkg  애정도: %1.f\n", kg,love);

        love += 5;

        // 크기 변화 출력
        int size = kg / 20;
        for(int i = 0; i < size; i++)
        {
            printf("🐈 ");
        }
        printf("\n");


        for (int sero = 0; sero < 25; sero++)
        {
            for (int garo = 0; garo < 25; garo++)
            {
                if(room[sero][garo] == 1)
                    printf("⬜ ");
                else if(room[sero][garo] == 0)
                    printf("   ");
                else if(room[sero][garo] == 3)
                    printf("🐈 ");
            }
            printf("\n");
        }
        usleep(80000);
    }    
    return 0;
}