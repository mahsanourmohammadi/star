#include <iostream>

using namespace std;

int main()
{
    int number;

    //asking user for input
    cout<<" enter a number:";
    cin>> number;

    for (int i=1; i<= number; i++){
        for (int j=1 ;j<=i ;j++ ){
            cout<< "*";

        }
        cout << endl;
    }


    return 0;
}
