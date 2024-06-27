// pointer is store the address of variable

// syntax
/*
int age=24;
int *ptr=&age;
int_age=*ptr; // => _age=24;
*/

// example
//  # include <stdio.h>
//  int main(){
//     int age=24;
//     int *ptr=&age;
//     int _age=*ptr;
//     printf("%d\n",age);
//     printf("%d\n",*ptr);
//     printf("%d\n",_age);
//     return 0;
//  }

//////////////////////////////////////////////////////////////////
// decleration of pointer

/*
int *ptr;
float *ptr;
char *ptr;
*/

////////////////////////////////////////////////////////////////
// format spicefier
// %u => unsigned integer
// %d => integer
// %f => float
// %c => character
// %s => string
// %p => pointer
/*
printf("%p",&age);
printf("%p",ptr);
printf("%p",&ptr);
*/

// example
// address
// # include <stdio.h>
// int main(){
//     int age=24;
//     int *ptr=&age;
// // %p => pointer
//     printf("%p\n",&age);
//     printf("%p\n",ptr);
//     printf("%p\n",&ptr);

// // %u => unsigned integer
//     printf("%u\n",&age);
//     printf("%u\n",ptr);
//     printf("%u\n",&ptr);
//     return 0;
// }

//////////////////////////////////////////////////////////////////

// values
// # include <stdio.h>
// int main(){
//     int age =24;
//     int *ptr=&age;
//     printf("%d\n",age);
//     printf("%d\n",*ptr);
//     printf("%d\n",*(&age));
//     return 0;
// }

//////////////////////////////////////////////////////////////////
