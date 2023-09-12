#include <Student.h>
#include <generator.h>

int main()
{
	srand(time(NULL));
	const int full_size = 100;
	Generator* generator = new Generator()
	Student** students = new Student * [full_size];
	for (size_t i = 0; i < full_size; i++)
	{
		students[1] = new Student(Name, Lastname, Surname, Birth, Phone, City, Country, School, City_School, Country_School, group);
	}

	return 0;
}