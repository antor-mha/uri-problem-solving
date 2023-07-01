#include<stdio.h>
int main()
{
    int i_hour,i_min,f_hour,f_min,hour,min;
    scanf("%d%d%d%d",&i_hour,&i_min,&f_hour,&f_min);
    if (i_hour>f_hour || i_min>f_min)
    {
        hour = i_hour - f_hour;
        min = (60+f_min) - i_min;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",24-hour-1,min);
    }else if (i_hour==f_hour || i_min==f_min)
    {
        hour = f_hour - i_hour;
        min = f_min - i_min;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",hour,min);
    }else
    {
        hour = f_hour - i_hour;
        min = (60+i_min) - f_min;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",24-hour-1,min);
    }
    
    return 0;
}