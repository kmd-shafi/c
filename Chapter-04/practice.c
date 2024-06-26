// sum of natural numbers and print them reverse

// # include <stdio.h>
// int main(){
//     int n;
//     printf("Enter the numbers:");
//     scanf("%d",&n);
//     int sum=0;
//     for(int i=n;i>=1; i--){
//         sum+=i;
//         printf("%d\n",i);
//     }
//     printf("the sum of %d is %d",n ,sum);
//     return 0;
// }

////////////////////////////////////////////////////////////////

// print table of given number

// # include  <stdio.h>
// int main(){
//     int n;
//     printf("Enter the number :");
//     scanf("%d",&n);
//     for(int i=1; i<=10; i++){
//         printf("%d\n",n*i);
//     }
//     return 0;
// }

//////////////////////////////////////////////////////////////////

// break statement & continue statement

// # include <stdio.h>
// int main(){
//     for(int i=1; i<=5; i++){
//         if(i==3){
//             break;
//         }
//         printf("%d \n",i);
//     }
//     return 0;
// }

// # include <stdio.h>
// int main(){
//     for(int i=1; i<=10; i++){
//         if(i==3){
//             continue;
//         }
//         printf("%d \n",i);
//     }
//     return 0;
// }

////////////////////////////////////////////////////////////////
// take a number from user and the user enter the add number break the loop
// # include <stdio.h>
// int main(){
//     int n;
//     do{
//     printf("Enter the Number:");
//     scanf("%d",&n);

//     if(n%2!=0){
//         break;    
//     }
//     printf("Your number is %d\n",n);
//     }while(1);
//     printf("tank you");
//     return 0;
// }

//////////////////////////////////////////////////////////////
// take a number from user and the number is divided by 7 break the loop

// # include <stdio.h>
// int main(){
//     int n;
//     do{
//         printf("Enter the number: ");
//         scanf("%d",&n);
//         if(n%7==0){
//             break;            
//         }
//         printf("your number is %d\n",n);
//     }while(1);
//     printf("Thanks");
//     return 0;
// }

/////////////////////////////////////////////////////////////////
// print the number from 1 to 10 except 6

// # include <stdio.h>
// int main(){
//     for(int i=1; i<=10; i++){
//         if(i==6){
//             continue;
//         }
//         printf("%d\n",i);
//     }
//     return 0;
// }

////////////////////////////////////////////////////////////////
// print the odd numbers from 5 to 50 

// # include <stdio.h>
// int main(){
//     for(int i=5; i<=50; i++){
//         if(i%2!=0){
//             printf("%d\n",i);
//         }
//     }
//     return 0;
// }

////////////////////////////////////////////////////////////////
// factorial of n
// # include <stdio.h>
// int main(){
//     int n;
//     printf("enter the number:");
//     scanf("%d",&n);
//     int fact=1;
//     for(int i=1; i<=n;i++){
//         fact*=i;
//     }
//     printf("%d",fact);
//     return 0;
// }

////////////////////////////////////////////////////////////////
// print the revers of table

// # include <stdio.h>
// int main(){
//     int n=2;
//     for(int i=10; i>=1; i--){
//         printf("%d\n",n*i);
//     }
//     return 0;
// }

////////////////////////////////////////////////////////////////
// sum of 5 to 50

// # include <stdio.h>
// int sum=0;
// int main(){
//     for(int i=5; i<=50; i++){
//         sum+=i;
//     }
//     printf("%d",sum);
//     return 0;
// }