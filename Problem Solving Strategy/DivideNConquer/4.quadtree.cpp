#include <iostream>
#include <string>
using namespace std;

string reverse(string::iterator& it){
    char head = *it;

    ++it;

    if(head == 'b' || head == 'w')
        return string(1,head);

    string upperLeft = reverse(it);
    string upperRight = reverse(it);
    string lowerLeft = reverse(it);
    string lowerRight = reverse(it);

    return string("x") + lowerLeft + lowerRight + upperLeft + upperRight;
}

void main(){

    string terrain = "xbwxwbbwb";
    string::iterator iter = terrain.begin();

    cout<<reverse(iter)<<endl;

    system("pause");
}