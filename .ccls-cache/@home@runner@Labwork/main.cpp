#include <iostream>
using namespace std;

int main() {

    int n, m, sum = 0;

    cout << "Enter number n: ";
    cin >> n;
    cout << "Enter number m: ";
    cin >> m;

    cout << "Numbers that are multiples 4:\t";
    
    for(int i = m; i < n; i++)
    {
        if(i % 4 == 0)
        {
            sum += i;
        }
    }

    printf("\nSum of these numbers:\t%d\n", sum);
}