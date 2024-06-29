//syntax
/*
decleration of structure

struct student{
    char name[100];
    int roll;
    float marks;
};

usage
struct student s1;
s1.name="Shafi";
s1.roll=1;
s1.marks=100;
*/


//////////////////////////////////////////////////////////////////
// write a progeram to store the data of 3 students in structure

// # include <stdio.h>
// # include <string.h>

// struct students{
//     int roll;
//     float marks;
//     char name[100];
// };

// int main(){
//     struct students s1;
//     s1.roll=1;
//     s1.marks=100.0;
//     strcpy(s1.name,"Shafi");
//     printf("roll number is %d\n marks is %f\n name is %s",s1.roll,s1.marks,s1.name);


//     struct students s2;
//     s2.roll=2;
//     s2.marks=90.0;
//     strcpy(s2.name,"Mohammed");
//     printf("roll number is %d\n marks is %f\n name is %s",s2.roll,s2.marks,s2.name);


//     struct students s3;
//     s3.roll=3;
//     s3.marks=80.0;
//     strcpy(s3.name,"kattudabi");
//     printf("roll number is %d\n marks is %f\n name is %s",s3.roll,s3.marks,s3.name);
//     return 0;
// }

////////////////////////////////////////////////////////////
// array of structure

// # include <stdio.h>
// # include <string.h>
// struct student{
//     char name[100];
//     int roll;
//     float marks;
// };

// int main(){
//     struct student s[3];
//     s[0].marks=100.0;
//     s[0].roll=1;
//     strcpy(s[0].name,"Shafi");
//     printf("marks is %f\n roll number is %d\n name is %s",s[0].marks,s[0].roll,s[0].name);
//     return 0;
// }

/////////////////////////////////////////////////////////////////

// initialization of structure

// struct student s1={"shafi",1,100.0};

//example

//  # include <stdio.h>
//  struct student{
//      char name[100];
//      int roll;
//      float marks;
//  };
//  int main(){
//     struct student s1={"shafi",1,100.0};
//     printf("name is %s\n roll number is %d\n marks is %f",s1.name,s1.roll,s1.marks);
//     return 0;
//  }

////////////////////////////////////////////////////////////////////
// pointer to structure

// # include <stdio.h>
// # include <string.h>

// struct student{
//     char name[100];
//     int roll;
//     float marks;
// };
// int main(){
//     struct student s1;
//     struct student *ptr;
//     ptr=&s1;
//     strcpy((*ptr).name,"shafi");
//     (*ptr).roll=1;
//     (*ptr).marks=100.0;
//     printf("name is %s\n roll number is %d\n marks is %f",(*ptr).name,(*ptr).roll,(*ptr).marks);

//     return 0;
// }

//////////////////////////////////////////////////////////////////////
// Arrow operator

// # include <stdio.h>
// struct student{
//     char name[100];
//     int roll;
//     float marks;
// };
// int main(){
//     struct student s1={"shafi",1,100.0};
//     struct student *ptr;
//     ptr=&s1;
//     printf("name is %s\n roll number is %d\n marks is %f",ptr->name,ptr->roll,ptr->marks);
//     return 0;
// }

//////////////////////////////////////////////////////////////////////
// passing structure to function
// # include <stdio.h>

// struct student{
//     char name[100];
//     int roll;
//     float marks;
// };

// void printinfo(struct student s1);

// int main(){
//     struct student s1={"shafi",1,100.0};
//     printinfo(s1);
//     return 0;
// }
// void printinfo(struct student s1){
//     printf("name is %s\n roll number is %d\n marks is %f",s1.name,s1.roll,s1.marks);
// }

//////////////////////////////////////////////////////////////////////
// typedef key word

// # include <stdio.h>
// typedef struct firstYearStudents{
//     char name[100];
//     int roll;
//     float marks;
// }fys;
// int main(){
//     fys s1={"shafi",1,100.0};
//     printf("name is %s\n roll number is %d\n marks is %f",s1.name,s1.roll,s1.marks);
//     return 0;
// }