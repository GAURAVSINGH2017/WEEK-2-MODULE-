 #include<stdio.h>
int main(){
  int n,x,i;
  int found = 0; //flag to track if the element is found
  
  //-----INPUT THE NUMBER OF STUDENTS-----
  printf("enter the number of students:");
  scanf("%d",&n);
  int roll_numbers[n];

  //-----INPUT THE N ROLL NUMBERS-----
  printf("\nenter the roll numbers of the students:");
  for(i=0;i<n;i++){
    scanf("%d",&roll_numbers[i]);
  }

  //-----INPUT THE ROLL NUMBERS TO BE SEARCH-----
  printf("\nenter the roll number to be search:");
  scanf("%d",&x);

  //-----LINEAR SEARCH LOGIC-----

  for(i=0;i<n;i++){
    if(roll_numbers[i]==x){
      printf("FOUND AT INDEX %d\n",i);
      found =1; //set flag to true 
      break; //exit loop early since 
    }
  }

  //IF THE LOOP FINISHED AND THE ELEMENT WAS NOT FOUND 
  if(found==0){
    printf("NOT FOUND\n");
  }
  return 0;
}