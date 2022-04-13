// Ravi Kumar Roll no.-202115
#include<iostream>
#include<conio.h>

using namespace std;

inline int square(int x);

int main() {
   int a = 65, b = 57;
   cout << "Simple Inline Function Example Program in C++\n";

   cout << "\nSquare value for " << a << " is          :" << square(a);
   cout << "\nSquare value for " << b << " is          :" << square(b);

   getch();
}

// Inline square function
inline int square(int x) {
   return (x * x);
}
