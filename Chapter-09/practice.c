// # include <stdio.h>
// struct address{
//     int house_no;
//     int block_no;
//     char city[100];
//     char state[100];
// };
// void printaddress(struct address add);
// int main(){
//     struct address add[5];
//     for(int i=0;i<5;i++){
//             printf("Enter the house no: ");
//     scanf("%d",&add[i].house_no);
//     printf("Enter the block no: ");
//     scanf("%d",&add[i].block_no);
//     printf("Enter the city: ");
//     scanf("%s",add[i].city);
//     printf("Enter the state: ");
//     scanf("%s",add[i].state);
//     }
//     for (int i = 0; i < 5; i++)
//     {
//        printaddress(add[i]);
//     }   
//     return 0;
// }
// void printaddress(struct address add){
//     printf("the address is %d %d %s %s\n",add.house_no,add.block_no,add.city,add.state);
// }

//////////////////////////////////////////////////////////////////////
//  create a structure to store complex number use arrow operator
// # include <stdio.h>

// struct complex{
//     int a;
//     int b;
// };
// int main(){
//     struct complex c1={3,4};
//     printf("%d,%d",c1.a,c1.b);
//     return 0;
// }

////////////////////////////////////////////////////////////////////
// make a structure to store bank account information of a customer of abc .also make an alias for it

// # include <stdio.h>
// # include <string.h>

// typedef struct bankInformation{
//     char name[100];
//     int acc_no;
//     float balance;
// } bank ;
// int main(){
//     bank b1;
//     strcpy(b1.name,"shafi");
//     b1.acc_no=1;
//     b1.balance=100.0;
//     printf("name is %s\n acc number is %d\n balance is %f",b1.name,b1.acc_no,b1.balance);
//     return 0;
// }
