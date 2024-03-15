        * * * * * 
      * * * * * 
    * * * * * 
  * * * * * 
* * * * *

#include <stdio.h>

int main()
{
    int i, j;
    for(i=1; i<=5; i++){
        for (j=1; j<=5-i; j++){
            printf("  ");
        }
        
        for (j=1; j<=5; j++){
            printf("* ");
        }
        printf("\n");
    }


    return 0;
}




* 
* * 
* * * 
* * * * 
* * * 
* * 
* 


#include <stdio.h>

int main()
{
    int i, j;
    for (i=1; i<=4; i++){
        for (j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
    for (i=1; i<4; i++){
        for (j=1; j<=4-i; j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}



* * * * * * 
*       * 
*     * 
*   * 
* * 
* 


#include <stdio.h>

int main()
{
    int i, j;
    for (i=1; i<=6; i++){
        for (j=0; j<=6-i; j++){
            if (j==0 || i==1 || j==6-i){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
