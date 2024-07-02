// dynamic memory allocation
/*
1.malloc memory allocation
2.calloc continous
3.realloc re allocation
4.free
*/

// # include <stdio.h>
// # include <stdlib.h>
// int main(){
//     int *ptr;
//     ptr=(int *) malloc(5*sizeof(int));
//     ptr[0]=1;
//     ptr[1]=2;
//     ptr[2]=3;
//     ptr[3]=4;
//     ptr[4]=5;
//     for(int i=0; i<5; i++){
//         printf("%d",ptr[i]);
//     }
//     return 0;
// }

////////////////
// write a program to allocate memory to store 5 prices

// # include <stdio.h>
// # include <stdlib.h>
// int main(){
//     float *ptr;
//     ptr=(float *) malloc(5*sizeof(float));
//     ptr[0]=100.0;
//     ptr[1]=200.0;
//     ptr[2]=300.0;
//     ptr[3]=400.0;
//     ptr[4]=500.0;
//     for(int i=0; i<5;i++){
//         printf("%f\n",ptr[i]);
//     }
// }

/////////////////////////////////////////////////////////////////////
// calloc()
// initialize with 0

// # include <stdio.h>
// # include <stdlib.h>
// int main(){
//     int *ptr;
//     ptr=(int *) calloc(5,sizeof(int));
//     for(int i=0; i<5; i++){
//         printf("%d\n",ptr[i]);
//     }
//     return 0;
// }

//////////////////////////////////////////////////////////////////////
// re allocation
// realloc

// # include <stdio.h>
// # include <stdlib.h>
// int main(){
//     int *ptr;
//     ptr=(int *)malloc(5*sizeof(int));
//     for(int i=0; i<5; i++){
//         ptr[i]=i;
//     }
//     for(int i=0; i<5; i++){
//         printf("%d\n",ptr[i]);
//     }
//     free(ptr);
//     return 0;
// }

////////////////////////////////////////////////////////////////////
// realloc()

// # include <stdio.h>
// # include <stdlib.h>

// int main(){
//     int *ptr;
//     ptr=(int *)malloc(5*sizeof(int));
//     for(int i=0;i<5; i++){
//         ptr[i]=i;
//     }
//     for(int i=0;i<5; i++){
//         printf("%d\n",ptr[i]);
//     }

//     ptr=realloc(ptr,6);

//     ptr=(int*)malloc(5*sizeof(int));
//     for(int i=0;i<6; i++){
//         ptr[i]=i;
//     }
//     for(int i=0;i<6; i++){
//         printf("%d\n",ptr[i]);
//     }

//     return 0;
// }

///////////////////////////////////////////////////////////////////
// allocate memory for 5 mumbers then dynamicaly increase it to 8 numbers
// # include <stdio.h>
// # include <stdlib.h>
// int main(){
//     int *ptr;
//     ptr=(int *)malloc(5*sizeof(int));
//     for(int i=1; i<=5; i++){
//         ptr[i]=i;
//     }
//     for(int i=1; i<=5;i++){
//         printf("%d\n",ptr[i]);
//     }

//     ptr=realloc(ptr,8);

//     for(int i=1; i<=8; i++){
//         ptr[i]=i;
//     }
//     for(int i=1; i<=8;i++){
//         printf("%d\n",ptr[i]);
//     }

//     return 0;
// }

////////////////////////////////////////////////////////////////////////////////

// to find size of int , etc

// # include <stdio.h>
// # include <stdlib.h>
// int main(){
//     printf("%d\n",sizeof(int));
//     printf("%d\n",sizeof(float));
//     printf("%d\n",sizeof(char));
//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////////
// create an array of size 5 members using calloc & enter it's value from user.

// # include <stdio.h>
// # include <stdlib.h>
// int main(){
//     int *ptr;
//     ptr=(int *)calloc(5,sizeof(ptr));
//     for(int i=0;i<5;i++){
//         scanf("%d",&ptr[i]);
//     }
//     for(int i=0; i<5; i++){
//         printf("%d",ptr[i]);
//     }
//     return 0;
// }

////////////////////////////////////////////////////////////////////////////////
// allocate memory to store first 5 add numbers , then reallocate it to store first 6 even numbets;

// # include <stdio.h>
// # include <stdlib.h>
// int main(){
//     int *ptr;
//     ptr=(int *)malloc(5*sizeof(int));
//     ptr[0]=1;
//     ptr[1]=3;
//     ptr[2]=5;
//     ptr[3]=7;
//     ptr[4]=9;
//     for(int i=0; i<5; i++){
//         printf("%d\n",ptr[i]);
//     }
//     ptr=realloc(ptr,5);
//     ptr[0]=2;
//     ptr[1]=4;
//     ptr[2]=6;
//     ptr[3]=8;
//     ptr[4]=10;
//     ptr[5]=12;
//     for(int i=0; i<6; i++){
//         printf("%d\n",ptr[i]);
//     }
//     return 0;
// }