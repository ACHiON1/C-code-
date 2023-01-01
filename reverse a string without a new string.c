#include<stdio.h>

//function to display array
void display(int array[], int length){
  for(int i=0; i<length; i++){
    printf("%d ",array[i]);
  }
  printf("\n"); 
}
 
int main(){
  /*
    *You can take input in array using loop and scanf
    *Here for simplicity, I have pre-initialized array
  */
  int array[] = {1, 2, 3, 4, 5};
  int temp, length = 5;

  int i=0;         //for pointing 1st element of the array
  int j=length-1;  //for pointing last element of the array

  //display original array
  printf("Original array:   ");
  display(array, length);


  while(i<j){
    //swap
    temp = array[i];
    array[i] = array[j];
    array[j] = temp;

    //update i and j
    i++;  
    j--;  
  }

  //display reversed array
  printf("Reverse of array: ");
  display(array, length);

  return 0;
}
