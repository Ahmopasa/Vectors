#ifndef LEARNINGVECTORS_H
#define LEARNINGVECTORS_H
//#define DebugMessages // Used to activa debugging messages. ( Make it uncomment )

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

	int getID()const; // Function to used to initialize private variable "ID" of the class via the constructor.
	void setID(int);

	int getDay()const; // Function to used to initialize private variable "day" of the class via the constructor.
	int getYear()const; // Function to used to initialize private variable "year" of the class via the constructor.

	double getAverage()const; // Function to used to initialize private variable "average" of the class via the constructor.
	void setAverage(double);

	std::string getName()const; // Function to used to initialize private variable "name" of the class via the constructor.
	void setName(char*);

	std::string getSurname()const; // Function to used to initialize private variable "surname" of the class via the constructor.
	void setSurname(char*);

	std::string getCity()const; // Function to used to initialize private variable "city" of the class via the constructor.
	void setCity(char*);

	std::string getMonth()const; // Function to used to initialize private variable "month" of the class via the constructor.

	void setDates(int, const char*, int);

private:
	int ID;
	int day;
	int year;

	double average;

	std::string name;
	std::string surname;
	std::string city;
	std::string month;
};

/******************************* A Place To Define Global Functions *******************************/
void fillVector(std::vector<MyVector>&, const int);
void fillVectorByText(std::vector<MyVector>&, const int);
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
