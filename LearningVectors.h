#ifndef LEARNINGVECTORS_H
#define LEARNINGVECTORS_H
//#define DebugMessages // Used to activate debugging messages. ( Make it uncomment )

/******************************* A Place To Define Related Macros ******************************/
#ifdef  DebugMessages
#define DebugMessage_CallingConstructor std::cout << "Constructor was Called!" << std::endl
#define DebugMessage_CallingDeconstructor std::cout << "Deconstruction was Called!" << std::endl
#else
#define DebugMessage_CallingConstructor
#define DebugMessage_CallingDeconstructor
#endif

/******************************* A Place To Define Related Libraries ***************************/
#include <iostream>
#include <fstream>
#include <time.h>
#include <ctype.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

/******************************* A Place To Define Global Variables *****************************/
class MyVector {
public:
	MyVector(); // Constructor
	MyVector(std::string&, std::string&, std::string&, std::string&, std::string&, std::string&, std::string&, std::string&); // Constructor FO

	int getID()const; 

	double getAverage()const;

	std::string getName()const;

	std::string getSurname()const; 

	std::string getCity()const; 

	int getDay()const;
	std::string getMonth()const;
	int getYear()const;

private:
	int ID;
	int day;
	int year;

	double average;

	std::string name;
	std::string surname;
	std::string city;
	std::string month;

private:
	void setID(std::string&);
	void setAverage(std::string&);
	void setName(std::string&);
	void setSurname(std::string&);
	void setCity(std::string&);
	void setDates(std::string&, std::string&, std::string&);
};

/******************************* A Place To Declare Global Functions *******************************/
void fillVectorRandomly(std::vector<MyVector>&, const int&);
void fillVectorViaText(std::vector<MyVector>&);
void showVector(const std::vector<MyVector>&);
void saveVector(const std::vector<MyVector>&);
void copyVector(const std::vector<MyVector>&, std::vector<MyVector>&);
void sortVectorByID(std::vector<MyVector>&);
void sortVectorByAverage(std::vector<MyVector>&);
void sortVectorByName(std::vector<MyVector>&);
void sortVectorBySurname(std::vector<MyVector>&);
void sortVectorByCity(std::vector<MyVector>&);
void sortVectorByDay(std::vector<MyVector>&);
void sortVectorByMonth(std::vector<MyVector>&);
void sortVectorByYear(std::vector<MyVector>&);
void sortVectorByDetail(std::vector<MyVector>&);

#endif // !LEARNINGVECTORS_H
