/*
 * kevin semenov
 * assignment 2
 * due 9/12/16
 */
#include "Date.h"
/*************************************************************************
 * CONSTRUCTOR Date()
 *------------------------------------------------------------------------
 *   This CONSTRUCTOR gets the current system time and stores as a day,
 *   month , and year
 *------------------------------------------------------------------------
 *  PRE-CONDITIONS:
 *
 *  POST-CONDITIONS:
 *    initializes a Date object to the current date
 *************************************************************************/
Date :: Date()
{
	time_t now;
	tm     *currentTime;

	currentTime = NULL;

	now = time(NULL);
	currentTime = localtime(&now);

	dateDay   = currentTime        -> tm_mday;
	dateMonth = currentTime        -> tm_mon + 1;
	dateYear  = 1900 + currentTime -> tm_year;
}

/*************************************************************************
 * CONSTRUCTOR Date(unsigned short month,
 *                  unsigned short day,
 *                  unsigned short year)
 *------------------------------------------------------------------------
 *   This CONSTRUCTOR takes the user input, checks to see if it is valid,
 *   if it is not, it will set the Date object to the current time
 *------------------------------------------------------------------------
 *  PRE-CONDITIONS:
 *  	month : the month to be stored in the object
 *  	day	  : the day to be stored in the object
 *  	year  : the year to be stored in the object
 *
 *  POST-CONDITIONS:
 *    initializes a Date object to the stored info if it is valid
 *    	otherwise initializes a Date object to the current date
 *************************************************************************/
Date :: Date(unsigned short month,unsigned short day,unsigned short year)
{
	time_t now;
	tm     *currentTime;

	currentTime = NULL;

	now = time(NULL);
	currentTime = localtime(&now);

	if(ValidateMonth(month)
	   && ValidateYear(year)
	   && ValidateDay( month, day, year)
	   && ValidateDate(month, day ,year))
	{
		dateDay   = day;
		dateMonth = month;
		dateYear  = year;

	}
	else
	{
		dateDay   = currentTime        -> tm_mday;
		dateMonth = currentTime        -> tm_mon + 1;
		dateYear  = 1900 + currentTime -> tm_year;
	}

}

/*************************************************************************
 * Destructor ~Date()
 *------------------------------------------------------------------------
 *   This destructor does nothing inparticular
 *------------------------------------------------------------------------
 *  PRE-CONDITIONS:
 *
 *  POST-CONDITIONS:
 *  	does nothing
 *************************************************************************/
Date :: ~Date()
{

}
/*************************************************************************
 * Method SetDate: Class Date
 *------------------------------------------------------------------------
 *   This method checks the month day and year if its valid and then stores
 *   it into day , month , and year
 *------------------------------------------------------------------------
 *  PRE-CONDITIONS:
 *  month
 *  day
 *  year
 *
 *  POST-CONDITIONS:
 *    This method will set the date
 *************************************************************************/
void Date :: SetDate(unsigned short month,
		             unsigned short day,
			         unsigned short year)
{

	if(   ValidateMonth(month)
	   && ValidateYear(year)
	   && ValidateDay( month, day, year)
	   && ValidateDate(month, day ,year))
		{
			dateDay   = day;
			dateMonth = month;
			dateYear  = year;
		}
}


/*************************************************************************
 * Accessor GetDate: Class Date
 *------------------------------------------------------------------------
 *   This Accessor returns month , day and year
 *------------------------------------------------------------------------
 *  PRE-CONDITIONS:
 *  month : dummy variable to return the month
 *  day   : dummy variable to return the day
 *  year  : dummy variable to return the year
 *
 *  POST-CONDITIONS:
 *    This method return the day month and year by reference
 *************************************************************************/
void Date :: GetDate(unsigned short &month,
		             unsigned short &day,
		             unsigned short &year) const
{

	month = dateMonth;
	day   = dateDay;
	year  = dateYear;
}

/*************************************************************************
 * Accessor GetYear: Class Date
 *------------------------------------------------------------------------
 *   This Accessor returns dateYear to the calling function
 *------------------------------------------------------------------------
 *  PRE-CONDITIONS:
 *  none
 *
 *  POST-CONDITIONS:
 *    This method will returns the year
 *************************************************************************/
unsigned short Date :: GetYear() const
{
	return dateYear;
}
/*************************************************************************
 * Accessor GetMonth: Class Date
 *------------------------------------------------------------------------
 *   This Accessor returns dateMonth to the calling function
 *------------------------------------------------------------------------
 *  PRE-CONDITIONS:
 *
 *  POST-CONDITIONS:
 *    This method will retrun the month
 *************************************************************************/
unsigned short Date :: GetMonth() const
{
	return dateMonth;
}
/*************************************************************************
 * Accessor GetDay: Class Date
 *------------------------------------------------------------------------
 *   This Accessor returns dateDays
 *------------------------------------------------------------------------
 *  PRE-CONDITIONS:
 *
 *  POST-CONDITIONS:
 *    This method retruns dateDay
 *************************************************************************/
unsigned short Date :: GetDay() const
{
	return dateDay;
}
/*************************************************************************
 * Accessor DisplayDate: Class Date
 *------------------------------------------------------------------------
 *   This Accessor checks if the date is two chars if not will add a zero
 *   infront of the date and then stroes it into dateLine.
 *------------------------------------------------------------------------
 *  PRE-CONDITIONS:

 *
 *  POST-CONDITIONS:
 *    returns dateLine as a string
 *************************************************************************/
string Date :: DisplayDate() const
{
	ostringstream dateLine;

	if(dateMonth < 10)
	{
		dateLine << '0' << dateMonth;
	}
	else
	{
		dateLine << dateMonth;
	}

	dateLine << '/';

	if(dateDay < 10)
	{
		dateLine << '0' << dateDay;
	}
	else
	{
		dateLine << dateDay;
	}

	dateLine << '/';

	dateLine << dateYear;

	return dateLine.str();
}
/*************************************************************************
 * Method GetDaysInMonth: Class Date
 *------------------------------------------------------------------------
 *   This method takes the month and year in as input, it will calculate
 *   the number of days in the current month it will call the IsLeapYear
 *   method if the month input is February
 *------------------------------------------------------------------------
 *  PRE-CONDITIONS:
 *
 *    month : user input month
 *    year  : user input year
 *
 *  POST-CONDITIONS:
 *    This method will return the number of days in the input month
 *************************************************************************/
unsigned short Date::GetDaysInMonth
					(unsigned short month,		// IN - user input year
					 unsigned short year) const // IN - user input year
{
	unsigned short daysInMonth;

	if(month == 2)
	{
		if(IsLeapYear(year))
		{
			daysInMonth = 29;
		}
		else
		{
			daysInMonth = 28;
		}
	}
	else if(month == 4 ||
			month == 6 ||
			month == 9 ||
			month == 11 )
	{
		daysInMonth = 30;
	}
	else
	{
		daysInMonth = 31;
	}
	return daysInMonth;
}

/*************************************************************************
 * Method IsLeapYear: Class Date
 *------------------------------------------------------------------------
 *   This method takes the year as input, and checks if its a leap year,
 *   every 4th year is a leap year, unless its a 100th year, but is a leap
 *   year every 400 years
 *------------------------------------------------------------------------
 *  PRE-CONDITIONS:
 *    year  : user input year
 *
 *  POST-CONDITIONS:
 *    Returns a bool, true if leap year false if not
 *************************************************************************/
bool Date::IsLeapYear(unsigned short year) const // IN - year to check
{
	return year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);
}
/*************************************************************************
 * Method ValidateMonth: Class Date
 *------------------------------------------------------------------------
 *   This method checks the month day and year if its valid and then stores
 *   it into day , month , and year
 *------------------------------------------------------------------------
 *  PRE-CONDITIONS:
 *  month
 *  day
 *  year
 *
 *  POST-CONDITIONS:
 *   This method retruns a bool
 *************************************************************************/
bool Date :: ValidateMonth(unsigned short month) const
{
	return month >= 1 && month <= 12;
}
/*************************************************************************
 * Method ValidateDay: Class Date
 *------------------------------------------------------------------------
 *   This method checks the month, day , yeear to check for the users \
 *   input for the day and then
 *------------------------------------------------------------------------
 *  PRE-CONDITIONS:
 *  month
 *  day
 *  year
 *
 *  POST-CONDITIONS:
 *    This method retruns a bool
 *************************************************************************/
bool Date :: ValidateDay(unsigned short month,
						 unsigned short day,
						 unsigned short year) const
{
	unsigned short maxDays;

	maxDays = GetDaysInMonth(month, year);

	return day >= 1 && day <= maxDays;
}
/*************************************************************************
 * Method SetDate: Class Date
 *------------------------------------------------------------------------
 *   This method checks the users input for the year
 *------------------------------------------------------------------------
 *  PRE-CONDITIONS:
 *  month
 *  day
 *  year
 *
 *  POST-CONDITIONS:
 *    This method retruns a bool
 *************************************************************************/
bool Date :: ValidateYear(unsigned short year) const
{
	Date today;

	return year >= 1900 && year <= today.dateYear;
}
/*************************************************************************
 * Method ValidateDate: Class Date
 *------------------------------------------------------------------------
 *   This method checks the year month and day to the current date
 *------------------------------------------------------------------------
 *  PRE-CONDITIONS:
 *  month
 *  day
 *  year
 *
 *  POST-CONDITIONS:
 *    This method retruns a bool
 *************************************************************************/
bool Date :: ValidateDate(unsigned short month,
				  unsigned short day,
				  unsigned short year) const
{
	Date today;
	bool valid;

	valid = false;

	if(year == today.dateYear)
	{
		if(month == today.dateMonth)
		{
			if(day <= today.dateDay)
			{
				valid = true;
			}
		}
		else if(month < today.dateMonth)
		{
			valid = true;
		}
	}
	else if(year < today.dateYear)
	{
		valid = true;
	}

	return valid;
}
