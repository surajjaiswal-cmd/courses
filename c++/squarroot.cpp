#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "enter number =";
    cin >> x;
    int ans = 0;
    for (int i = 0; i < x; i++)
    {
        if (i * i <= x)
        {
            ans = i;
        }
        else
            break;
    }
    cout << ans;

    return 0;
}
