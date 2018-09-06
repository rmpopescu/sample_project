#include <stdio.h>

int main(){

  int i = 2; // first prime number
  int num = 1; //number counter

  //while loop prints first 20 prime numbers
  while (num <= 20){
    int val = 0;
    // if i is divisible by any numbers val >1
    for (int j = 2;j < i; j++){
      if (i % j == 0){
	val++;
      }
      
    }
    //only numbers that are not divisible by any number are printed
    if (val == 0){
      printf("%i",i);
      printf("\n");
      num++;
    }
    i++;
  }
  return 0;
}
