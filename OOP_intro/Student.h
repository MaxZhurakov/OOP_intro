#include <iostream>
#include <string>

using namespace std;
class Student
{
private:
	string Name;
	string Lastname;
	string Surname;
	string Birth;
	string Phone;
	string City;
	string Country;
	string School;
	string City_School;
	string Country_School;
	string group;
public:
	Student()
	{
		Name = "Max";
		Lastname = "Zhurakovskyi";
		Surname = "Vitalyovych";
		Birth = "27.01.2009";
		Phone = "+380989930655";
		City = "Vinnitsa";
		Country = "Ukraine";
		School = "6";
		City_School = "Vinnitsa";
		Country_School = "Ukraine";
		group = "P-22";
	}
	Student(string name, string Lastname, string Vitalyovych, string Birth, string Phone, string City, string Country, string School, string City_School, string Country_School, string group)
	{
		this->Name;
		this->Lastname;
		this->Surname;
		this->Birth;
		this->Phone;
		this->City;
		this->Country;
		this->School;
		this->City_School;
		this->Country_School;
		this->group;
	}
	~Student()
	{
		Name.clear();
		Lastname.clear();
		Surname.clear();
		Birth.clear();
		Phone.clear();
		City.clear();
		Country.clear();
		School.clear();
		City_School.clear();
		Country_School.clear();
		group.clear();
	}
	void setName(string name)
	{
		this->Name = name;
	}
	void setLastname(string Lastname)
	{
		this->Lastname = Lastname;
	}
	void setSurname(string Surname)
	{
		this->Surname = Surname;
	}
	void setBirth(string Birth)
	{
		this->Birth = Birth;
	}
	void setPhone(string Phone)
	{
		this->Phone = Phone;
	}
	void setCity(string City)
	{
		this->City = City;
	}
	void setCountry(string Country)
	{
		this->Country = Country;
	}
	void setSchool(string School)
	{
		this->School = School;
	}
	void setName(string name)
	{
		this->Name = City_School;
	}
	void setCountry_School(string Country_School)
	{
		this->Country_School = Country_School;
	}
	void setgroup(string group)
	{
		this->group = group;
	}
	string getName()
	{
		return Name;
	}
	string getLastname()
	{
		return Lastname;
	}
	string getSurname()
	{
		return Surname;
	}
	string getBirth()
	{
		return Birth;
	}
	string getPhone()
	{
		return Phone;
	}
	string getCity()
	{
		return City;
	}
	string getCountry()
	{
		return Country;
	}
	string getSchool()
	{
		return School;
	}
	string getCity_School()
	{
		return City_School;
	}
	string getCountry_School()
	{
		return Country_School;
	}
	string getgroup()
	{
		return group;
	}
	void print()
	{
		cout << "Name: " << Name << endl;
		cout << "Lastname: " << Lastname << endl;
		cout << "Surname: " << Surname << endl;
		cout << "Birth: " << Birth << endl;
		cout << "Phone: " << Phone << endl;
		cout << "City: " << City << endl;
		cout << "Country: " << Country << endl;
		cout << "School: " << School << endl;
		cout << "City_School: " << City_School << endl;
		cout << "Country_School: " << Country_School << endl;
		cout << "group: " << group << endl;
	}
}