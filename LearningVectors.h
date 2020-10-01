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

	int getID()const; 
	void setID(int);

	double getAverage()const;
	void setAverage(double);

	std::string getName()const;
	void setName(std::string);

	std::string getSurname()const; 
	void setSurname(std::string);

	std::string getCity()const; 
	void setCity(std::string);

	int getDay()const;
	int getYear()const;
	std::string getMonth()const; 
	void setDates(int, const std::string, int);


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
void fillVector(std::vector<MyVector>&, const int&);
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
