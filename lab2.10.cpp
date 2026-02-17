#include <iostream>

using namespace std;
void time(int &h, int &m, int &s){
    if(s>=60){  //zaalt ashiglaj utgiig shuud uurchlunu
        m=m+s/60; // secund 60s ih bvl minutand shiljuln
        s=s%60;
    }
    if(m>=60){
        h=h+m/60; //min 60s ih bvl tsagt shiljuln
        m=m%60;
    }
}
int main()
{
    int h,m,s;
    cout << "enter h, m, s" << endl;
    cin >> h >> m >> s;
    time(h,m,s); //func duudna
    cout << "h=" << h<< " m="<< m << " s="<<s;
    return 0;
}
