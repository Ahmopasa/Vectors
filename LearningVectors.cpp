#define _CRT_SECURE_NO_WARNINGS
#include "LearningVectors.h"

#define check_leap(year) ((year) % 4 == 0 && ((year) % 100 != 0 || (year) % 400 == 0)) // Return 1 / 0 if the year is leap year or not.

NotLearning::NotLearning()
{

    ID = rand() % 1001 + 101;
    average = ((double)rand() * (100. - 0.)) / (double)RAND_MAX + 0.;

    static const std::string nameList[] = { "AHMET", "ABRAHAM", "ABIGAIL", "ABBIE", "AHMET", "ELIZABETH", "ELLA", "ELIZABETH", "AHMET", "ELLEN", "ELLEN", "ELLEN", "EPIPHANY", "EPPIE", "ETTA", "EULA", "FOREST", "FORD", "FOSTER", "FOX",
                                    "FOREST", "FORD", "FOSTER", "FOX", "EPIPHANY", "EPPIE", "ETTA", "EULA", "ABIGAIL", "ABBIE", "AHMET", "ELIZABETH", "ELLA", "ABRAHAM", "ABIGAIL", "ABBIE", "AHMET", "ELIZABETH", "ELLA", "EULA",
                                    "AHMET", "ABRAHAM", "ABIGAIL", "ABBIE", "AHMET", "ELIZABETH", "ELLA", "ELIZABETH", "AHMET", "ELLEN", "ELLEN", "ELLEN", "EPIPHANY", "EPPIE", "ETTA", "EULA", "FOREST", "FORD", "FOSTER", "FOX",
                                    "FOREST", "FORD", "FOSTER", "FOX", "EPIPHANY", "EPPIE", "ETTA", "EULA", "ABIGAIL", "ABBIE", "AHMET", "ELIZABETH", "ELLA", "ABRAHAM", "ABIGAIL", "ABBIE", "AHMET", "ELIZABETH", "ELLA", "EULA",
    };
    name = nameList[rand() % 80];

    static const std::string surnameList[] = { "JOHNSON", "ABBESTEGE", "WILSON", "JOHNSON", "ABBESTEGE", "HARRIS", "JOHNSON", "HARRIS", "WILSON", "JOHNSON", "GARCIA", "GARCIA", "JOHNSON", "RODRIGUEZ", "RODRIGUEZ", "COLEMAN", "WILSON",
                                      "JOHNSON", "ABBESTEGE", "WILSON", "JOHNSON",	"GARCIA", "GARCIA", "JOHNSON", "RODRIGUEZ", "RODRIGUEZ"	,  "ABBESTEGE", "HARRIS", "JOHNSON", "HARRIS", "WILSON", "JOHNSON", "GARCIA",
                                      "JOHNSON", "ABBESTEGE", "WILSON", "JOHNSON", "ABBESTEGE", "HARRIS", "JOHNSON", "HARRIS", "WILSON", "JOHNSON", "GARCIA", "GARCIA", "JOHNSON", "RODRIGUEZ", "RODRIGUEZ", "COLEMAN", "WILSON",
                                      "WILSON", "JOHNSON", "GARCIA", "GARCIA", "JOHNSON", "RODRIGUEZ", "RODRIGUEZ", "COLEMAN", "WILSON", "JOHNSON", "ABBESTEGE", "WILSON", "ABBESTEGE", "HARRIS", "JOHNSON", "HARRIS",
                                      "WILSON", "JOHNSON", "GARCIA", "GARCIA", "JOHNSON", "RODRIGUEZ", "RODRIGUEZ", "COLEMAN", "WILSON", "JOHNSON", "ABBESTEGE", "WILSON", "JOHNSON", "ABBESTEGE",
    };
    surname = surnameList[rand() % 80];

    static const std::string  cityList[] = { "Alabama", "Alaska", "Arizona", "Arkansas", "California", "Colorado", "Connecticut", "Delaware", "Florida", "Georgia", "Hawaii", "Connecticut", "Delaware", "Florida", "Georgia", "Hawaii", "Colorado",
                                 "Connecticut", "Delaware", "Florida", "Georgia", "Hawaii", "Connecticut", "Delaware", "Florida", "Georgia", "Hawaii", "Connecticut", "Delaware", "Louisiana", "Maine", "Maryland", "Massachusetts",
                                 "Idaho", "Illinois", "Indiana", "Iowa", "Kansas", "Kentucky", "Louisiana", "Maine", "Maryland", "Massachusetts", "Michigan", "Connecticut", "Delaware", "Florida", "Georgia", "Hawaii", "Connecticut", "Delaware",
                                 "Delaware", "Florida", "Georgia", "Hawaii", "Connecticut", "Delaware", "Louisiana", "Maine", "Maryland", "Massachusetts", "Connecticut", "Delaware", "Florida", "Georgia", "Hawaii", "Connecticut", "Delaware",
                                 "Florida", "Georgia", "Hawaii", "Alabama", "Alaska", "Arizona", "Arkansas", "California", "Colorado", "Connecticut", "Delaware", "Florida"
    };
    city = cityList[rand() % 80];

    year = rand() % (2020 - 1989 + 1) + 1989;
    static const int daytabs[][13] = {
                {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    };
    static const std::string pmons[] = { "","Ocak","Subat","Mart","Nisan","Mayis","Haziran","Temmuz","Agustos","Eylul","Ekim","Kasim","Aralik" };
    int counter_date = rand() % 12 + 1;
    int tempDay = daytabs[check_leap(year)][counter_date];
    day = rand() % tempDay + 1;
    month = pmons[counter_date];
}

int NotLearning::getID()const
{
    return ID;
}

void NotLearning::setID(int newID)
{
    ID = newID;
}

int NotLearning::getDay()const
{
    return day;
}

int NotLearning::getYear()const
{
    return year;
}

double NotLearning::getAverage()const
{
    return average;
}

void NotLearning::setAverage(double newAverage)
{
    this->average = newAverage;
}

std::string NotLearning::getName()const
{
    return name;
}

void NotLearning::setName(char* _newName)
{
    std::string newName(_newName);
    this->name = newName;
}

std::string NotLearning::getSurname()const
{
    return surname;
}

void NotLearning::setSurname(char* _newSurname)
{
    std::string newSurname(_newSurname);
    this->surname = newSurname;
}

std::string NotLearning::getCity()const
{
    return city;
}

void NotLearning::setCity(char* _newCity)
{

    std::string newCity(_newCity);
    this->city = newCity;
}

std::string NotLearning::getMonth()const
{
    return month;
}

void NotLearning::setDates(int newYear, char* newMonth, int newDay)
{
    year = newYear;

    static const int daytabs[][13] = {
                {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    };
    static const char* pmons[] = { "","Ocak","Subat","Mart","Nisan","Mayis","Haziran","Temmuz","Agustos","Eylul","Ekim","Kasim","Aralik" };

    int month_counter = 0;
    for (int i = 0; i < 13; i++)
    {
        if (!strcmp(newMonth, pmons[i]))
            month_counter++;
    }
    int tempDay = daytabs[check_leap(year)][month_counter];
    if (newDay <= tempDay)
    {
        day = newDay;
    }

    std::string tempMonth(newMonth);
    this->month = tempMonth;

}

void fillVector(std::vector<NotLearning>& newClass, const int TotalStudent)
{

    if (TotalStudent > 0)
    {
        for (int i = 0; i < TotalStudent; i++)
        {
            NotLearning newStudent;
            newClass.push_back(newStudent);
        }
    }
    else
    {
        std::cout << "Please, enter a numeric value that does not contain numbers below 0 and alpfabetical chars." << std::endl;
        exit(-1);
    }
}

void fillVectorByText(std::vector<NotLearning>& newClass, const int TotalStudent)
{

    FILE* FileHandler[5];
    const char* FileNames[] = { "143", "430", "691", "800", "1053" };

    for (int i = 0; i < TotalStudent; i++)
    {
        NotLearning newStudent;
        newClass.push_back(newStudent);
    }

    double tempAverages = .0;
    char tempNames[20] = " ";
    char tempSurnames[20] = " ";;
    char tempCity[20] = " ";;
    int tempDay = 0;
    char tempMonth[20] = " ";;
    int tempYear = 0;

    for (int i = 0; i < 5; i++)
    {
        FileHandler[i] = fopen(FileNames[i], "r");
        if (!FileHandler[i])
        {
            std::cout << "Failed to open the file. Name: " << FileNames[i] << std::endl;
        }
        else
        {
            if (fscanf(FileHandler[i], "%lf %s %s %s %d %s %d", &tempAverages, tempNames, tempSurnames, tempCity, &tempDay, tempMonth, &tempYear)) {}
            newClass[i].setAverage(tempAverages);
            newClass[i].setName(tempNames);
            newClass[i].setSurname(tempSurnames);
            newClass[i].setCity(tempCity);
            newClass[i].setDates(tempYear, tempMonth, tempDay);
            fclose(FileHandler[i]);
        }
    }
}

void showVector(const std::vector<NotLearning>& newClass)
{
    size_t size = newClass.size();
    std::cout << "Total size of vector: " << size << std::endl;
    std::cout << "Total capacity of vector: " << newClass.capacity() << std::endl;
    std::cout << "             ID   Average Name       Surname    City            Day Month    Year" << std::endl;
    for (size_t i = 0; i < size; i++)
    {
        std::cout << "Person:" << std::left << std::setw(2) << i << " => " << std::flush;
        std::cout << std::left << std::setw(4) << newClass[i].getID() << " " << std::flush;
        std::cout << std::left << std::setw(7) << std::setprecision(2) << newClass[i].getAverage() << " " << std::flush;
        std::cout << std::left << std::setw(10) << newClass[i].getName() << " " << std::flush;
        std::cout << std::left << std::setw(10) << newClass[i].getSurname() << " " << std::flush;
        std::cout << std::left << std::setw(15) << newClass[i].getCity() << " " << std::flush;
        std::cout << std::left << std::setw(3) << newClass[i].getDay() << " " << std::flush;
        std::cout << std::left << std::setw(8) << newClass[i].getMonth() << " " << std::flush;
        std::cout << std::left << std::setw(4) << newClass[i].getYear() << " " << std::flush;
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void saveVector(const std::vector<NotLearning>& newClass)
{
    std::vector<std::string> FileNames;
    for (unsigned int i = 0; i < 5; i++)
    {
        FileNames.push_back(std::to_string(newClass[i].getID()));
    }

    for (unsigned int i = 0; i < FileNames.size(); i++)
    {
        std::ofstream FileHandler;
        FileHandler.open(FileNames[i]);
        FileHandler << newClass[i].getAverage() << " " << newClass[i].getName() << " " << newClass[i].getSurname() << " " << newClass[i].getCity() << " " << newClass[i].getDay() << " " << newClass[i].getMonth() << " " << " " << newClass[i].getYear() << " " << std::endl;
        FileHandler.close();
    }
}

void copyVector(const std::vector<NotLearning>& newClass, std::vector<NotLearning>& myNewClass)
{
    myNewClass.assign(newClass.begin(), newClass.end());
}

bool cmp_by_id(const NotLearning& one, const NotLearning& two) // compare classes inside the vector by checking the member of "ID".
{
    return one.getID() < two.getID();
}

bool cmp_by_average(const NotLearning& one, const NotLearning& two) // compare classes inside the vector by checking the member of "ID".
{
    return (one.getAverage() < two.getAverage());
}

bool cmp_by_name(const NotLearning& one, const NotLearning& two) // compare classes inside the vector by checking the member of "ID".
{
    return one.getName() < two.getName();
}

bool cmp_by_surname(const NotLearning& one, const NotLearning& two) // compare classes inside the vector by checking the member of "ID".
{
    return one.getSurname() < two.getSurname();
}

bool cmp_by_city(const NotLearning& one, const NotLearning& two) // compare classes inside the vector by checking the member of "ID".
{
    return one.getCity() < two.getCity();
}

bool cmp_by_day(const NotLearning& one, const NotLearning& two) // compare classes inside the vector by checking the member of "ID".
{
    return one.getDay() < two.getDay();
}

bool cmp_by_month(const NotLearning& one, const NotLearning& two) // compare classes inside the vector by checking the member of "month".
{
    return one.getMonth() < two.getMonth();
}

bool cmp_by_year(const NotLearning& one, const NotLearning& two) // compare classes inside the vector by checking the member of "year".
{
    return one.getYear() < two.getYear();
}

bool cmp_by_detail(const NotLearning& one, const NotLearning& two) // compare classes inside the vector by checking the member of "ID", then "average", etc...
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

void sortVectorByID(std::vector<NotLearning>& newClass)
{
    //std::sort(newClass.begin(), newClass.end(), [](NotLearning& one, NotLearning& two) { return one.getID() < two.getID(); });
    std::sort(newClass.begin(), newClass.end(), cmp_by_id);
}

void sortVectorByAverage(std::vector<NotLearning>& newClass)
{
    //std::sort(newClass.begin(), newClass.end(), [](NotLearning& one, NotLearning& two) { return one.getAverage() < two.getAverage(); });
    std::sort(newClass.begin(), newClass.end(), cmp_by_average);
}

void sortVectorByName(std::vector<NotLearning>& newClass)
{
    //std::sort(newClass.begin(), newClass.end(), [](NotLearning& one, NotLearning& two) { return one.getName() < two.getName(); });
    std::sort(newClass.begin(), newClass.end(), cmp_by_name);

}

void sortVectorBySurname(std::vector<NotLearning>& newClass)
{
    //std::sort(newClass.begin(), newClass.end(), [](NotLearning& one, NotLearning& two) { return one.getSurname() < two.getSurname(); });
    std::sort(newClass.begin(), newClass.end(), cmp_by_surname);

}

void sortVectorByCity(std::vector<NotLearning>& newClass)
{
    //std::sort(newClass.begin(), newClass.end(), [](NotLearning& one, NotLearning& two) { return one.getCity() < two.getCity(); });
    std::sort(newClass.begin(), newClass.end(), cmp_by_city);

}

void sortVectorByDay(std::vector<NotLearning>& newClass)
{
    //std::sort(newClass.begin(), newClass.end(), [](NotLearning& one, NotLearning& two) { return one.getDay() < two.getDay(); });
    std::sort(newClass.begin(), newClass.end(), cmp_by_day);

}

void sortVectorByMonth(std::vector<NotLearning>& newClass)
{
    //std::sort(newClass.begin(), newClass.end(), [](NotLearning& one, NotLearning& two) { return one.getMonth() < two.getMonth(); });
    std::sort(newClass.begin(), newClass.end(), cmp_by_month);

}

void sortVectorByYear(std::vector<NotLearning>& newClass)
{
    //std::sort(newClass.begin(), newClass.end(), [](NotLearning& one, NotLearning& two) { return one.getYear() < two.getYear(); });
    std::sort(newClass.begin(), newClass.end(), cmp_by_year);

}

void sortVectorByDetail(std::vector<NotLearning>& newClass)
{
    //std::sort(newClass.begin(), newClass.end(), [](NotLearning& one, NotLearning& two) { return one.getYear() < two.getYear(); });
    std::sort(newClass.begin(), newClass.end(), cmp_by_detail);
}
