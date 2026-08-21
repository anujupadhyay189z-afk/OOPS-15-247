#include<iostream>
using namespace std;

class Point
{
private:
    int x;
    int y;

public:
    void input()
    {
        cout<<"Enter x:";
        cin>>x;

        cout<<"Enter y:";
        cin>>y;

    }
   

    void display()
    {
        cout << "Point(" << x << ", " << y << ")" << endl;
    }
};



int main(){
    Point p;
	
    p.input();
    p.display();

return 0;
}