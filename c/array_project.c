#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>


int main(void)
{
    srand((unsigned)time(NULL));
    printf("\n\n === 자라나라 머리머리! == \n\n");
    int awnser;
    int treetment = rand() %4;

    int cntShowBottle = 0;
    int prevCntShowBotttle = 0;

    for (int i = 1; i <= 3; i++)
    {
        int bottle[4] = { 0, 0, 0, 0 };
        do {
            cntShowBottle = rand() % 2 + 2;
        } while (cntShowBottle == prevCntShowBotttle);
        prevCntShowBotttle = cntShowBottle;

        int islncluded = 0;
        printf("%d 번째 시도 : ", i);

        for (int j = 0; j < cntShowBottle; j++)
        {
            int randBottle = rand() % 4;

            if (bottle[randBottle] == 0)
            {
                bottle[randBottle] = 1;
                if (randBottle == treetment)
                {
                    islncluded = 1;
                }
            }

            else
            {
                j--;
            }
        }

        for (int k = 0; k < 4; k++)
        {
            if (bottle[k] == 1)
                printf("%d ", k + 1);
        }
        printf("물약을 머리에 바르겠습니다! 자라나라 머리머리!\n");

        if (islncluded == 1)
        {
            printf("자라났다! \n");
        } 

        else
        {
            printf("ㅠㅠ 실패!\n");
        }

            printf("\n ... 계속 하려면 아무키나 누르세요 ...\n\n");
            (void) getchar();

    }
    printf("\n\n 발모제가 뭐야? \n\n");
    scanf("%d", &awnser);

    if (awnser == treetment + 1)
    {
        printf("내가 한번 발라보겠다! \n");
        printf("발모제 바르는 중.....\n");
        sleep(2);
        printf("\n발모제가 맞구나 :) \n\n");
    }

    else
    {
        printf("내가 한번 발라보겠다!\n");
        printf("발모제 바르는 중.....\n");
        sleep(2);
        printf("\n발모제가 아니구나 :( ...... 정답은 %d이다! \n\n", treetment + 1);
    }

    return 0;
}