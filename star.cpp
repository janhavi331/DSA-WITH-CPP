// C++ program to print diamond shape
// with 2n-1 rows 
#include <bits/stdc++.h>
using namespace std;
 
// Prints diamond pattern with 2n-1 rows 
void printDiamond(int n) 
{ 
    int space = n - 1; 
 
    // run loop (parent loop) 
    // till number of rows 
    for (int i = 0; i < n; i++) 
    { 
        // loop for initially space, 
        // before star printing 
        for (int j = 0;j < space; j++) 
            cout << " "; 
 
        // Print i+1 stars 
        for (int j = 0; j <= i; j++) 
            cout << "* "; 
 
        cout << endl; 
        space--; 
    } 
 
    // Repeat again in reverse order 
    space = 0; 
 
    // run loop (parent loop) 
    // till number of rows 
    for (int i = n-1; i > 0; i--) 
    { 
        // loop for initially space, 
        // before star printing 
        for (int j = 0; j < space; j++) 
            cout << " "; 
 
        // Print i stars 
        for (int j = 0;j < i;j++) 
            cout << " *";
 
        cout << endl;
        space++; 
    } 
} 
 
// Driver code 
int main() 
{ 
    printDiamond(5); 
    return 0; 
} 
 
// This is code is contributed
// by rathbhupendra