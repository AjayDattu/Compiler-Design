
#include <stdio.h>

int main() {
    
 char express[5]="a*b";
  printf("  _______\n");
  printf(" /       \\\n");
  printf("|         |\n");
  printf("|   O O   |\n");
  printf("|    ∆    |\n");
  printf(" \\_______/\n");
 printf("it will accept expression is a*b");
 int i=0;
 int j=0;
 int count=0;
 int size;
 printf("\n enter the size of the string");
 scanf("%d",&size);
 char test[size];
 scanf("%s",test);
 while(i<size)
 {
  if(test[j]=='a')
  {
   	count++;
   	j++;
  }	
  else if(test[j]=='b')
  {
  	count++;
  	j++;
  	break;
  }
  i++;
 }

 if(count==size)
 {
  printf("\nstring accepted");
 }
 else
 {
 	printf("\nnot accepted");
 }

    return 0;
}
