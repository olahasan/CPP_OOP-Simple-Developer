
#include <iostream>
#include <string>

using namespace std;


class clsPerson
{
private:
    int _ID;
    string _FirstName;
    string _LastName;
    string _Email;
    string _Phone;

public:
    clsPerson(int ID, string FirstName, string LastName, string Email, string Phone)
    {
        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _Phone = Phone;
    }

    //Get ID
    int ID()
    {
        return _ID;
    }

    //Set Get FirstName
    void SetFirstName(string FirstName)
    {
        _FirstName = FirstName;
    }
    string FirstName()
    {
        return _FirstName;
    }

    //Set Get LastName
    void SetLastName(string LastName)
    {
        _LastName = LastName;
    }
    string LastName()
    {
        return _LastName;
    }

    //Get Fullname 
    string FullName()
    {
        return  _FirstName + " " + _LastName;
    }

    //Set Get Email
    void setEmail(string Email)
    {
        _Email = Email;
    }
    string Email()
    {
        return _Email;
    }

    //Set Get Phone
    void setPhone(string Phone)
    {
        _Phone = Phone;
    }
    string Phone()
    {
        return _Phone;
    }

    void SendEmail(string Subject, string Body)
    {
        cout << "the follwing message sent succesfully to email : " << _Email << endl;
        cout << "Subject: " << Subject << endl;
        cout << "Body: " << Body << endl << endl;
    }
    void SendSMS(string Body)
    {
        cout << "the follwing sms sent succesfully to phone : " << _Phone << endl;
        cout << Body << endl;
    }
    void Print()
    {
        cout << "\nInfo\n";
        cout << "______________________\n";
        cout << "ID       : " << _ID << endl;
        cout << "FirstName: " << _FirstName << endl;
        cout << "LastName : " << _LastName << endl;
        cout << "FullName : " << FullName() << endl;
        cout << "Email    : " << _Email << endl;
        cout << "Phone    : " << _Phone << endl;
        cout << "_______________________\n";
    }
};

class clsEmployee : public clsPerson
{
private:
    string _Title;
    float _Salary;
    string _Department;

public:
    clsEmployee(int ID, string FirstName, string LastName, string Email, string Phone, string Title, float Salary, string Department)
        : clsPerson(ID, FirstName, LastName, Email, Phone)
    {
        _Title = Title;
        _Salary = Salary;
        _Department = Department;
    }

    //Set Get Title
    void SetTitle(string Title)
    {
        _Title = Title;
    }
    string Title()
    {
        return _Title;
    }

    //Set Get Salary
    void SetSalary(float Salary)
    {
        _Salary = Salary;
    }
    float Salary()
    {
        return _Salary;
    }

    //Set Get Department
    void SetDepartment(string Department)
    {
        _Department = Department;
    }
    string Department()
    {
        return _Department;
    }

    void Print()
    {
        cout << "\nInfo\n";
        cout << "______________________\n";
        cout << "ID            : " << ID() << endl;
        cout << "FirstName     : " << FirstName() << endl;
        cout << "LastName      : " << LastName() << endl;
        cout << "FullName      : " << FullName() << endl;
        cout << "Email         : " << Email() << endl;
        cout << "Phone         : " << Phone() << endl;
        cout << "Title         : " << _Title << endl;
        cout << "Salary        : " << _Salary << endl;
        cout << "Department    : " << _Department << endl;
        cout << "_______________________\n";
    }
};

class clsDeveloper : public clsEmployee
{
private:
    string _MainProgrammingLanguage;
public:
    clsDeveloper(int ID, string FirstName, string LastName, string Email, string Phone, string Title, float Salary, string Department, string MainProgrammingLanguage)
        : clsEmployee(ID, FirstName, LastName, Email, Phone, Title, Salary, Department)
    {
        _MainProgrammingLanguage = MainProgrammingLanguage;
    }

    //Set Get MainProgrammingLanguage
    void SetMainProgrammingLanguage(string MainProgrammingLanguage)
    {
        _MainProgrammingLanguage = MainProgrammingLanguage;
    }
    string MainProgrammingLanguage()
    {
        return _MainProgrammingLanguage;
    }

    void Print()
    {
        cout << "\nInfo\n";
        cout << "______________________\n";
        cout << "ID                         : " << ID() << endl;
        cout << "FirstName                  : " << FirstName() << endl;
        cout << "LastName                   : " << LastName() << endl;
        cout << "FullName                   : " << FullName() << endl;
        cout << "Email                      : " << Email() << endl;
        cout << "Phone                      : " << Phone() << endl;
        cout << "Title                      : " << Title() << endl;
        cout << "Salary                     : " << Salary() << endl;
        cout << "Department                 : " << Department() << endl;
        cout << "MainProgrammingLanguage    : " << _MainProgrammingLanguage << endl;
        cout << "_______________________\n";
    }

};


int main()
{

    clsDeveloper Developer1(1, "ola", "ali", "ola@gmail.com", "010012345","Fullstack", 100000, "Programing", "C++");
    Developer1.Print();

    Developer1.SendEmail("Hi", "How Are You");
    Developer1.SendSMS("How Are You");


    /*
    clsEmployee Employee1(10, "ola", "ali", "my@gmail.com", "0098387727","Fullstack", 5000, "Programing");
    Employee1.Print();


      Employee1.SendEmail("Hi", "How Are You");
      Employee1.SendSMS("How Are You");
    */
    
    /*
        clsPerson person1(10, "Mohammed", "Abo_Hadhud", "my@gmail.com", "0098387727");
        person1.Print();

        person1.SendEmail("Hi", "How Are You");
        person1.SendSMS("How Are You");    
    */
    

    system("pause>0");
    return 0;
}

