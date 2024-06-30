// operations on file
/*
1. create a file
2. open a file
3. write a file
4. read a file
5. close a file
6. delete a file
*/

// types of file
/*
1. text file => text.txt ,.c
2. binary file => image.jpg, .exe , .jpg
*/

// file pointer
/*
FILE *fp;
fp = fopen("file_name","mode");
*/

//////////////////////////////////////////////////////////////////////
// open a file

// # include <stdio.h>
// int main(){
//     FILE *fptr;
//     fptr=fopen("txt.txt","w");


//     fclose(fptr);
//     return 0;
// }

/////////////////////////////////////////////////////////////////////
// file opening mode
/*
1. r => read
2. w => write
3. a => append
4. rb => read binary
5. wb => write binary
*/

/////////////////////////////////////////////////////////////////////
// reading a file

// char ch;
// fscanf(fp,"%c",&ch);

// # include <stdio.h>
// int main(){
//     FILE *fptr;
//     fptr=fopen("txt.txt","r");
//     char ch;
//     fscanf(fptr,"%c",&ch);
//     printf("%c",ch);
//     fscanf(fptr,"%c",&ch);
//     printf("%c",ch);
//     fscanf(fptr,"%c",&ch);
//     printf("%c",ch);
//     fscanf(fptr,"%c",&ch);
//     printf("%c",ch);
//     fscanf(fptr,"%c",&ch);
//     printf("%c",ch);
//     fclose(fptr);
//     return 0;
// }

// write a file

// # include <stdio.h>
// int main(){
//     FILE *fptr;
//     fptr=fopen("txt.txt","w");
//     char ch='A';
//     fprintf(fptr,"%c",ch);
//     fclose(fptr);
//     return 0;
// }

/////////////////////////////////////////////////////////////////////
// read & write a character

// # include <stdio.h>
// int main(){
//     FILE *fptr;
//     fptr=fopen("txt.txt","r");
//     printf("%c",fgetc(fptr));
//     fclose(fptr);
//     return 0;
// }

// # include <stdio.h>
// int main(){
//     FILE *fptr;
//     fptr=fopen("txt.txt","w");
//     fputc('A',fptr);
//     fclose(fptr);
//     return 0;
// }

/////////////////////////////////////////////////////////////////////
// EOF end of file
// in fgetc is returning EOF when it reaches the end of the file

// # include <stdio.h>
// int main(){
//     FILE *fptr;
//     fptr=fopen("txt.txt","r");
//     char ch;
//     while((ch=fgetc(fptr))!=EOF){
//         printf("%c",ch);
//     }
//     fclose(fptr);
//     return 0;
// }