#include <iostream>

using namespace std;

int main()
{
     int numbers[5]; // 5n buhel too hadgalah husnegt zarlana
     int * p; //pointer zarlana
     p = numbers; //zaagchid massiviin ehnii haygiig ogno
     *p = 10; //ehnii elementiin haygaar damjuulan 10 utga onoono
     p++; //daraagiin elementiin hayg ru shiljuulne
     *p = 20; // daragin elemented utga ogno
     p = &numbers[2]; //zaagchid massiviin 2dah indexiin haygiig ogno
     *p = 30; // haygt utga onoono
     p = numbers + 3;//numbers ni ehnii haygiig zaaj 3
                    //iig nemseneer 4dh elementiin haygig zaana
     *p = 40; // utga onoono
     p = numbers; // ehnii elementiin hayg
     *(p+4) = 50; //ehnii hayg der 4g nemj 5dah elementiin haygiig zaaj utga onoono
     for (int n=0; n<5; n++) //davtalt ashiglan hevlene
     cout << numbers[n] << ", ";
    return 0;
}
