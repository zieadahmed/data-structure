#include <iostream> 
using namespace std; 
struct node { 
  int data; 
  int key; 
  struct node *next; 
}; 
 struct node *head = NULL; 
 struct node *current = NULL; 
 
 void insertFirst(int key, int data) { 
  struct node *link = (struct node*) malloc(sizeof(struct node)); 
  link->key = key; 
  link->data = data; 
  link->next = head; 
  head = link;  
 } 
void printList()  
 {  
  struct node *ptr = head;  
  cout << "\n[ ";  
  while (ptr != NULL) { 
   cout << ptr->key << ", " << ptr->data << "\t"; 
   ptr = ptr->next;  
  } 
  cout << " ]";  
 } 
 struct node* deleteFirst()  
 {  
  struct node *tempLink = head;  
  head = head->next;  
  return tempLink;  
 } 
 bool isEmpty()  
 {  
  return head == NULL; 
 } 
 int length()  
 { 
  int length = 0; 
  struct node *current; 
  for (current = head; current != NULL; current = current->next)  
  { 
   length++;  
  } 
  return length; 
 }
 struct node* find(int key)  
 {  
  struct node* current = head;  
  if (head == NULL)  
  {  
   return NULL;  
  } 
  while (current->key != key)  
  {  
   if (current->next == NULL)  
   { 
    return NULL;   
   } 
   else { 
    current = current->next;   
   }  
  } 
  return current;  
 } 
  struct node* delet(int key)  
 {  
  struct node* current = head;  
  struct node* previous = NULL; 
  if (head == NULL)  
  {  
   return NULL; 
  } 
  while (current->key != key)  
  {  
   if (current->next == NULL)  
   {  
    return NULL;   
   } 
   else  
   { 
    previous = current;  
    current = current->next;   
   }  
  } 
   // Delete 
  if (current == head)  
  {  
    head = head->next;  
  } 
  else  
  { 
    previous->next = current->next;  
  } 
   return current; 
 }
 void sort()  
 { 
  int i, j, k, tempKey, tempData; 
  struct node *current; 
  struct node *next; 
  int size = length(); 
  k = size; 
 
  for (i = 0; i < size - 1; i++, k--)  
  { 
   current = head; 
   next = head->next; 
   for (j = 1; j < k; j++)  
   { 
    if (current->data > next->data)  
    { 
     tempData = current->data; 
     current->data = next->data; 
     next->data = tempData; 
     tempKey = current->key; 
     current->key = next->key; 
     next->key = tempKey;   
    } 
    current = current->next; 
    next = next->next;  
   } 
  } 
 }