#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    long double d, l, v1, v2; cin>>d; cin>>l; cin>>v1; cin>>v2;
    long double time_alv = (l-d)/(v1+v2);
    cout<<setprecision(21)<<time_alv<<endl;
    return 0;
}