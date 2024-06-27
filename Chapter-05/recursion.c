// recursion it call it self
// print hello 5 times using recursion

// we can do same work by using loops also

// # include <stdio.h>
// void hello(int n);
// int main(){
//     hello(5);
//     return 0;
// }
// void hello(int n){
//     if(n==0){
//         return ;
//     }
//     printf("hello\n");
//     hello(n-1);
// }

//////////////////////////////////////////////////////////////////////
// sum of n natural number using recursion

// # include <stdio.h>
// int sum(int n);

// int main(){
//     printf("%d",sum(5));
//     return 0;
// }

// int sum(int n){
//     if(n==1){
//         return 1;
//     }
//     int nm1=sum(n-1);
//     int tsm=n+nm1;
//     return tsm;

// }

////////////////////////////////////////////////////////////////////
// convert celsivs to fahrenheit 
// # include <stdio.h>

// float fahrenheit(float celsius);
// int main(){
//     printf("%f",fahrenheit(0));
//     return 0;
// }

// float fahrenheit(float celsius){
//     return (celsius*9/5)+32;
// }

//////////////////////////////////////////////////////////////////////

//factorial of n using recursion

// # include <stdio.h>
// int factorial(int n);
// int main(){
//     printf("%d",factorial(5));
//     return 0;
// }

// int factorial(int n){
//     if(n==1){
//         return 1;
//     }
//     int nm1=factorial(n-1);
//     int tol=nm1*n;
//     return tol;
// }


//////////////////////////////////////////////////////////////////
// percentage of marks in three subs
// # include <stdio.h>
// float marks(float sub1,float sub2,float sub3);
// int main(){
//     printf("%f",marks(50,60,70));
//     return 0;
// }

// float marks(float sub1,float sub2,float sub3){
//     return ((sub1+sub2+sub3)/300)*100;
// }

///////////////////////////////////////////////////////////////////
// print table 2 using recursion

// # include <stdio.h>
// int sum(int n, int num);
// int main(){
//     sum(1,2);
//     return 0;
// }
// int sum(int n,int num){
//     if(n==11){
//         return 10;
//     }
//     printf("%d\n",n*num);
//     sum(n+1,num);
// }

////////////////////////////////////////////////////////////////////
// golden ratio using recursion
// 0,1,1,2,3,5,8....
// # include <stdio.h>

// int golden(int n);
// int main(){
//     printf("%d",golden(6));
//     return 0;
// }

// int golden(int n){
//     if(n==0){
//         return 0;
//     }
//     if (n==1)
//     {
//         return 1;
//     }
//     int nm2=golden(n-2);
//     int nm1=golden(n-1);
//     int tol=nm2+nm1;
//     return tol;
// }