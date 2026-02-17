#include <iostream>
#include <stdio.h>
using namespace std;

int find_area(int a, int  b){ //talbai oloh hereglegchiin punkts
    return a*b; // urjveriig butsaana
}
int main()
{   //bodlogo 2
    int x,y,s; // integer torliin huvisagch zarlana
    cout << "urt bolon orgoniig oruul: ";
    cin >> x >> y; // x bolon y huvisagchid garas utga onoono

    s=find_area(x,y); //hereglegchiin punkts duudaj s-d talbain utga onoono
    cout << "talbai: " << s << endl; // hariug hevlene
    return 0;
}
