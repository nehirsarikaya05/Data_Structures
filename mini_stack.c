////  MINI STACK WITH PUSH AND FREE FUNCTIONS   ////
////  Early Sprints for Data Structure Lesson ////
////         Handcoded by chipmaker 𖢥         ////
#include <stdio.h>
#include <stdlib.h>
struct Node{
  int data;
  struct Node *next;
};
typedef struct Node Node;
void print(Node *top);
void push(Node **top, int n);
void free_all(Node *top);
int is_empty(Node *top);
int main (void){
  Node *top = NULL;  
  push(&top, 8);
  push(&top, 9);
  push(&top, 11);
  print(top);
  free_all(top);
}
int is_empty(Node *top){
  if (top == NULL){
    return 1;
  }
  else return 0;
}
void push(Node **top, int n){
  Node *new = malloc(sizeof(Node));
  new -> data = n;
  new -> next = *top;
  *top = new;
}
void print(Node *top){
  Node *current = top;
  while (current != NULL){
    printf("%p  %d\n", current, current->data);
    current = current -> next;
  }
}
void free_all(Node *top){
  Node *current = top;
  while (current != NULL){
    Node *next = current->next;
    free(current);
    current = next;
  }
}
////         Handcoded by chipmaker 𖢥         ////
