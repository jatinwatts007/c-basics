#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class threeNumbers{
  int first, second, third;
  public:
  threeNumbers(int t1, int t2, int t3){
    first = t1;
    second = t2;
    third = t3;
  }
  void _3largest();
};

//Complete the function below
void threeNumbers::_3largest(){
  //Write your code below
    int flag = -1, i = 0, j = 0, fir, sec, thrd, m1, m2, max1[100],maxpos,pos;
    if (first < 9 && second < 9 && third < 9) {
        max1[0] = first;
        max1[1] = second;
        max1[2] = third;
        flag = 0;
    }
    else
    {
        if (first > second&& first > third) {
            m1 = first;
            if (second > third)
                m2 = second;
            else
                m2 = third;
        }
        else if (second > third&& second > first) {
            m1 = second;
            if (third > first)
                m2 = third;
            else
                m2 = first;
        }
        else {
            m1 = third;
            if (first > second)
                m2 = first;
            else
                m2 = second;
        }
    }
    fir = sec = thrd = 0;
    if (flag == 0) {
        for (i = 0; i < 3; i++)
            if (max1[i] > first)
                fir = max1[i];
        for (i = 0; i < 3; i++)
            if (max1[i] > sec&& max1[i] != fir)
                sec = max1[i];
        for (i = 0; i < 3; i++)
            if (max1[i] > thrd&& max1[i] < sec)
                thrd = max1[i];
        cout << fir << " " << sec << " " << thrd;
    }
    else {
        while (m1 > 0) {
            max1[j++] = m1 % 10;
            m1 = m1 / 10;
        }
        while (m2 > 0) {
            max1[j++] = m2 % 10;
            m2 = m2 / 10;
        }
        for (i = 0; i < j; i++)
            if (max1[i] > fir) {
                fir = max1[i];  // find max ki position and remove max position from next second and thrd comparison
                maxpos = i;
            }
        for (i = 0; i < j; i++)
            if (max1[i] > sec&& i != maxpos) {
                sec = max1[i];
                pos = i;
            }
        for (i = 0; i < j; i++)
            if (max1[i] > thrd && i != pos && i != maxpos)
                thrd = max1[i];
        cout << fir << " " << sec << " " << thrd;
    }
}

int main() {
    int first, second, third;
    cin>>first>>second>>third;
    threeNumbers _1(first, second, third);
    _1._3largest();
    return 0;
}
