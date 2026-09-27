////  BEST CASE EARLY EXIT O(n) BUBBLE SORT   ////
////  Early Sprints for Data Structure Lesson ////
////         Handcoded by chipmaker 𖢥         ////
#include <stdio.h>
void bubble_sort(int *arr, int n);
int main(void){
  int arr[] = {72, 14, 56, 23, 89, 45, 11, 37};
  bubble_sort(arr, 8);
  for (int i = 0; i < 8; i++){
    printf("%d\n", arr[i]);
  }
}
void bubble_sort(int *arr, int n){
  int temp = 0;
  int flag = 0;
  for (int i = n-1; i >= 0; i--){  
    flag = 0;
    for (int j = 0; j < i; j++){ 
      if (*(arr + j) > *(arr + j + 1)){
        flag = 1;
        temp = *(arr + j);
        *(arr + j) = *(arr + j + 1);
        *(arr + j + 1) = temp;
      }
    }
    if (flag == 0) break;
  }
}
////         Handcoded by chipmaker 𖢥         ////
