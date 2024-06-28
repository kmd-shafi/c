// syntax 
// int array[5]={1,2,3,4,5};
// or
// int array[]={1,2,3,4,5};

// # include <stdio.h>
// int main(){
//     int marks[3]={89,78,86};
//     printf("marks in math is %d marks in physics is %d marks in chemistry is %d",marks[0],marks[1],marks[2]);
//     return 0;
// }

///////////////////////////////////////////////////////////////
// stntax 
/*
int marks[3]={89,78,86};
float price[3]={89.9,78.5,86.2};
char name[3]={'a','b','c'};
*/
//////////////////////////////////////////////////////////////
/*
1.input &&
2.output
*/
// input
// scanf("%d",&marks[0]);

// output
// printf("%d",marks[0]);

///////////////////////////////////////////////////////////////
// # include <stdio.h>
// int main(){
//     int marks[3];
//     printf("Enter your subject marks: ");
//     scanf("%d",&marks[0]);
//     scanf("%d",&marks[1]);
//     scanf("%d",&marks[2]);
//     printf("marks in math is %d marks in physics is %d marks in chemistry is %d",marks[0],marks[1],marks[2]);
//     return 0;
// }

/////////////////////////////////////////////////////////////////
// write a program to enter the prices of three items and print the price + gst 

// # include <stdio.h>
// int main(){
//     float total[3];
//     printf("Enter the first price :");
//     scanf("%f",&total[0]);
//     printf("Enter the second price :");
//     scanf("%f",&total[1]);
//     printf("Enter the third price :");
//     scanf("%f",&total[2]);

//     printf("the price of first item is %f\n",total[0]+(total[0]*0.18));
//     printf("the price of second item is %f\n",total[1]+(total[1]*0.18));
//     printf("the price of third item is %f\n",total[2]+(total[2]*0.18));
//     return 0;
// }

////////////////////////////////////////////////////////////////
// initialization of array
/*
 int marks[]={89,78,86};
 or
 int marks[3]={89,78,86};
*/

////////////////////////////////////////////////////////////////
// pointer arithmatic

// # include <stdio.h>
// int main(){
//     int age=24;
//     int *ptr=&age;
//     printf("%d\n",ptr);
//     ptr++;
//     printf("%d\n",ptr);
//     return 0;
// }
// int is 4 bytes

//////////

// # include <stdio.h>
// int main(){
//     float age=24.00;
//     float *ptr=&age;
//     printf("%d\n",ptr);
//     ptr++;
//     printf("%d\n",ptr);
//     return 0;
// }
// float is 4 bytes

////////////

// # include <stdio.h>
// int main(){
//     char name='a';
//     char *ptr=&name;
//     printf("%d\n",ptr);
//     ptr++;
//     printf("%d\n",ptr);
//     return 0;
// }
// char is 1 byte

/////////////////////////////////////////////////////////////////
// we can subtract one pointer from another

// # include <stdio.h>
// int main(){
//     int age=24;
//     int *ptr=&age;
//     int *ptr2=ptr+1;
//     printf("%d\n",ptr);
//     printf("%d\n",ptr2);
//     printf("%d\n",ptr2-ptr);
//     return 0;
// }
///////////////////////////////////////////////////
// we can also compare two pointer

// # include <stdio.h>
// int main(){
//     int age=24;
//     int *ptr=&age;
//     int *ptr2=ptr+1;
//     ptr2=&age;
//     printf("%d",ptr==ptr2);
//     return 0;
// }

//////////////////////////////////////////////////////////////////
// array is pointer
/*
int *ptr=&array[0];
or
int *ptr=array;
*/

/////////////////////////////////////////////////////////////////
// tarverse of array
// # include <stdio.h>
// int main(){
//     int array[5]={1,2,3,4,5};
//     for(int i=0; i<5;i++){
//         printf("%d\n",array[i]);
//     }
//     printf("%d");
//     return 0;
// }

//////////////
// # include <stdio.h>
// int main(){
//     int array[5];
//     for(int i=0;i<5;i++){
//         printf("Enter the number :");
//         scanf("%d",&array[i]);
//     }
//     // output
//     for(int i=0;i<5;i++){
//         printf("%d\n",array[i]);
//     }
//     return 0;
// }
////////////////////////////
// i da same example with for pointers
////////////////////////////
// # include <stdio.h>
// int main(){
//     int array[5];
//     int *ptr=&array[0];
//     for(int i=0;i<5;i++){
//         printf("Enter the number :");
//         scanf("%d",ptr+i);
//     }
//     // output
//     for(int i=0;i<5;i++){
//         printf("%d\n",*(ptr+i));
//     }
//     return 0;
// }

/////////////////////////////////////////////////////////////////
// array in function argument 
// int sum(int array[],int size of array)
// or
// int sum(int *array,int size of array)

// array in function call 
// sum(array,size of array)


// exaple

// # include<stdio.h>

// void printnumbers(int arr[],int n);
// int main(){
//     int array[5]={1,2,3,4,5};
//     printnumbers(array,5);
//     return 0;
// }
// void printnumbers(int arr[],int n){
//     for(int i=0; i<n;i++){
//         printf("%d\t",arr[i]);
//     }
// }

/////////////////////////////////////////////////////////////////
// multy dimensional array
//2d array

// # include <stdio.h>
// int main(){
//     int array[2][2]={{1,2},{3,4}};

//     printf("%d\t",array[0][0]);
//     printf("%d\t",array[0][1]);
//     printf("%d\t",array[1][0]);
//     printf("%d\t",array[1][1]);

//     return 0;
// }

// exaple

// # include <stdio.h>
// int main(){
//     int twoStudentsThreeSubjects[2][3]={{1,2,3},{4,5,6}};
//     printf("%d\t",twoStudentsThreeSubjects[0][0]);
//     printf("%d\t",twoStudentsThreeSubjects[0][1]);
//     printf("%d\t",twoStudentsThreeSubjects[0][2]);
//     printf("%d\t",twoStudentsThreeSubjects[1][0]);
//     printf("%d\t",twoStudentsThreeSubjects[1][1]);
//     printf("%d\t",twoStudentsThreeSubjects[1][2]);
//     return 0;
// }




