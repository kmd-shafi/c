// function 
/*
1.function declaration or protoType
2.function Defination
3.function call
*/


// we can write code with out declaration

// # include <stdio.h>

// void hello(){
//     printf("hello");
// }
// int main(){
//     hello();
//     return 0;
// }


//////////////////////////////////

// # include <stdio.h>
// void hello();
// void goodbye();

// int main(){
//     hello();
//     goodbye();
//     return 0;
// }
// void hello(){
//     printf("Hello\n");
// }
// void goodbye(){
//     printf("GoodBye\n");
// }

////////////////////////////////////////////////////////////
// write a function that print a Namaste if user is India and print a Banjor if user is French
// # include <stdio.h>
// void namaste();
// void banjor();
// int main(){
//     char ch;
//     printf("Enter I if you are Indian or Enter F if you are French %c :",ch);
//     scanf(" %c",&ch);
//     if(ch =='I'){
//         namaste();
//     }else if (ch =='F'){
//         banjor();
//     }else{
//         printf("Undefind");
//     }
//     return 0;
// }

// void namaste(){
//     printf("Namaste");
// }
// void banjor(){
//     printf("Banjor");
// }

/////////////////////////////////////////////////////////////

/*
function
1. library =printf(),scanf()
2. UserDefind function 
*/

////////////////////////////////////////////////////////////

// sum of two numbers
// # include <stdio.h>
// int sum(int a, int b);
// int main(){
//     printf("Enter a value:");
//     int a;
//     scanf("%d",& a);

//     printf("Enter b value:");
//     int b;
//     scanf("%d",& b);

//     int ans=sum(a,b);
//     printf("The sum of %d+%d=%d",a,b,ans);
//     return 0;
// }

// int sum(int a, int b){
//     return a+b;
// }

///////////////////////////////////////////////////////////////////
// user give a numver and print the table of it

// # include <stdio.h>
// void table(int n);
// int main(){
//     printf("Enter the number : ");
//     int n;
//     scanf("%d",&n);
//     table(n);
//     return 0;
// }

// void table(int n){
//     for(int i=1; i<=10; i++){
//         printf("%d\n",n*i);
//     }
// }

///////////////////////////////////////////////
//  # include <stdio.h>
//  float GST(int price);
//  int main(){
//     printf("Enter the price :");
//     int price;
//     scanf("%d",&price);

//     float finalValue=GST(price);
//     printf("The final value is %f",finalValue);
//     return 0;
//  }

//  float GST(int price){
//     return (price +(price*0.18));
//  }

///////////////////////////////////////////////////////////////////

// calculate square of given number by useing librery function <math.h>

// # include <stdio.h>
// # include <math.h>

// float square(int num);

// int main(){
//     printf("Enter the number :");
//     int num;
//     scanf("%d",&num);
//     float ans=square(num);
//     printf("The square of %d is %f",num,ans);
//     return 0;
// }


// float square(int num){
//     return pow(num,2);
// }

///////////////////////////////////////////////////////////

// clculate area of square,circle,rectangle

// # include <stdio.h>
// # include <math.h>

// float square(int num);
// float circle(int radius);
// float rectangle(int side1, int side2);
// int main(){
//     int side1=10;
//     int side2=20;
//     float rectangleArea=rectangle(side1,side2);
//     printf("The area of rectangle is %f",rectangleArea);
//     return 0;
// }

// float square(int num){
//     return pow(num,2);
// }

// float circle(int radius){
//     return 3.14*(radius*radius);
// }

// float rectangle(int side1, int side2){
//     return side1*side2;
// }