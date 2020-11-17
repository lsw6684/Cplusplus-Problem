#include <iostream>
using namespace std;

class Person
{

private:
    string name;
    string job;
    int age;

public:
    Person() : name("Cheolsoo"), job("umemployed"), age(20) {}
    Person(string name, string job, int age) : name(name), job(job), age(age) {}
    void display()
    {
        cout << name << " is " << job << endl;
        cout << name << " is " << age << " years old " << endl;
    }

    string getName()
    {
        return name;
    }

    string getJob()
    {
        return job;
    }

    int getAge()
    {
        return age;
    }
};

class Teacher : public Person
{
private:
    string subject;
public:
    Teacher() : Person(), subject("Anything") {}
    Teacher(string name, string job, int age, string subject) : Person(name, job, age), subject(subject) {}

    void display()
    {
        Person::display();
        cout << Person::getName() << " can teach " << subject << endl;
    }

};

class Player : public Person
{
private:
    string team;
public:
    Player() : Person(), team("No Team") {}
    Player(string name, string job, int age, string team) : Person(name, job, age), team(team) {}

    void display()
    {
        cout << Person::getName() << " is " << Person::getJob() << " player" << endl;
        cout << Person::getName() << " is " << Person::getAge() << " years old " << endl;
        cout << Person::getName() << "'s team is " << team << endl;
    }
};


int main()
{
    cout << "-----------------------------" << endl;
    Teacher t;
    t.display();
    cout << "-----------------------------" << endl;
    Teacher park("park", "Professor", 38, "C++");
    park.display();
    cout << "-----------------------------" << endl;
    Player son("Son", "soccer", 29, "Tottenham Hotspur");
    son.display();
    cout << "-----------------------------" << endl;
    Player ryu("Ryu", "baseball", 33, "Toronto Bluejays");
    ryu.display();
    cout << "-----------------------------" << endl;
    system("pause");
    return 0;

}