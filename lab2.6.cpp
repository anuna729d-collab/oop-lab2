#include <iostream>

using namespace std;

int main()
{
    int a=125; //integer turliin huvisagchid 125 gsn utga onoj bn
    int *p = &a; //haygan huvisagchid a giin haygiig ogjin
    cout<<p<<endl; // a giin haygiin utgiig hevlene
    cout<<*p<<endl; // a giin utgiig hevlene
    p++; // pointerin hadgalsan haygiig 1 eer nemh buyu 4 bite
    cout<<p<<endl; // 1 eer nemsen haygiin hevlene
    cout<<*p<<endl;//uurchilsun haygand utga onoogogu uchir random too hevlene
    return 0;
}
