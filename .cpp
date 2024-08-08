#include<stdio.h>
#define CANDIDATE_COUNT
#define CANDIDATE1 "ABC"
#define CANDIDATE2 "XYZ"
#define CANDIDATE3 "PQR"
int votescount1=0, votescount2=0, votescount3=0;
void castvote(){
   int choice;
   printf("");
   printf("
 1. %s", CANDIDATE1);
   printf("
 2. %s", CANDIDATE2);
   printf("
 3. %s", CANDIDATE3);
   printf("
4. %s", “None of These");
   printf("
Input your choice (1 - 4) : “);
   scanf("%d",&choice);
   switch(choice){
      case 1: votescount1++; break;
      case 2: votescount2++; break;
      case 3: votescount3++; break;
      default: printf("
 Error: Wrong Choice !! Please retry");
      //hold the screen
      getchar();
   }
   printf(“
 thanks for vote !!");
}
void votesCount(){
   printf("

 ##### Voting Statics ####");
   printf("
 %s - %d ", CANDIDATE1, votescount1);
   printf("
 %s - %d ", CANDIDATE2, votescount2);
   printf("
 %s - %d ", CANDIDATE3, votescount3);
}
int main(){
   int i;
   int choice;
   do{
      printf("

 ###### Welcome to Election/Voting 2019 #####");
      printf("

 1. Cast the Vote");
      printf("
 2. Find Vote Count");
      printf("
 0. Exit");
      printf("
 Please enter your choice : ");
      scanf("%d", &choice);
      switch(choice){
         case 1: castvote();break;
         case 2: votesCount();break;
         default: printf("
 Error: Invalid Choice");
      }
   }while(choice!=0);
   //hold the screen
   getchar();
   return 0;
}
