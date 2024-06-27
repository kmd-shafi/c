// example
// # include <stdio.h>
// int main(){
//     int *ptr;
//     int x;

//     ptr=&x;
//     *ptr=0;

//     printf("x=%d\n",x);
//     printf("ptr=%d\n",*ptr);


//     *ptr+=5;
//     printf("x=%d\n",x);
//     printf("ptr=%d\n",*ptr);

//     (*ptr)++;
//     printf("x=%d\n",x);
//     printf("ptr=%d\n",*ptr);

//     return 0;
// }


////////////////////////////////////////////////////////////////////
// syntax
/*
int **pptr;
float **pptr;
char **pptr;
*/


// pointer to pointer   
// # include <stdio.h>
// int main(){
//     int age=24;
//     int *ptr=&age;
//     int **pptr=&ptr;
//     printf("%d\n",age);
//     printf("%d\n",*ptr);
//     printf("%d\n",**pptr);
//     return 0;
// }

///////////////////////////////////////////////////////////////////

// poiner in function call

/*
1.call by value
2.call by reference
*/




// # include <stdio.h>
// int mul(int a);

// int _mul(int *b);
// int main(){
//     int a=5;
//     // call by value
//     printf("%d\n",mul(a));
//     printf("%d\n",a);

//     int b=5;
//     //call by reference
//     printf("%d\n",_mul(&b));
//     printf("%d\n",b);

//     return 0;
// }

// int mul(int a){
//     a=a*a;
//     return a;
// }

// int _mul(int *b){
// *b= (*b) * (*b);
//     return *b;
// }


//////////////////////////////////////////////////////////////////
// same exaple
// # include <stdio.h>
// int sum(int a);
    
// int main(){
//     int a=5;
//     int ans=sum(a);
//     printf("%d\n",ans);
//     printf("%d\n",a);
    
//     return 0;
// }


// # include <stdio.h>
// int _sum(int *a);
    
// int main(){
//     int a=5;
//     int ans=_sum(&a);
//     printf("%d\n",ans);
//     printf("%d\n",a);
    
//     return 0;
// }

// int _sum(int *a){
//     *a = (*a)+ (*a);
//     return *a;
// }

////////////////////////////////////////////////////////////////////
//swap 2 numbers 
// # include <stdio.h>
// int swap(int *a,int *b);
// int main(){
//     int a=10;
//     int b=20;
//     swap(&a,&b);
//     printf("a=%d b=%d",a,b);
//     return 0;
// }

// int swap(int *a,int *b){
//      int t=*b;
//         *b=*a;
//         *a=t;
// }

/////////////////////////////////////////////////////////////////////
// print address are same or different

// # include <stdio.h>
// void printAddress(int n);
// int main(){
//     int n=4;
//     printf("%p\n",&n);
//     printAddress(n);
//     return 0;
// }

// void printAddress(int n){
//     printf("%p\n",&n);
// }

/////////////////////////////////////////////////////////////////////
// calculate sum,product & average of 2 numbers . print average in main function

// # include <stdio.h>

// int calculate(int a,int b, int *sum ,int * product,int *average);
// int main(){
//     int a=10;
//     int b=20;
//     int sum,product,average;
//     calculate(a,b,&sum,&product,&average);
//     printf("sum=%d product=%d average=%d",sum,product,average);
//     return 0;
// }
// int calculate(int a,int b, int *sum ,int * product,int *average){
//     *sum=a+b;
//     *product=a*b;
//     *average=a+b/2;
//     return 0;
// }