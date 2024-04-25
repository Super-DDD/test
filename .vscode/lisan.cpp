#include <iostream>


int main()
    {
    using namespace std;
 
    string s="XINGDONGZAIZIYE";
    //task1
    for(int i=0;i<15;i++){
        cout << s[i]<<"   " ;
 
    }
    cout<<endl;

    for(int i=0;i<15;i++){
       char cur = 'A' + (s[i] - 'A' + 3) % 26;
        cout << cur <<"   " ;
    }
       cout<<endl;

    for(int i=0;i<15;i++){
       char cur = 'A' + (s[i] - 'A' )*7 % 26;
        cout << cur <<"   " ;
    }
    

return 0;
    }

