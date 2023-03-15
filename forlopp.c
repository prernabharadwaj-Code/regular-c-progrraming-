#include"stdio.h"
int main()
{
    int i=0,j=0;
    while(i<9){           
        if(i>=6 && i<=7)
        {
        i=i+1; 
        continue;       
        } else {
            printf("\nvalue of i =%d",i); 
            i=i+1; 
        }
           
    }
    return 0;
    }
