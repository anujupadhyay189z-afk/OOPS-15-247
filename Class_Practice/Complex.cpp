#include<bits/stdc++.h>
using namespace std;

class Comp{
    int real,img;
    public:

    Comp (int r=0 , int i=0):
    real{r} , img{i} {}
    void show(){
        cout<<real<<","<<img<<endl;
    }
};
int main(){
    Comp c1(5,10);
    Comp c2;
    c1.show();
    c2.show();
}




