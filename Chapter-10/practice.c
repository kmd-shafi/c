// make a program to read 5 integers from a file

// # include <stdio.h>
// int main(){
//     FILE *fptr;
//     fptr=fopen("char.txt","r");
//     int a;
//     while((fscanf(fptr,"%d",&a)!=EOF)){
//         printf("%d",a);
//     }
//     fclose(fptr);
//     return 0;
// }

////////////////////////////////////////////////////////////////////////////
// make a program to write all the add numbers from 1 to n in a file
// # include <stdio.h>
// int main(){
    
//     printf("Enter the number: ");
//     int n;
//     scanf("%d",&n);

//     FILE *fptr;
//     fptr=fopen("odd.txt","w");

//     for(int i=0; i<=n;i++){
//         if(i%2 != 0){
//             fprintf(fptr,"%d",i);
//         }
//     }

//     fclose(fptr);
//     return 0;
// }

////////////////////////////////////////////////////////////////////////
// make a program to input student information for a user & enter it to a file

// # include <stdio.h>
// int main(){
//     char name[100];
//     int rol;
//     float cgpa;

//     printf("Enter your name :");
//     scanf("%s",name);
//     printf("Enter your roll Number :");
//     scanf("%d", &rol);
//     printf("Enter your CGPA :");
//     scanf("%f", &cgpa);

//     FILE *fptr;
//     fptr=fopen("student.txt","w");

//     fprintf(fptr,"student name is :%s\n",name);
//     fprintf(fptr,"student roll Number is :%d\n",rol);
//     fprintf(fptr,"student CGPA is :%f\n",cgpa);

//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////////
// 2 num a&b are written in a file. write a program to replace them with their sum

// # include <stdio.h>
// int main(){
//     FILE *fptr;
//     fptr=fopen("sum.txt","r");

//     int a;
//     int b;

//     fscanf(fptr,"%d",&a);
//     fscanf(fptr,"%d",&b);

//     fclose(fptr);

//     fptr=fopen("sum.txt","w");
//     fprintf(fptr,"%d",a+b);
//     return 0;
// }