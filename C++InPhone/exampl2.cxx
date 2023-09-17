#include <iostream> 
using namespace std;
int main ()
{
    char value;
    cout << "Enter Letter : ";
    cin >> value;
    if(isalpha(value))
    {
        //for Letter
        cout << value << " is a letter " << endl;
    }
    else if(isdigit(value))
    {
        // for number
        cout << value << " is a number " << endl;
    }
    else 
    {
        // for special character
        cout << value << " is a letter or a number" << endl;
    }
}