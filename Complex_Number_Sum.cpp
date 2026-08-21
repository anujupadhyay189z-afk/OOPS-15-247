#include<bits/stdc++.h>
using namespace std;

class Complex {
    private:
    int real, img;

    public:
    void input(){
        cout<<"Enter  real number:";
        cin>>real;
        cout<<"Enter  imaginary number:";
        cin>>img;
   
    }

    void show(){
        cout<<real;

        if(img>=0)
        cout<<"+"<<img<<"i"<<endl;

        else
        cout<<img<<"i";
    }

    void sum(Complex c1, Complex c2){
       real=c1.real+c2.real;
       img=c1.img+c2.img;
    }
};

int main() {
     Complex c1, c2, c3;

      c1.input();
      c2.input();
      c1.show();
      c2.show();
      c3.sum(c1, c2);
      c3.show();

    return 0;
}
