#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class Contact{
    private:
    string firstName;
    string lastName;
    int phoneNumber;

    public:
    void setFirstName(string newFirstName);
    string getFirstName();

    void setLastName(string newLastName);
    string getLastName();

    void setPhoneNumber(int newPhoneNumber);
    int getPhoneNumber();
    bool operator==(const firstName& otherFirstName, const lastName& otherLastName, const phoneNumber& otherPhoneNumber) const;
    Contact();
    Contact(string newFirstName, string newLastName, int newPhoneNumber);

};