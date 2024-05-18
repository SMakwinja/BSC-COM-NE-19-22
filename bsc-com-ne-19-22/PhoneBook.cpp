#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class PhoneBook{
    int SizeOfContacts = 5;
    int ValidContacts;
    int ArrayContacts[] = new int;
    Contact Contact(string newFirstName, string newLastName, int newPhoneNumber);

    private:
    void AddContact(string FirstName, string LastName, int PhoneNumber);
    void SaveContactsToFile();
    void ShowAllContacts();

    public:
    void Run();
    PhoneBook();
};
void PhoneBook::AddContact(string FirstName, string LastName, int PhoneNumber){
    string FirstName, LastName;
    int PhoneNumber;
    cout<<"Enter your first name, last name and your phone number \n";
    cin>>FirstName;
    cin>>LastName;
    cin>>PhoneNumber;

    if(PhoneNumber == bool Contact::operator==(const phoneNumber& otherPhoneNumber)){
        cout<<"the number you've entered already exists \n";
    }
    else{
        cout<<"the contact have been assigned successfully \n";
        ValidContacts++;
    }
}
void PhoneBook::SaveContactsToFile(){
    ofstream MyFile("contacts.txt");
    if(MyFile.is_open()){
        MyFile<<"your contacts have been saved \n";
        MyFile.close();
    }
    else{
        cout<<"unable to open file \n";
    } 
    if(MyFile.is_open()){
        cout<<"Your contacts have been saved successfully \n";
    }  
    else{
        cout<<"there are no valid contacts in your file \n";
    }
}
void PhoneBook::ShowAllContacts(){
    if(ArrayContacts != 0){
    cout<<ArrayContacts[0]<<endl<<ArrayContacts[1]<<endl<<ArrayContacts[2]<<endl<<ArrayContacts[3]<<endl<<ArrayContacts[4]<<endl;
    }
    else{
        cout<<"the Array does not have any valid contacts \n";
    }
}
void PhoneBook::Run(){
    int choice;
    cout<<"Options \n 1- Add a contact \n 2- Show all contacts \n 3- Save contacts to file \n 4- Quit \n";
    cout<<"What would you like to do? \n";
    cin>>choice;
    while(cin>>choice){
        if (choice == 1 || choice == 2 || choice == 3){
        
        }
    } 
    if(choice == 4){
    }   
    else{
    cout<<"The choice you have entered does not exist \n";
    }
    
}
int main(){
    PhoneBook phoneBook = PhoneBook();
    phoneBook.Run();
    return 0;
}
