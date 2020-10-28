//    1
//   2 3
//  4 5 6
// 7 8 9 10


#include <bits/stdc++.h> 
using namespace std; 
  
// Function to demonstrate printing pattern 
void triangle(int n) 
{ 
    // number of spaces 
    int k = 2 * n - 2; 
  
    // character to be printed 
    int ch = 1; 
  
    // outer loop to handle number of rows 
    // n in this case 
    for (int i = 0; i < n; i++) { 
  
        // inner loop to handle number spaces 
        // values changing acc. to requirement 
        for (int j = 0; j < k; j++) 
            cout << " "; 
  
        // decrementing k after each loop 
        k = k - 1; 
  
        // inner loop to handle number of columns 
        // values changing acc. to outer loop 
        for (int j = 0; j <= i; j++) { 
            // printing stars 
            cout << ch++ << " "; 
        } 
  
        // ending line after each row 
        cout << endl; 
    } 
} 
  
// Function to find the max height 
// or the number of lines 
// in the triangle pattern 
int maxHeight(int n) 
{ 
    return (((int)sqrt(1 + 8.0 * n)) - 1) / 2; 
} 
  
// Driver Function 
int main() 
{ 
    int N = 9; 
    triangle(maxHeight(N)); 
    return 0; 
} 