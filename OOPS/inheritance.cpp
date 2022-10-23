#include <iostream>
using namespace std;

class Student
{
    int roll;

public:
    void getroll()
    {
        cin >> roll;
    }
    void putroll()
    {
        cout << roll << endl;
    }
};
class marks : public Student
{
protected:
    int s1, s2;

public:
    void getmarks()
    {
        cin >> s1 >> s2;
    }
    void putmarks()
    {
        cout << s1 << " " << s2 << endl;
    }
};

class score
{
protected:
    int p;

public:
    void getscore()
    {
        cin >> p;
    }
    void putscore()
    {
        cout << p << endl;
    }
};
class result : public marks, public score
{
protected:
    int r;

public:
    void display()
    {
        int total = s1 + s2 + p;
        cout << total << endl;
        putroll();
        putmarks();
        putscore();
    }
};

int main()
{
    result R;
    R.getroll();
    R.getmarks();
    R.getscore();
    R.display();
}