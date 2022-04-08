#include <iostream>
#include <string>

using namespace std;

class Sandwich
{
public:

    Sandwich()
    {
        cout << "constructor\n";
    }

    Sandwich(string name, float price) : name(name), price(price), isHot(false)
    {
        cout << "constructor\n";
        //this->name = name;
        //this->price = price;
    }

    ~Sandwich()
    {
        cout << "destructor\n";
    }

    void Read()
    {
        cout << "Enter Name: ";
        cin >> name;
    }
    void Write();

private:
    string name;
    float price;
    bool isHot;
};

void Sandwich::Write()
{
    cout << "Name: " << name << endl;
}

//structure
struct Point
{
    int x;
    int y;
};

int main()
{
    int mx;
    int my;

    Point point;
    point.x = 300;
    point.y = 200;

    {
        //scope
        int j = 5;
        {
            j = 10;
        }
    }

    {
        Sandwich sandwich("Ham", 4.5);
        //sandwich.Read();
        sandwich.Write();
    }

    enum class Difficulty
    {
        Easy,
        Medium,
        Hard
    };

    enum class Eggs
    {
        Easy,
        Scrambled
    };

    Difficulty d = Difficulty :: Easy;
    if (d == Difficulty :: Easy) cout << "Easy\n";

    union Data
    {
        int i;
        float f;
        bool b;
    };

    Data data;
    data.i = 10;
    data.f = 23.5f;
    data.b = true;

    cout << &data.i << endl;
    cout << &data.f << endl;

    cout << data.i << endl;
}