#ifndef LEARNINGCPP_H
#define LEARNINGCPP_H
//#define DebugMessages // Used to activa debugging messages. ( Make it uncomment )

/******************************* A Place To Define Related Macros ******************************/
#ifdef  DebugMessages
#define DebugMessage_CallingConstructor std::cout << "Constructor was Called!" << std::endl
#define DebugMessage_CallingDeconstructor std::cout << "Deconstructor was Called!" << std::endl
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
class NotLearning {
public:
    NotLearning(); // Constructor

    int getID()const; // Function to used to initialise private variable "ID" of the class via the constructor.
    void setID(int);
    
    int getDay()const; // Function to used to initialise private variable "day" of the class via the constructor.
    void setDay(int);
    
    int getYear()const; // Function to used to initialise private variable "year" of the class via the constructor.
    void setYear(int);
    
    double getAverage()const; // Function to used to initialise private variable "average" of the class via the constructor.
    void setAverage(double);

    std::string getName()const; // Function to used to initialise private variable "name" of the class via the constructor.
    void setName(std::string);
    
    std::string getSurname()const; // Function to used to initialise private variable "surname" of the class via the constructor.
    void setSurname(std::string);
    
    std::string getCity()const; // Function to used to initialise private variable "city" of the class via the constructor.
    void setCity(std::string);
    
    std::string getMonth()const; // Function to used to initialise private variable "month" of the class via the constructor.
    std::string setMonth(std::string);


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
void fillVector(std::vector<NotLearning>&, const int);
void showVector(const std::vector<NotLearning>&);
void saveVector(const std::vector<NotLearning>&);
void copyVector(const std::vector<NotLearning>&, std::vector<NotLearning>&);
void sortVectorByID(std::vector<NotLearning>&);
void sortVectorByAverage(std::vector<NotLearning>&);
void sortVectorByName(std::vector<NotLearning>&);
void sortVectorBySurname(std::vector<NotLearning>&);
void sortVectorByCity(std::vector<NotLearning>&);
void sortVectorByDay(std::vector<NotLearning>&);
void sortVectorByMonth(std::vector<NotLearning>&);
void sortVectorByYear(std::vector<NotLearning>&);
void sortVectorByDetail(std::vector<NotLearning>&);

#endif // !LEARNINGCPP_H
