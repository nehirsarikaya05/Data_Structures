#include <stdio.h>
#define SIZE 150  
void make_binary(int num);
int main (void){
  int input = 0;
  printf("Enter a positive decimal number: ");
  scanf("%d", &input);
  make_binary(input);
}
void make_binary(int num){
  int arr[SIZE] = {0};
  int remainder = 0;
  int count = 0;
  if (num != 0){
    while(num > 0){
      remainder = num % 2;
      num /= 2;
      arr[count] = remainder;
      count++;
    }
  }
  else{
    printf("0\n");
  }
  arr[count] = -1;
  printf("Binary version ");
  for (int i = count - 1; i >= 0; i--){
      printf("%d", arr[i]);
  }
  printf("\n");
}
