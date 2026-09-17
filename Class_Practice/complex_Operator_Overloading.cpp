#include <bits/stdc++.h>
using namespace std;

class Comp {
    int real, img;

public:
    Comp(int r = 0, int i = 0) {
        real = r;
        img = i;
    }

    friend Comp operator+(Comp c, Comp d);
};

Comp operator+(Comp c, Comp d)
{
    return Comp(c.real + d.real, c.img + d.img);
}