#include <iostream>
using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;
    // Write your code here
    unsigned long long lhs = (a + b) * (a + b) * (a + b);
    unsigned long long rhs = (a * a * a) + (b * b * b) + (3 * a * b * b) + (3 * a * a * b);
    cout << lhs << endl;
    cout << rhs << endl;
    if (lhs == rhs)
        cout << "VERIFIED" << endl;
    else
        cout << "NOT VERIFIED" << endl;
        return 0;
}
