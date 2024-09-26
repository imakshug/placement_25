#include <iostream>

using namespace std;

int main(){

    int my_number[] = {4, 5, 6, 7, 8, 9, 3 };

    int i = 0;

    while(i< 7){
        if(i==3){
            //break;
            i++;
            cout<<"skip this one"<<endl;
            continue;
    
        }
        cout << "current number is:" << my_number[i] << endl;
        cout << "now print" <<endl;
        i++;
    }
    cout<<"outside"<< endl;

    return 0;
}