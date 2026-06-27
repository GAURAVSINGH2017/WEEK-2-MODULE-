#include<stdio.h>
int main(){
  int n,i,j,temp;

  //read the number of elements
  printf("enter the number of subjects of the student:");
  scanf("%d",&n);

  //create array
  int scores[n];

  //Read the array elements 
  for(i=0;i<n;i++){
    scanf("%d",&scores[i]);
  }

  //Bubble sort algorithms
  for(i=0;i<n-1;i++){
    for(j=0;j<n-i-1;j++){
      if(scores[j]>scores[j+1]){
        temp=scores[j];
        scores[j]=scores[j+1];
        scores[j+1]=temp;
      }
    }
  }

  //print the sorted array
  for(i=0;i<n;i++){
    printf("%d",scores[i]);
    if(i<n-1){
      printf(" ");
    }
  }
  printf("\n");
  return 0;

}