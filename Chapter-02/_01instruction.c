// instructions
/*
1.declaration
2.arithmetic
3.conditional
*/
///////////////////////////////////////////////////////////
// declaration

//  # include <stdio.h>
//  int main(){
//     int oldAge=22;
//     int newAge=oldAge+Year; //year is not defined
//     int Year=2;
//     printf("%d",newAge);
//     return 0;
//  }

///////////////////////////////////////////////////////////
// arithmetic
// => +,-,*,/,%
// % moduler operator

////////////////////////////////////////////////////////////
//type conversion
/*
int to int => int
int to float => float   
float to int => int 
float to float => float
*/
//  # include <stdio.h>
//  int main(){
//     int a=10;
//     float b=5.0;
//     printf("%d\n",a+a); // => int
//     printf("%f\n",b+b); // => float
//     printf("%f\n",a+b); // => float
//     printf("%f\n",b+a); // => int
//     return 0;
//  }


// example
// # include <stdio.h>
// int  main(){
//     int a=1.999999;  // converting to int
//     printf("%d",a);
//     return 0;
// }

// example
// # include <stdio.h>
// int  main(){
//     float a=1;  // converting to float
//     printf("%f",a);
//     return 0;
// }

////////////////////////////////////////////////////////////

// operator precedence
/*
1.*,/,%
2.+,-
3.=
*/

// example
// # include <stdio.h>
// int  main(){
//     int a=1+2*3;  // 2*3=6, 1+6=7
//     printf("%d",a);
//     return 0;
// }

// example
// # include <stdio.h>
// int  main(){
//     int a=4*3/6*2;  // associtivity lHS 4*3=12, 12/6=2, 2*2=4
//     printf("%d",a);
//     return 0;
// }

// # include <stdio.h>
// int  main(){
//     int a=5*2-2*3; // 5*2=10, 2*3=6, 10-6=4 
//     printf("%d",a);
//     return 0;
// }

// # include <stdio.h>
// int  main(){
//     int a=5*2/2*3;  // LHS 5*2=10, 10/2=5, 5*3=15
//     printf("%d",a);
//     return 0;
// }

// # include <stdio.h>
// int  main(){
//     int a=5*(2/2)*3;  // 5*(1)*3 5*1=5, 5*3=15
//     printf("%d",a);
//     return 0;
// }

// # include <stdio.h>
// int  main(){
//     int a=5+2/2*3;  // 5+((2/2)*3)  5+1*3 5+3=8
//     printf("%d",a);
//     return 0;
// }

//////////////////////////////////////////////////////////////

// control instructions
/*
1. sequence control => code run line by line
2. decision control => if else 
3. loop control => for while do-while
4. case control => switch
*/

//////////////////////////////////////////////////////////////
//operators
/*
1.arithmetic => +,-,*,/
2.relation => <,>,<=,>=,==,!=
3.logical => &&,||,!
4.bitwise => &,|,^,<<,>>
5.assignment => =,+=,-=,*=,/=
6.ternary => ? :
*/

// operator precedence
/*
1. !
2. *,/,%
3. +,-
4.<,>,<=,>=,
5.==,!=
6.&&
7.||
8.=
*/