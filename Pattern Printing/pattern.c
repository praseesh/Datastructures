//         * * * * * 
//       * * * * * 
//     * * * * * 
//   * * * * * 
// * * * * *

// #include <stdio.h>

// int main()
// {
//     int i, j;
//     for(i=1; i<=5; i++){
//         for (j=1; j<=5-i; j++){
//             printf("  ");
//         }
        
//         for (j=1; j<=5; j++){
//             printf("* ");
//         }
//         printf("\n");
//     }


//     return 0;
// }




// * 
// * * 
// * * * 
// * * * * 
// * * * 
// * * 
// * 


// #include <stdio.h>

// int main()
// {
//     int i, j;
//     for (i=1; i<=4; i++){
//         for (j=1; j<=i; j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     for (i=1; i<4; i++){
//         for (j=1; j<=4-i; j++){
//             printf("* ");
//         }
//         printf("\n");
//     }

//     return 0;
// }



// * * * * * * 
// *       * 
// *     * 
// *   * 
// * * 
// * 


// #include <stdio.h>

// int main()
// {
//     int i, j;
//     for (i=1; i<=6; i++){
//         for (j=0; j<=6-i; j++){
//             if (j==0 || i==1 || j==6-i){
//                 printf("* ");
//             }
//             else{
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }



// * * * 
// * * * * * * 
// * * * * * * * * * 
// * * * * * * * * * * * * 


// #include <stdio.h>

// int main()
// {
//     int i, j;
//     for(i=1; i<=4; i++){
//         for (j=1; j<=i*3; j++){
//             printf("* ");
//         }
//         printf("\n");
//     }


//     return 0;
// }



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