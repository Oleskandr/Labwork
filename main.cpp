#include <iostream>
using namespace std;

int main() {
    
    bool key = false;
    
    second_error:
    if(key == true)
    {
        cout << "Error, number n should be bigger then number m\n";
        key = false;
    }

    int n, m, sum = 0;

    cout << "Enter number n: ";
    cin >> n;
    cout << "Enter number m: ";
    cin >> m;

    if (n <= m)
    {
        key = true;
        goto second_error;
    }

    for(int i = m; i < n; i++)
    {
        if(i % 4 == 0)
        {
            sum += i;
        }
    }

    printf("\nSum of these numbers:\t%d\n", sum);
    cout << "End program!" << endl;
}