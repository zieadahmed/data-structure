#include <iostream> 
#include <conio.h> 
using namespace std; 
int main() 
{  
 int LA[] = { 1, 3, 5, 7, 8 };  
 int item = 10, k = 3, n = 5;  
 int i = 0, j = n-1;  
 //Adding an element at position 4 (index =3) 
 cout << "The original array elements are"<<"\n";  
 for (i = 0; i<n; i++) 
 { 
  cout << "\nLA[" << i << "] =" << LA[i]; 
 }  
 n = n + 1;  
 while (j >= k)  
 {  
  LA[j + 1] = LA[j];  
  j = j - 1; 
 }  
 LA[k] = item;  
 cout << "\nThe array elements after insertion :\n";  
 for (i = 0; i<n; i++) 
 {  
  cout << "\nLA[" << i << "] = " << LA[i];  
 }  
 _getch(); 
 return(0); 
} 
