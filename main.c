#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rate1=0,rate2=0,sum=0,days=30,more_packets;
    int stop=1;
    do{
    system("cls");
    for (int i=0;i<10;i++)
        printf("*");
    printf("\nMILK AMOUNT Calculator \n\n\n");
    printf("INPUT RATE OF LIGHT BLUE PACK \t");
    scanf("%d",&rate1);
    printf("\n\nINPUT RATE OF DARK BLUE PACK \t");
    scanf("%d",&rate2);
    printf("\nENTER NO. OF days\n\t=");
    scanf("%d",&days);
    if(days>31)
    {
        for(int i=0;i<5;i++)
            printf("process stopped..err>>\n");
        printf("ERROR DATE ");
        exit(0);

    }
    printf("\nEnter rate of more packets");
    scanf("%d",&more_packets);
    sum=(rate1*days)+(rate2*2*days);
    if(more_packets>0)
        sum=sum+more_packets;
    if(more_packets<0||more_packets=='-')
        sum=sum-more_packets;
    system("cls");
    printf("\n\nENTERED VALUE ARE ");
    printf("\nLIGHT BLUE PACKET RATE IS %d",rate1);
    printf("\nDARK BLUE PACKET RATE IS %d",rate2);
    printf("\nENTERED DAYS ARE %d",days);
    printf("\nEXTRA AMOUNT OF MORE PACKETS ARE \t%d",more_packets);
    printf("\n\n\nAMOUNT TO BE PAID IS \t%d",sum);
    for(int j=0;j<5;j++)
        printf("\n");
    printf("enter 1 to continue or other digit or alphabet to stop:\t");
    scanf("%d",&stop);
    }while(stop==1);
}
