////  IN-PLACE MAX POINTER — O(n), NO MALLOC  ////
////  Early Sprints for Data Structure Lesson ////
////         Handcoded by chipmaker 𖢥         ////
#include <stdio.h>
#include <stdlib.h>
int *find_max(int *arr, int n);
int main(void){
  int arr[] = {3, 14, 17, 9, 21, 6, 19};
  int *ptr = find_max(arr, 7);
  printf("%d\n", *ptr);
}
int *find_max(int *arr, int n){
  int *ind = arr;
  int *end = arr + n;
  while ( ind != end){
    if (*arr < *ind){
      arr = ind;
    }
    ind++;
  }
  return arr;
}
////         Handcoded by chipmaker 𖢥         ////
