#define _CRT_SECURE_NO_WARNINGS
#include "LearningVectors.h"

/******************************* A Place To Define Related Macros ******************************/
#define check_leap(year) ((year) % 4 == 0 && ((year) % 100 != 0 || (year) % 400 == 0))

/******************************* A Place To Define Global Variables *****************************/

/******************************* A Place To Define Class Members *****************************/
MyClass::MyClass()
{
	ID = rand() % 1001 + 101;
	average = ((double)rand() * (100. - 0.)) / (double)RAND_MAX + 0.;

	static const std::string nameList[] = { "AHMET", "ABRAHAM", "ABIGAIL", "ABBIE", "AHMET", "ELIZABETH", "ELLA", "ELIZABETH", "AHMET", "ELLEN", "ELLEN", "ELLEN", "EPIPHANY", "EPPIE", "ETTA", "EULA", "FOREST", "FORD", "FOSTER", "FOX",
								"FOREST", "FORD", "FOSTER", "FOX", "EPIPHANY", "EPPIE", "ETTA", "EULA", "ABIGAIL", "ABBIE", "AHMET", "ELIZABETH", "ELLA", "ABRAHAM", "ABIGAIL", "ABBIE", "AHMET", "ELIZABETH", "ELLA", "EULA",
								"AHMET", "ABRAHAM", "ABIGAIL", "ABBIE", "AHMET", "ELIZABETH", "ELLA", "ELIZABETH", "AHMET", "ELLEN", "ELLEN", "ELLEN", "EPIPHANY", "EPPIE", "ETTA", "EULA", "FOREST", "FORD", "FOSTER", "FOX",
								"FOREST", "FORD", "FOSTER", "FOX", "EPIPHANY", "EPPIE", "ETTA", "EULA", "ABIGAIL", "ABBIE", "AHMET", "ELIZABETH", "ELLA", "ABRAHAM", "ABIGAIL", "ABBIE", "AHMET", "ELIZABETH", "ELLA", "EULA",
	}; name = nameList[rand() % 80];

	static const std::string surnameList[] = { "JOHNSON", "ABBESTEGE", "WILSON", "JOHNSON", "ABBESTEGE", "HARRIS", "JOHNSON", "HARRIS", "WILSON", "JOHNSON", "GARCIA", "GARCIA", "JOHNSON", "RODRIGUEZ", "RODRIGUEZ", "COLEMAN", "WILSON",
								  "JOHNSON", "ABBESTEGE", "WILSON", "JOHNSON",	"GARCIA", "GARCIA", "JOHNSON", "RODRIGUEZ", "RODRIGUEZ"	,  "ABBESTEGE", "HARRIS", "JOHNSON", "HARRIS", "WILSON", "JOHNSON", "GARCIA",
								  "JOHNSON", "ABBESTEGE", "WILSON", "JOHNSON", "ABBESTEGE", "HARRIS", "JOHNSON", "HARRIS", "WILSON", "JOHNSON", "GARCIA", "GARCIA", "JOHNSON", "RODRIGUEZ", "RODRIGUEZ", "COLEMAN", "WILSON",
								  "WILSON", "JOHNSON", "GARCIA", "GARCIA", "JOHNSON", "RODRIGUEZ", "RODRIGUEZ", "COLEMAN", "WILSON", "JOHNSON", "ABBESTEGE", "WILSON", "ABBESTEGE", "HARRIS", "JOHNSON", "HARRIS",
								  "WILSON", "JOHNSON", "GARCIA", "GARCIA", "JOHNSON", "RODRIGUEZ", "RODRIGUEZ", "COLEMAN", "WILSON", "JOHNSON", "ABBESTEGE", "WILSON", "JOHNSON", "ABBESTEGE",
	}; surname = surnameList[rand() % 80];

	static const std::string  cityList[] = { "Alabama", "Alaska", "Arizona", "Arkansas", "California", "Colorado", "Connecticut", "Delaware", "Florida", "Georgia", "Hawaii", "Connecticut", "Delaware", "Florida", "Georgia", "Hawaii", "Colorado",
							 "Connecticut", "Delaware", "Florida", "Georgia", "Hawaii", "Connecticut", "Delaware", "Florida", "Georgia", "Hawaii", "Connecticut", "Delaware", "Louisiana", "Maine", "Maryland", "Massachusetts",
							 "Idaho", "Illinois", "Indiana", "Iowa", "Kansas", "Kentucky", "Louisiana", "Maine", "Maryland", "Massachusetts", "Michigan", "Connecticut", "Delaware", "Florida", "Georgia", "Hawaii", "Connecticut", "Delaware",
							 "Delaware", "Florida", "Georgia", "Hawaii", "Connecticut", "Delaware", "Louisiana", "Maine", "Maryland", "Massachusetts", "Connecticut", "Delaware", "Florida", "Georgia", "Hawaii", "Connecticut", "Delaware",
							 "Florida", "Georgia", "Hawaii", "Alabama", "Alaska", "Arizona", "Arkansas", "California", "Colorado", "Connecticut", "Delaware", "Florida"
	}; city = cityList[rand() % 80];

	int random_month = rand() % 12 + 1;
	static const std::string pmons[] = { "","January","February","March","April","May","June","July","August","September","October","November","December" };
	month = pmons[random_month];

	static const int daytabs[][13] = {
			{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
			{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
	}; 
	year = rand() % (2020 - 1989 + 1) + 1989;
	int tempDay = daytabs[check_leap(year)][random_month];
	day = rand() % tempDay + 1;
}

MyClass::MyClass(std::string& ID, std::string& average, std::string& name, std::string& surname, std::string& city, std::string& day, std::string& month, std::string& year)
{
	//std::cout << "Before Single Push Back => " << average << " " << name << " " << surname << " " << city << " " << day << " " << month << " " << year << "\n";

	setID(ID);
	setAverage(average);
	setName(name);
	setSurname(surname);
	setCity(city);
    setDates(day, month, year);

	//std::cout << "Before Single Push Back 2  => " << getID() << " " << getAverage() << " " << getName() << " " << getSurname() << " " << getCity() << " " <<getDay() << " " << getMonth() << " " << getYear() << "\n";
}

int MyClass::getID()const
{
	return ID;
}

void MyClass::setID(std::string& newID)
{
	ID = std::stoi(newID);	 
}

double MyClass::getAverage()const
{
	return average;
}

void MyClass::setAverage(std::string& temp_average)
{
	average = std::stod(temp_average);
}

std::string MyClass::getName()const
{
	return name;
}

void MyClass::setName(std::string& newName)
{
	this->name = newName;
}

std::string MyClass::getSurname()const
{
	return surname;
}

void MyClass::setSurname(std::string& newSurname)
{
	this->surname = newSurname;
}

std::string MyClass::getCity()const
{
	return city;
}

void MyClass::setCity(std::string& newCity)
{
	this->city = newCity;
}

int MyClass::getDay()const
{
	return day;
}

std::string MyClass::getMonth()const
{
	return month;
}

int MyClass::getYear()const
{
	return year;
}

void MyClass::setDates (std::string& newDay, std::string& newMonth, std::string& newYear)
{

	year = std::stoi(newYear);
	day = std::stoi(newDay);
	month = newMonth;
}

void fillVectorRandomly(std::vector<MyClass>& myVector, const int& TotalStudent)
{
	if (TotalStudent > 0)
	{
		for (int i = 0; i < TotalStudent; i++)
		{
			MyClass newStudent;
			myVector.push_back(newStudent);
		}
	}
	else
	{
		std::cout << "Please, enter a numeric value that does not contain numbers below 0 and alphabetical chars." << std::endl;
		exit(EXIT_FAILURE);
	}
}

void fillVectorViaText(std::vector<MyClass>& myVector)
{
	std::ifstream FileHandler;
	std::vector<std::string> myStringVector;
	std::string temp_string;
	FileHandler.open("List_Of_Vector_Elements");
	if (FileHandler.good())
	{
		while (FileHandler.good())
		{
			std::getline(FileHandler, temp_string);
			myStringVector.push_back(temp_string);
		}
		FileHandler.close();
	}
	else
	{
		std::cout << "Unable to open file: List_Of_Vector_Elements. " << "\n";
	}
	const unsigned int String_Vector_Size = myStringVector.size();
	std::string ID = "temp_ID";
	std::string average = "temp_average";
	std::string surname = "temp_surname";
	std::string city = "temp_city";
	std::string name = "temp_name";
	std::string day = "temp_day";
	std::string month = "temp_month";
	std::string year = "temp_year";
	for (unsigned int i = 0; i < String_Vector_Size; i++)
	{
		std::ifstream MainHandler;
		MainHandler.open(myStringVector[i]);
		while (MainHandler >> average >> name >> surname >> city >> day >> month >> year)
		{
			MyClass newstudent(myStringVector[i], average, name, surname, city, day, month, year);
			myVector.push_back(newstudent);			
			std::cout << "\n";
		}
		MainHandler.close();
	}
}

void showVector(const std::vector<MyClass>& myVector)
{
	size_t size = myVector.size();
	std::cout << "Total size of vector: " << size << std::endl;
	std::cout << "Total capacity of vector: " << myVector.capacity() << std::endl;
	std::cout << "             ID   Average Name       Surname    City            Day Month    Year" << std::endl;
	for (size_t i = 0; i < size; i++)
	{
		std::cout << "Person:" << std::left << std::setw(2) << i << " => " << std::flush;
		std::cout << std::left << std::setw(4) << myVector[i].getID() << " " << std::flush;
		std::cout << std::left << std::setw(7) << std::setprecision(4) << myVector[i].getAverage() << " " << std::flush;
		std::cout << std::left << std::setw(10) << myVector[i].getName() << " " << std::flush;
		std::cout << std::left << std::setw(10) << myVector[i].getSurname() << " " << std::flush;
		std::cout << std::left << std::setw(15) << myVector[i].getCity() << " " << std::flush;
		std::cout << std::left << std::setw(3) << myVector[i].getDay() << " " << std::flush;
		std::cout << std::left << std::setw(8) << myVector[i].getMonth() << " " << std::flush;
		std::cout << std::left << std::setw(4) << myVector[i].getYear() << " " << std::flush;
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void saveVector(const std::vector<MyClass>& myVector)
{
	const unsigned int Vector_Size = myVector.size();
	std::ofstream* FileHandler = new std::ofstream[Vector_Size];
	if (!FileHandler)
	{
		std::cout << "Memory allocation was failed to save vector in text file." << "\n";
	}
	else
	{
		for (unsigned int i = 0; i < Vector_Size; i++)
		{
			FileHandler[i].open(std::to_string(myVector[i].getID()));
			FileHandler[i] << myVector[i].getAverage() << " " << myVector[i].getName() << " " << myVector[i].getSurname() << " " << myVector[i].getCity() << " " << myVector[i].getDay() << " " << myVector[i].getMonth() << " " << " " << myVector[i].getYear() << " " << std::endl;

			FileHandler[i].close();

			std::ofstream MainHandler;
			MainHandler.open("List_Of_Vector_Elements", std::ios_base::app);
			MainHandler << myVector[i].getID() << "\n";
			MainHandler.close();
		}
		delete[] FileHandler;
	}
}

void copyVector(const std::vector<MyClass>& myVector, std::vector<MyClass>& myNewVector)
{
	myNewVector.assign(myVector.begin(), myVector.end());
}

static bool cmp_by_id(const MyClass& one, const MyClass& two) // compare classes inside the vector by checking the member of "ID".
{
	return one.getID() < two.getID();
}

static bool cmp_by_average(const MyClass& one, const MyClass& two) // compare classes inside the vector by checking the member of "ID".
{
	return (one.getAverage() < two.getAverage());
}

static bool cmp_by_name(const MyClass& one, const MyClass& two) // compare classes inside the vector by checking the member of "ID".
{
	return one.getName() < two.getName();
}

static bool cmp_by_surname(const MyClass& one, const MyClass& two) // compare classes inside the vector by checking the member of "ID".
{
	return one.getSurname() < two.getSurname();
}

static bool cmp_by_city(const MyClass& one, const MyClass& two) // compare classes inside the vector by checking the member of "ID".
{
	return one.getCity() < two.getCity();
}

static bool cmp_by_day(const MyClass& one, const MyClass& two) // compare classes inside the vector by checking the member of "ID".
{
	return one.getDay() < two.getDay();
}

static bool cmp_by_month(const MyClass& one, const MyClass& two) // compare classes inside the vector by checking the member of "month".
{
	return one.getMonth() < two.getMonth();
}

static bool cmp_by_year(const MyClass& one, const MyClass& two) // compare classes inside the vector by checking the member of "year".
{
	return one.getYear() < two.getYear();
}

static bool cmp_by_detail(const MyClass& one, const MyClass& two) // compare classes inside the vector by checking the member of "ID", then "average", etc...
{
	if (one.getID() != two.getID())
	{
		return one.getID() < two.getID();
	}

	if (one.getAverage() != two.getAverage())
	{
		return one.getAverage() < two.getAverage();
	}

	if (one.getName() != two.getName())
	{
		return one.getName() < two.getName();
	}

	if (one.getSurname() != two.getSurname())
	{
		return one.getSurname() < two.getSurname();
	}

	if (one.getCity() != two.getCity())
	{
		return one.getCity() < two.getCity();
	}

	if (one.getDay() != two.getDay())
	{
		return one.getDay() < two.getDay();
	}

	if (one.getMonth() != two.getMonth())
	{
		return one.getMonth() < two.getMonth();
	}

	if (one.getYear() != two.getYear())
	{
		return one.getYear() < two.getYear();
	}

	return true;
}

void sortVectorByID(std::vector<MyClass>& myVector)
{
	//std::sort(myVector.begin(), myVector.end(), [](MyClass& one, MyClass& two) { return one.getID() < two.getID(); });
	std::sort(myVector.begin(), myVector.end(), cmp_by_id);
}

void sortVectorByAverage(std::vector<MyClass>& myVector)
{
	//std::sort(myVector.begin(), myVector.end(), [](MyClass& one, MyClass& two) { return one.getAverage() < two.getAverage(); });
	std::sort(myVector.begin(), myVector.end(), cmp_by_average);
}

void sortVectorByName(std::vector<MyClass>& myVector)
{
	//std::sort(myVector.begin(), myVector.end(), [](MyClass& one, MyClass& two) { return one.getName() < two.getName(); });
	std::sort(myVector.begin(), myVector.end(), cmp_by_name);
}

void sortVectorBySurname(std::vector<MyClass>& myVector)
{
	//std::sort(myVector.begin(), myVector.end(), [](MyClass& one, MyClass& two) { return one.getSurname() < two.getSurname(); });
	std::sort(myVector.begin(), myVector.end(), cmp_by_surname);
}

void sortVectorByCity(std::vector<MyClass>& myVector)
{
	//std::sort(myVector.begin(), myVector.end(), [](MyClass& one, MyClass& two) { return one.getCity() < two.getCity(); });
	std::sort(myVector.begin(), myVector.end(), cmp_by_city);
}

void sortVectorByDay(std::vector<MyClass>& myVector)
{
	//std::sort(myVector.begin(), myVector.end(), [](MyClass& one, MyClass& two) { return one.getDay() < two.getDay(); });
	std::sort(myVector.begin(), myVector.end(), cmp_by_day);
}

void sortVectorByMonth(std::vector<MyClass>& myVector)
{
	//std::sort(myVector.begin(), myVector.end(), [](MyClass& one, MyClass& two) { return one.getMonth() < two.getMonth(); });
	std::sort(myVector.begin(), myVector.end(), cmp_by_month);
}

void sortVectorByYear(std::vector<MyClass>& myVector)
{
	//std::sort(myVector.begin(), myVector.end(), [](MyClass& one, MyClass& two) { return one.getYear() < two.getYear(); });
	std::sort(myVector.begin(), myVector.end(), cmp_by_year);
}

void sortVectorByDetail(std::vector<MyClass>& myVector)
{
	//std::sort(myVector.begin(), myVector.end(), [](MyClass& one, MyClass& two) { return one.getYear() < two.getYear(); });
	std::sort(myVector.begin(), myVector.end(), cmp_by_detail);
}
