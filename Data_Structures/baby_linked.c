////  FIRST LINKED LIST — NO LEAKS, NO WILD POINTERS  ////
////  Early Sprints for Data Structure Lesson  ////
////         Handcoded by chipmaker 𖢥          ////
#include <stdio.h>
#include <stdlib.h>
struct Node{
  int data;
  struct Node *next;
};
typedef struct Node Node;
int main(void){
  Node *head = NULL;
  Node *n1 = malloc(sizeof(Node));
  Node *n2 = malloc(sizeof(Node));
  n1 -> data = 10;
  n1 -> next = n2;
  n2 -> data = 20;
  n2 -> next = NULL;
  head = n1;
  while (head != NULL){
    printf("%d ", head->data);
    head = head -> next;
  }
  printf("\n");
  free(n1);
  free(n2);
}
////         Handcoded by chipmaker 𖢥          ////
