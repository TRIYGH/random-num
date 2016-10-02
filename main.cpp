#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    cout << "This generates random numbers" << endl;
    time_t seconds;
    int baseSeconds;
    char enter;

    seconds = time (NULL);
    baseSeconds = seconds;

    srand(seconds);

    for ( int x = 0; x < 15000; x++)
       {
            int die = (rand() % 6) + 1;
            seconds = time(NULL);
            cout << die << "   :" << seconds - baseSeconds << endl;
            //cin >> enter;
        }

    return 0;
}
