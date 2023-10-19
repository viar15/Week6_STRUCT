#include <iostream>
using namespace std;
// abi's program
struct Zodiac
{
    string zodiacName;
    int startDay;
    int startMonth;
    int endDay;
    int endMonth;
};

Zodiac zodiacs[]{
    {"aries", 21, 3, 19, 4},
    {"taurus", 20, 4, 20, 5},
    {"gemini", 21, 5, 20, 6},
    {"cancer", 21, 6, 22, 7},
    {"leo", 23, 7, 22, 8},
    {"virgo", 23, 8, 22, 9},
    {"libra", 23, 9, 22, 10},
    {"scorpio", 23, 10, 21, 11},
    {"sagitarius", 22, 11, 21, 12},
    {"capricorn", 22, 12, 19, 1},
    {"aquarius", 20, 1, 18, 2},
    {"pisces", 19, 2, 20, 3}

};

int main()
{
    int day;
    int month;

    cout << "enter your birth date  : " << endl;
    cout << "day (1-31) : ";
    cin >> day;
    cout << "month (1-12) : ";
    cin >> month;

    if (month > 12 || day > 31)
    {
        cout << "invalid date format, program closes";
        return 0;
    }

    string UserZodiac;
    for (int i = 0; i < sizeof(zodiacs) / sizeof(zodiacs[0]); i++)
    {
        if (day >= zodiacs[i].startDay && month == zodiacs[i].startMonth || day <= zodiacs[i].endDay && month == zodiacs[i].endMonth)
        {
            UserZodiac = zodiacs[i].zodiacName;
            break;
        }
    }

    cout << "your zodiac sign is : " << UserZodiac;
}
