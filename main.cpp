#include <iostream>

using namespace std;
class Om
{
protected:
    string nume;
    int varsta;

public:
    Om()
    {
        nume="None";
        varsta = 0;
    }
    Om(string n, int v)
    {
        nume = n;
        varsta = v;
    }
    void afisare()
    {
        cout<<"Nume: "<<nume<<" "<<"Varsta: "<<varsta<<" "<<endl;
    }
};
class Student: public Om
{
protected:
    int credite;
public:
    Student()
    {
        nume="None";
        varsta=0;
        credite=-1;
    }
    Student(string n,int v,int c)
    {
        nume = n;
        varsta = v;
        credite = c;
    }
    void afisare()
    {
        cout<<"Nume: "<<nume<<" "<<"Varsta: "<<varsta<<" "<<"Credite: "<<credite<<endl;
    }
};
int main()
{
    /// Trebuie sa stocam 2 oameni si 1 student intr-un vector , cum facem?
    return 0;
}
