#include <iostream>
using namespace std;
//Encapsulation function!!
class companyEmpolyees {
private:
    int Age;
    string Name;
public:
    void setName(string name){
        Name=name;
    }
    string getName(){
        return Name;
    }
    void setAge(int age){
        if(age<=0){
            cout<<"Invaid"<<endl;
        }
        else{
            Age=age;}
    }
    int getAge(){
        return Age;
    }

};
int main() {

    int NumberOfEmployees, EmployeeAge;

    string NameOfEmployee;

    cout << "Enter how many employee will sign:";

    cin >> NumberOfEmployees;

    for (int number = 0; number < NumberOfEmployees; number++) {

        cout << "Enter the Employee name:";

        cin >> NameOfEmployee;

        cout << "Enter the Employee Age:";

        cin >> EmployeeAge;

        companyEmpolyees object;

        object.setName(NameOfEmployee);

        object.setAge(EmployeeAge);

        cout << "Hello my name is " << object.getName() << ",and my age is: " << object.getAge() << endl;
    }
    return 0;
}