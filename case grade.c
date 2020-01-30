#include<stdio.h>
int man()
{
    int score,grade;
    scanf("%d",&score);
    grade=score/10;
    switch(grade)
    {
        *//case 10:
        case 9:
        printf("\n\a your grade is A.");
        break;
        case 8:
        printf("\n\a your grade is B.");
        break;
        case 7:
        printf("\n\a your grade is C.");
        break;
        case 6:
        printf("\n\a your grade is D.");
        break;
        default:
        printf("\n\a tour grade is F.");
        break;

    }
    return 0;
}
