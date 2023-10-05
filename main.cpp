#include <iostream>
using namespace std;

int main() {
    
    bool key = false;
    
    first_error: 
    if(key == true)
    {
        cout << "Error, it must be a natural number\n";
        key = false;
    }
    
    int n, m, sum = 0;

    cout << "Enter number n: ";
    cin >> n;
    cout << "Enter number m: ";
    cin >> m;
    
    if (n <= 0 || m <= 0)
    {
        key = true;
        goto first_error;
    }

    for(int i = m; i < n; i++)
    {
        if(i % 4 == 0)
        {
            sum += i;
        }
    }

    printf("\nSum of these numbers:\t%d\n", sum);
}