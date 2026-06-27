#include<stdio.h>
int main(){
  int n;

  //Read the number of players
  printf("Enter the number of players:");
  scanf("%d",&n);

  int scores[n]; //creating array of name scores
  printf("enter the scores of the players:");

  //read the scores into an array
  for(int i=0;i<n;i++){
    scanf("%d",&scores[i]);
  }

  //selection sort algorithm 

  for(int i=0;i<n-1;i++){
    int min_index=i; // assume current position holds minimum value

    // find the actual smallest element in the remaining unsorted part
    for(int j=i+1;j<n;j++){
      if(scores[j]<scores[min_index]){
        min_index=j; // update index if a smaller element is found 
      }
    }

    //swap the found minimum element with the element at index  i 

    int temp=scores[min_index];
    scores[min_index]=scores[i];
    scores[i]=temp;
  }

  //print the sorted scores

  for(int i=0;i<n;i++){
    printf("%d",scores[i]);
    if(i<n-1){
      printf(" ");
    }
  }

  printf("\n");
  return 0;
}