#include <iostream>
using namespace std;
 
// Swap using references in C++
void swap(int &x, int &y)
{
    // return if both variables' data is the same, as we can't check for the
    // address of a reference
    if (x == y) {
        return;
    }
 
    x = x + y;          // Note: overflow might happen
    y = x - y;
    x = x - y;
}
 
int main()
{
    int x = 3, y = 4;
    swap(x, y);
 
    cout << x << " " << y;
 
    return 0;
}
