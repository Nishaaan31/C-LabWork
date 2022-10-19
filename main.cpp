#include <iostream>

using namespace std;

int main()
{
    double height,weight;
    cout << "Enter Height in Cm:" << endl;
    cin >>height;
    cout << "Enter Weight in Kg:" << endl;
    cin >>weight;
    double cheight=height*0.393701;
    cout << cheight << " inch "<< endl;
    double cweight = weight*2.20462;
    cout << cweight << " pound "<<endl;
    return 0;
}
