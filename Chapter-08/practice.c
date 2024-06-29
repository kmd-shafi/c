// make a program that input user's name & print it's length

// # include <stdio.h>
// int main(){
//     char name[100];
//     printf("Enter your name: ");
//     fgets(name,100,stdin); 

//     int counter=0;
//     for(int i=0;name[i] != '\0'; i++){
//         counter++;
//     }
//     printf("%d",counter-1);
//     return 0;
// }

///////////////////////////////////////////////////////////////////
// standard library function

// 1. strlen()
// 2. strcmp()
// 3. strcpy()
// 4. strcat()

// # include <stdio.h>
// # include <string.h>
// int main(){
//     char name[100];
//     printf("Enter your name:");
//     fgets(name,100,stdin);
//     printf("the length of your name is %d",strlen(name));
// }

////////////////////////

// # include <stdio.h>
// # include <string.h>
// int main(){
//     char new[]="shafi";
//     char old[]="mohammed";
//     printf("%s\n",strcpy(new,old));
//     printf("%s\n",new);
//     return 0;
// }

////////////////////////

// # include <stdio.h>
// # include <string.h>
// int main(){
//     char new[100]="shafi";
//     char sec[]="mohammed";
//     printf("%s\n",strcat(new,sec));
//     printf("%s\n",new);
//     return 0;
// }

////////////////////////

// out put id 0 => string are equal
// out put id 1 pasitive => new>old
// out put id -1 negative => new<old

// # include <stdio.h>
// # include <string.h>
// int main(){
//     char new []="shafi";
//     char old []="mohammed";
//     printf("%d\n",strcmp(new,old));
//     return 0;
// }

///////////////////////////////////////////////////////////////////
// take a string input from the usr using %c
// # include <stdio.h>
// # include <string.h>
// int main(){
//     char name[100];
//     char ch;
// int i=0;
//     while (ch!='\n'){
//         scanf("%c",&ch);
//         name[i]=ch;
//         i++;
//     }
//     name[i]='\0';
//     puts(name);
//     return 0;
// }

///////////////////////////////////////////////////////////////////
// salting 
// find the salted from of a password entered by the user if salted with 1234

// # include <stdio.h>
// # include <string.h>
// int main(){
//     char pass[10];
//     printf("Enter your password: ");
//     scanf("%s",pass);
//     char num[]="1234";
//     printf("%s",strcat(pass,num));
//     return 0;
// }
///////////////////////////////////////////////////////////////////

// write a function name slice which takes a string and return a scliced string from indec of n to m

// # include <stdio.h>

// void slice(char str[],int n,int m);
// int main(){
//     char str[100]="shafimohammed";
//     slice(str,3,6);
//     return 0;
// }

// void slice(char str[],int n,int m){
//     int j=0;
//     char new[100];
//     for(int i=n;i<=m;i++,j++){
//         new[j]=str[i];
//     }
//     new[j]='\0';
//     puts(new);
// }

///////////////////////////////////////////////////////////////////
// count ovels in a string

// # include <stdio.h>

// void count(char str[]);
// int main(){
//     char str[100];
//     printf("Enter your string: ");
//     scanf("%s",str);
//     count(str);
//     return 0;
// }
// void count(char str[]){
//     int count=0;
//     for(int i=0;str[i] != '\0';i++){
//         if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
//             count++;
//         }
//     }
//     printf("%d",count);
// }

///////////////////////////////////////////////////////////////////
// check if given charecter is present in a string or not

// # include <stdio.h>
// int main(){
//     char name[10]="shafi";
//     for(int i=0; name[i]!= '\0';i++){
//         if(name[i]=='a'){
//             printf("present");
//             break;
//         }
//     }
//     return 0;
// }

