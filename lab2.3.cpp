#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;
    if(n<=1){
        cout <<"bish" ; //n ni 1 ees baga bol anhnii too bish
        return 0;
    }
    int i=2;
    if(n==2){ //n ni 2 bol anhnii too
        cout << "mun" ;
        return 0;
    }else{
        while(i <=sqrt(n)){ // n toonii yzguur hurtl guij
            if(n % i==0){  // n toond huvaagddag too bga eshig shalgana
                cout << "bish" ;
                return 0;
            }else{
                i++;
            }
        }
    }
    cout << "mun" << endl;

    return 0;
}
