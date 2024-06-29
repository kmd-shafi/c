// count the add numbers in array

// # include <stdio.h>
// void oddnum(int arr[],int n);
// int main(){
//     int array[5]={1,2,3,4,5};
//     oddnum(array,5);
//     return 0;
// }
// void oddnum(int arr[],int n){
//     int count=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]%2!=0){
//             count++;
//         }
//     }
//     printf("%d",count);
// }

///////////////////////////////////////////////////////////////////////////////

// write a function to reverse an array example array[5]={1,2,3,4,5} => 5,4,3,2,1

// # include <stdio.h>
// void reverse(int arr[],int n);
// void printarray(int arr[],int n);
// int main(){
//     int array[5]={1,2,3,4,5};
//     reverse(array,5);
//     printarray(array,5);
//     return 0;
// }
// void reverse(int arr[],int n){
//     for(int i=0; i<n/2 ;i++){
//         int first=arr[i];
//         int second=arr[n-i-1];
//         arr[i]=second;
//         arr[n-i-1]=first;
//     }
    
// }
// void printarray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         printf("%d \t",arr[i]);
//     }
// }

///////////////////////////////////////////////////////////////////////////////

// write a program to store gloden ratio in array

// # include <stdio.h>

// void goldenratio(int arr[],int n);
// void printarray(int arr[],int n);
// int main(){
//     int array[5]={1,2,3,4,5};
//     goldenratio(array,5);
//     printarray(array,5);
//     return 0;
// }
// void goldenratio(int arr[],int n){
//     for(int i=0; i<n; i++){
//         arr[0]=0;
//         arr[1]=1;
//         arr[i]=arr[i-1]+arr[i-2];
//     }
// }
// void printarray(int arr[],int n){
//     for(int i=0; i<n; i++){
//         printf("%d\t",arr[i]);
//     }
// }

///////////////////////////////////////////////////////////////////////////////
// 2D array

// # include <stdio.h>
// int main(){
//     int array[2][10];
//     int num2=2;
//     int num3=3;
//     for( int i=0; i<10; i++){
//         array[0][i]=(i+1)*num2;
//     }
//     for( int i=0; i<10; i++){
//         array[1][i]=(i+1)*num3;
//     }
//     for( int i=0; i<10; i++){
//         printf("%d\n",array[0][i]);
//     }
//     for( int i=0; i<10; i++){
//         printf("%d\n",array[1][i]);
//     }
//     return 0;
// }

