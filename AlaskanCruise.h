#ifndef ALASKAN_CRUISE_H
#define ALASKAN_CRUISE_H
#include "Date.h"



class AlaskanCruise
{
private:
	//constants
	const double FARE_SEVEN = 1999.00;
	const double FARE_NINE = 2539.00;
	const double DISCOUNT_PERCENT = .60;
	const int DAYS_TO_DEPART_REQD = 90;
	const int DAYS_YEAR = 365;

	string reservation;	//passenger name for this reservation
	string dateString;  //string containing all of the information, has error string if bValidDate is false
	int numberOfPass{ 1 };	//number of passengers booked under this res 1 or 2
	Date book, dep;	 //pertinent dated
	bool bValidInput{ false }, bWrite{ false }; //whether date input is valid and whether file was written
	double fare{ 1.0 };	//Calculated based on user input, does not include excursions
	int numDaysToDepart{ 1 };  //number of days between booking and departure
	int numberDaysCruise{ 7 }, numberOfExcursions{ 0 }; //length of the cruise,    									   //and number of excursions	
	static int resNumber;	//declare the static variable
	string filename;		//filename of reservation confirmation

	void CalculateFare();
	void IsValidInput();
	void WriteReservationDescription();	//Creates the reservation summary and assigns it into dateString
public:
	AlaskanCruise() = default;
	AlaskanCruise(string resName, int numPass, int numDays, int numEx, const Date& booking, const Date& departure);
	void SetNumberOfPass(int n) { numberOfPass = n; }	//how many people?		
	void SetDates(const Date& bk, const Date& dpt);
	void SetReservationName(string name) { reservation = name; }
	void SetCruiseLength(int len) { numberDaysCruise = len; }	


	double GetTotalFare()const { return fare; }
	string GetFilename()const { return filename; }
	string PresentCruiseInfo();


	bool WriteReservationConfirmation(string& filename);  //Creates filename, calls WriteReservationDescription() and writes the confirmation to a file.

	string GetReservationConfirmation()const { return dateString; }
};

#endif

