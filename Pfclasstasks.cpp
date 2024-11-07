#include <iostream>
#include <string>
using namespace std;

int main()
{

    string names[] = {"Johnny", "Samad", "Amar"};
    int rollno[] = {1, 2, 3};
    for (int i = 0; i < 3; i++)
    {
        cout << "Name of Student is " << names[i] << " Having roll no " << rollno[i] << "\n";
    }
    return 0;
}