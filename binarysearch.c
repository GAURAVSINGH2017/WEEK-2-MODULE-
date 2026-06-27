#include<stdio.h>
int main(){
  int n,target;

  //read the number of products
  printf("enter the number of products:");
  scanf("%d",&n);

  int arr[n];
  //read the sorted product id

  printf("enter the number of products id:");
  
  for(int i=0;i<n;i++){
    scanf("%d", &arr[i]);
  }

  //read the target product id to find

  printf("enter the id of the product to be searched:");
  scanf("%d",&target);

  int low=0; // lower element index in array of sorted products
  int high=n-1; // higher element index in array of sorted products
  int found =0; //flag to track if product is found

  //Binary search loop
    while(low<=high){
      int mid=low+(high-low)/2;

      if(arr[mid]==target){
        found=1; //product found
        break;   //exit the loop immediately
      }
      else if(arr[mid]<target){
        low=mid+1; //search in the right half 
      }
      else{
        high=mid-1; //search in the left half
      }
    }
  
  //print the result based on the found flag
  if(found==1){
    printf("product Available\n");
  }
  else{
    printf("product not available\n");
  }
  return 0;
}