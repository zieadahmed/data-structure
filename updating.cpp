#include <iostream> 
using namespace std; 
int main() 
{ 
 int LA[] = { 1,3,5,7,8 }; 
 int k = 3, n = 5, item = 10; 
 int i, j; 
 //Updating element at position 3 (index =2) 
 cout << "The original array elements are :\n"; 
 for (i = 0; i < n;i++) 
 { 
  cout << "LA[" << i << "]=" << LA[i] << "\n"; 
 } 
 LA[k - 1] = item; 
 cout << "The array elements after update :\n"; 
 for (i = 0; i < n;i++) 
 { 
  cout << "LA[" << i << "]=" << LA[i] << "\n"; 
 } 
 getchar(); 
} 
