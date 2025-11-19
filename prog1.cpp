#include <iostream>
using namespace std;
class Timeconverter
{
public:
    int totalsec;
    int hour, minute, sec;


    void convert()
    {
        cout << "Enter Total Seconds : ";
        cin >> totalsec;
        hour = totalsec / 3600;
        minute = (totalsec % 3600) / 60;
        sec = totalsec % 60;
    }
    void display()
    {
        cout << "Time in hh:mm:ss format: ";
        cout << hour << ":";
        cout << minute << ":";
        cout << sec;
    }
};

int main()
{

    Timeconverter t;
    t.convert();
    t.display();

    return 0;
}