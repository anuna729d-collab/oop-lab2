#include <iostream>

using namespace std;

void scan(int arr[], int n){
    cout <<"utga oruul:" << endl;
    for(int i=0; i<n; i++){
        cout <<i+1<< ". ";
        cin >> arr[i];
    }
}   //davtalt ashiglan garaas utga avah bolon hevleh
    //hereglegchiin function
void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] <<" ";
    }
}
int main()
{
    int n, temp;
    cout << "enter n: ";
    cin >> n;
    int arr[n]; //n hemjese array uusgene
    int max, index;
    scan(arr,n); //garas utga avah function duudna
    for(int i=0; i<n-1; i++){
        temp=arr[i];
        max=arr[i];// selection sort ashiglan
        index=i;   // buurhar erembelne
        for(int j=i+1; j<n; j++){
           if(arr[j]>max){
                max=arr[j];
                index=j;
           }
        }
        arr[i]= max;
        arr[index]=temp;
    }
    cout <<"buurah: " << endl;
    print(arr,n); //erembelsen arr hevlene

    cout<< endl<<"osoh: " << endl;
    for(int i=n-1; i>=0; i--){ // buurhaa esergeern hevlene
        cout << arr[i] << " ";
    }

    return 0;
}
