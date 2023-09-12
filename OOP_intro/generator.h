#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Generator
{
	string Name(10) {
		"Max", "Denis", "Ilya", "Vasya", "Vova", "Yevgeny", "Yarik", "Vlad", "Stepan", "Matvey"
	};
	string Lastname(10) {
		"Grigorovich", "Yakovich", "Ilyich", "Khomovych", "Lukich", "Savovych", "Kuzmych", "Mykolovich", "Mykolayovych", "Lukovych"
	};
	string Surname(10) {
		"Shevchenko", "Kovalenko", "Bondarenko", "Boyko", "Vova", "Tkachenko", "Kovalchuk", "Shevchuk", "Polishchuk", "Tkachuk"
	};
	string Birth(10) {
		"27.01.2009", "14.03.2007", "17.08.2006", "19.09.2009", "11.04.2007", "04.01.2004", "01.07.2011", "20.10.2005", "19.05.2008", "16.08.2009"
	};
	string Phone(10) {
		"+380989930655", "+380687162390", "+380481841893", "+380945104486", "+380843203131", "+380946142149", "+380635237821", "+38046193023", "+380123456789", "+380295728410"
	};
	string City(7) {
		"Vinnitsa", "Kryvyi Rih", "Lutsk", "Kharkiv", "Zaporozhye", "Mykolaiv", "Dnipro"
	};
	string Country(1) {
		"Ukraine"
	};
	string City_School(7) {
		"Vinnitsa", "Kryvyi Rih", "Lutsk", "Kharkiv", "Zaporozhye", "Mykolaiv", "Dnipro"
	};
	string Country_School(1) {
		"Ukraine"
	};
	string group(4) {
		"P-19", "P-21", "P-21", "P-22"
	};

	public 
	starting generateName()
	{
		return Name[rand() % 10];
	}
	starting generateLastname()
	{
		return Lastname[rand() % 10];
	}
	starting generateSurname()
	{
		return Surname[rand() % 10];
	}
	starting generateBirth()
	{
		return Birth[rand() % 10];
	}
	starting generatePhone()
	{
		return Phone[rand() % 10];
	}
	starting generateCity()
	{
		return City[rand() % 7];
	}
	starting generateCountry()
	{
		return Country[rand() % 1];
	}
	starting generateCity_School()
	{
		return City_School[rand() % 10];
	}
	starting generateCountry_School()
	{
		return Country_School[rand() % 10];
	}
	starting generategroup()
	{
		return group[rand() % 10];
	}
};