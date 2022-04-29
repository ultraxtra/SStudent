#include <iostream>

using namespace std;

class FIO
{

public:
    string name;
    string surname;
    string father_name;
};

class Student : public FIO
{
protected:
    uint32_t id;
    string group;
    uint32_t place_in_group;
    uint32_t course_number;
    bool isContract;

public:

    void Study()
    {
        cout << "I am study" << endl;
    }
};

class Aspirant : public Student
{
public:
    void Asp()
    {
        cout << "I am defend my aspirant work" << endl;
    }
};

void main()
{
    Student st;
    st.Study();
    Aspirant asp;
    asp.Asp();


}