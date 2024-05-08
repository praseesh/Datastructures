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



* * * 
* * * * * * 
* * * * * * * * * 
* * * * * * * * * * * * 


#include <stdio.h>

int main()
{
    int i, j;
    for(i=1; i<=4; i++){
        for (j=1; j<=i*3; j++){
            printf("* ");
        }
        printf("\n");
    }


    return 0;
}



        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *



#include <stdio.h>

int main() {
    int i,j,n;

    printf("Enter a number: ");
    scanf("%d",&n);

    for (i=1; i<=n; i++){
        for (j=1; j<=n-i; j++){
            printf("  ");
        }
        for (j=1; j<=2*i-1; j++){
            printf("* ");
        }
        printf("\n");
    }
    

    return 0;
}

*             * 
* * *         * * * 
* * * * *     * * * * * 
* * * * * * * * * * * * * * 

#include <stdio.h>

int main() {
    int i,j,n;

    printf("Enter a number: ");
    scanf("%d",&n);
    
    for (i=1;i<=n; i++){
      for (j=1; j<=2*i-1; j++){
          printf("* ");
      }
      for (j=1; j<=n-i; j++){
           printf("  ");
      }
      for (j=1; j<=n-i; j++){
           printf("  ");
      }
      for (j=1;j<=2*i-1;j++){
        printf("* ");
      }
      printf("\n");
    }

    return 0;
}

*         *
***     ***
***** *****
***********

#include <stdio.h>

int main()
{
   int k=1, i, j;
   for(i=1;i<=4;i++){
       if(i>1){
           k=k+2;
       }
       for(j=1;j<=11;j++){
           if(i==4){
               printf("* ");
           }
           else if(j<=k || j>=12-k){
               printf("* ");
           }
           else{
               printf(" ");
           }
       }
       printf("\n");
   }

    return 0;
}


*         *
***     ***
***** *****
***********

#include <stdio.h>

int main() {
    int count = 0;
    for (int i = 1; i <= 4; i++) {
        for (int j = 0; j < 11; j++) {
            if (j <= 0 + count || 10 - count <= j) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        count += 2;
        printf("\n");
    }
    return 0;
}



* 
* * 
* * * 
* * * * 
* * * * * 


#include <stdio.h>

int main() {

  int i, j;
  for (i=1; i<=5; i++){
    for (j=1; j<=i; j++){
      printf("* ");
    }
    printf("\n");
  }
    return 0;
}


* 
* * * 
* * * * * 
* * * * * * * 
* * * * * * * * * 


#include <stdio.h>

int main()
{
    for(int i=1; i<=5; i++){
        for (int j=1; j<=2*i-1;j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}


1 
1 2 3 
1 2 3 4 5 
1 2 3 4 5 6 7 
1 2 3 4 5 6 7 8 9


#include <stdio.h>

int main()
{
    for(int i=1; i<=5; i++){
        for (int j=1; j<=2*i-1;j++){
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}


A 
A B C 
A B C D E 
A B C D E F G 
A B C D E F G H I 


#include <stdio.h>

int main()
{
    for(int i=1; i<=5; i++){
        for (int j=1; j<=2*i-1;j++){
            printf("%c ",j+64);
        }
        printf("\n");
    }

    return 0;
}

    *
   ***
  *****
 *******
*********


#include <stdio.h>

int main() {
    int i, j;


    for(i=1; i<=5; i++) {
        for(j=1; j<= 5-i; j++) {
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 


#include <stdio.h>

int main() {
  int i,j,k = 0;
  for (i=1; i<=5; i++){
    for(j=1; j<=i; j++){
      k++;
      printf("%d ",k);
      
    }
    printf("\n");
  }

    return 0;
}



~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
F Patterns
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

* * 
* 
* * * * 
* 
* 
* * * * * * 
* 
* 
* 
* * * * * * * * 
* 
* 
* 
* 


#include <stdio.h>

int main() {
  int i,j,k,rows;
  printf("Enter rows:\t");
  scanf("%d",&rows);
  for (i=1; i<=rows; i++){
    for (j=1; j<=2*i; j++){
    printf("* ");
  }
  printf("\n");
  for (k=1; k<=i; k++){
    printf("* \n");
  }

  }
    return 0;
}


X X X X X X X X X X
X
X X X X X X X X
X
X X X X X X
X
X X X X
X
X X
X


#include <stdio.h>

int main() {
  int i,j,k,row;
  printf("Enter rows:\t");
  scanf("%d",&row);
  for (i=row; i>=1; i--){
    for (j=1; j<=i*2; j++){
      printf("X ");
    }
    printf("\n");
    for (k=1;k<=1; k++){
      printf("X\n");
    }
  }
    return 0;
}



      *       
    * * *     
  * * * * *   
* * * * * * * 
  * * * * *   
    * * *     
      *   


#include <stdio.h>

int main() {
  int i,j,k=0;

  for (i=1;i<=7;i++){
    i<=4?k++:k--;
    for (j=1; j<=7; j++){
      if (j>=5-k && j<=3+k){
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



A 
1 1 
B B B 
2 2 2 2 
C C C C C 
3 3 3 3 3 3 
D D D D D D D 
4 4 4 4 4 4 4 4 



#include <stdio.h>

int main()
{
    int i,j,k=65,m=1, alpha=0;
    for (i=1; i<=8; i++){
        
        for(j=1;j<=i;j++){
            alpha=0;
            if(i%2==1){
                printf("%c ", k);  
                alpha=1;
            }
            else{
                printf("%d ",m);
            }
        }
        if(alpha){
            k++;
        }
        else{
            m++;
        }
        printf("\n");
    }
    return 0;
}