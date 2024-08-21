#include <iostream> 
#include "TOH.h" 
using namespace std;
int main()
{
    TOH s;
    int Disks;
    cout <<
        "==============================================================" <<
        endl;
    cout << " !****Tower Of Hanoi****! " <<
        endl;
    cout <<
        "==============================================================" <<
        endl;
    cout << "Enter number of disks : ";
    cin >> Disks;
    s.set_disks(Disks);
    s.check();
    while (s.check() == 0 || s.check() == 1)
    {
        if (s.check() == 0)
        {
            cout << "Do you really wants to solve without using  disks ? " << endl;
            cout << "Enter number of disks : ";
            cin >> Disks;
            s.set_disks(Disks);
        }
        else if (s.check() == 1)
        {
            cout << "why are you using -ve number of the disks ?"
                << endl <<
                "Please try again " << endl;
            cout << "Enter number of disks : ";
            cin >> Disks;
            s.set_disks(Disks);
        }
    }
    cout << "solving methods, please follow the instructions bellow" <<
        endl;
    s.TowerOfHanoi(s.get_disks(), 'A', 'C', 'B');
    cout << "Number of moves is : " << s.NumberOfMoves();
}