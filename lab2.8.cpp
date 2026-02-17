#include <iostream>

using namespace std;
void swap(int *a, int *b){
    int temp=*a;
    *a=*b;// haygaar damjuulan utgiig solino
    *b=temp;
}
int main()
{
    int x,y;
    cin >> x >> y;
    swap(&x,&y); //hereglegchin func duudna
    cout << "x="<<x<<"y"<<y;
    return 0;
}
