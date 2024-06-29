// initialising a string
/*
char name[]={'a','b','c','d','e','\0};
or
char name[]="shafi";
*/

// # include <stdio.h>
// int main(){
//     char name[]="shafi";
//     printf("%s",name);
//     return 0;
// }
////////////
// # include <stdio.h>
// int main(){
//     char name[]={'s','h','a','f','i','\0'};
//     for(int i=0; name[i] !='\0'; i++){
//         printf("%c",name[i]);
//     }
//     return 0;
// }

/////////////////////////////////////////////////////////////////
// # include <stdio.h>
// int main(){
//     int firstname[]={'s','h','a','f','i','\0'};
//     int lastname[]={'a','b','c','d','e','\0'};
//     for(int i=0; firstname[i]!='\0';i++){
//         printf("%c",firstname[i]);    
//     }
//     printf("\n");
//     for(int i=0; firstname[i]!='\0';i++){
//         printf("%c",lastname[i]);    
//     }
//     return 0;
// }

////////////////////////////////////////////////////////////////
// string formate specifier
/*
printf("%s",name);

scanf("%s",&name);
or
scanf("%s",name);
*/

// example
// # include <stdio.h>
// int main(){
//     char name[20];
//     printf("Enter your name: ");
//     scanf("%s",&name);
//     printf("your name is %s",name);
//     return 0;
// }

/////////////////////////////////////////////////////////////////
// ask user to enter the their first name  and print it back them . also try this with their full name
// # include <stdio.h>
// int main(){
//     char name[20];
//     // printf("Enter your name: ");
//     printf("Enter your full name: ");
//     scanf("%s",name);
//     printf("your name is %s",name); //=> your name is mohammed    
//     return 0;
// }

// solution
/*
fgets(str,n,file); // intput
puts(); // output
*/

// # include <stdio.h>
// int main(){
//     char name[20];
//     printf("Enter your full name:");
//     fgets(name,20,stdin);
//     puts(name);
//     return 0;
// }

//////////////////////////////////////////////////////////////////

// string using pointer
/*
char *name="shafi"; or char name[]="shafi";
*/

// # include <stdio.h>
// int main(){
//     char name[]="shafi"; // we can't do re-declaration
//     printf("%s\n",name);

//     char *_name="shafi";  // we can do re-declaration
//     _name="mohammed";

//     printf("%s\n",_name); 
//     return 0;
// }