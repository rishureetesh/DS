#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include<stdbool.h>
char ip[100];
int len;
void check()
{
    int LO=NULL,i,Octate=0,digit,count=0;
    for(i=0;i<strlen(ip);i++)
        {
            // Check for the digit in each character
            if(isdigit(ip[i]))
            {
                //convert to digit and then change them into octate
                
                digit=ip[i]-48;
                Octate=(Octate*10)+digit;
            }
            //Check for the '.' and map the count of '.'
            // LO---> Last occurance of '.'
            else if((ip[i]=='.' && count <=3)&&(LO-i!=1 ||LO==NULL))
            {
                LO=i;
                if(Octate<=255)
                {
                    Octate=0;
                    count++;
                }
                else
                {
                    printf("\n\nInvalid Ip adress");
                    return;
                }
            }
            else
            {
                printf("\n\nInvalid Ip adress");
                return;
            }
        }
        printf("\n\nValid ip address :)");
}
void main()
{
    printf("\n\nEnter the IP Address to validate : ");
    scanf("%s",ip);
    len=strlen(ip);

     /*
     *Check the minimum and maximum length of an ip address i,e 7 to 15
     *Check for the digit in the 1st place and last place
     */
    
    if((len>=7 && len<=15)&&(isdigit(ip[0])&&isdigit(ip[len-1])))
    {
        check();
    }
    else
    {
        printf("\n\nInvalid Ip adress");
    }
    
}