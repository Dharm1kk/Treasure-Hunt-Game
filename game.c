#include<stdio.h>

int main ()
{
    char choice;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i==0 && j == 0)
            {
                printf("+ ");
            }else if (i==2 && j==2)
            {
                printf("x ");
            }else
            {
                printf("* ");
            }
            
        }
        printf("\n");
    }

    int x = 0, y = 0;
    int positionx = 2, positiony = 2;

    do
    {
        if (x==positionx && y==positiony)
        {
            printf("Game over....\n");
            break;
        }
        

        printf("ENter choice :: ");
        scanf(" %c", &choice);
        switch (choice)
    {
    case 'd':
    y++;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i==x && j == y)
            {
                printf("+ ");
                
            }else if (i==positionx && j==positiony)
            {
                printf("x ");
            }else
            {
                printf("* ");
            
            }
            
        }
        printf("\n");
    }
        break;

    case 's':
    x++;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i==x && j == y)
            {
                printf("+ ");
            }else if (i==positionx && j==positiony)
            {
                printf("x ");
            }else
            {
                printf("* ");
            }
            
        }
        printf("\n");
    }
    break;
    
    case 'a':
    y--;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i==x && j == y)
            {
                printf("+ ");
            }else if (i==positionx && j==positiony)
            {
                printf("x ");
            }else
            {
                printf("* ");
            }
            
        }
        printf("\n");
    }
    break;

    case 'w':
    x--;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i==x && j == y)
            {
                printf("+ ");
            }else if (i==positionx && j==positiony)
            {
                printf("x ");
            }else
            {
                printf("* ");
            }
            
        }
        printf("\n");
    }
    break;

    default:
        break;
    }
    } while (x!=6);
    return 0;
}