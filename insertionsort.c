#include<stdio.h>
int main(){
  int n,i,j,key;

  printf("enter the total number of books:"); //enter total number of books
  scanf("%d",&n);

  int books[n]; // creating array of name books
  for(i=0;i<n;i++){
    scanf("%d",&books[i]);
  }

  // Insertion sort logic 

  for(i=1;i<n;i++){
    key=books[i]; // current book to be inserted 
    j=i-1;
    
    while(j>=0 && books[j]>key){
      books[j+1]=books[j];
      j--;
    }
    books[j+1]=key;
  }

  for(i=0;i<n;i++){
    printf("%d",books[i]);
    if(i<n-1){
      printf(" ");
    }
  }
  printf("\n");
  return 0;
}