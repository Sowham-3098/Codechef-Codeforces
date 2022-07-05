#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char x;
        cin >> x;

        if (x == 'b' || x == 'B')
        {
            cout << "BattleShip" << endl;
        }
        else if (x == 'C' || x == 'c')
        {
            cout << "Cruiser" << endl;
        }
        else if (x == 'D' || x == 'd')
        {
            cout << "Destroyer" << endl;
        }
        else if (x == 'F' || x == 'f')
        {
            cout << "Frigate" << endl;
        }
    }
    return 0;
}