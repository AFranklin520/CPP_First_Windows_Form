//Anthony Franklin
//afranklin18@cnm.edu
//FranklinP7
//11/18/2021
// 
//AlaskanCruise.cpp

#include "AlaskanCruise.h"
#include <fstream>
#include <sstream>
#include <iomanip>

int AlaskanCruise::resNumber{ 0 };
void AlaskanCruise::CalculateFare()
{
	//Calc days to dep
	numDaysToDepart = dep - book;
	if (numberDaysCruise == 7)
		fare = fare *= FARE_SEVEN;
	else
		fare = fare *= FARE_NINE;
	fare *= numberOfPass;
	//Apply discount if relevant
	if (DAYS_TO_DEPART_REQD >= numDaysToDepart)
		fare -= (fare *DISCOUNT_PERCENT);
	fare += numberOfExcursions * 325;
}

void AlaskanCruise::IsValidInput()
{
	if (!((book < dep) && (dep.GetYear() == 2022 || dep.GetYear() == 2023)))
	{
		if (!(book < dep))
			dateString = "ERROR! YOU MUST CHOOSE A DEPARTURE DATE LATER \nTHAN TODAY!";

		if (!(dep.GetYear() == 2022 || dep.GetYear() == 2023))
			dateString = "ERROR! YOU MAY ONLY BOOK DURING THE CURRENT \nAND FOLLOWING CALENDAR YEAR!\nPlease try again";
	}
	else
		bValidInput = true;	
}

void AlaskanCruise::WriteReservationDescription()
{
	//Creating stringstream so that we can convert fare to string with precision of 2 places
	stringstream ss;
	ss << setprecision(2) << fixed << fare;
	string newFare = ss.str();
	dateString = reservation + " reservation confirmation.\nYour reservation number is : " + to_string(resNumber) + "\nGuests: " + to_string(numberOfPass) +"\nLength of cruise: "+ to_string(numberDaysCruise) + " days\nBooking Date: " + book.GetFormattedDate() + "\nDeparture Date: " + dep.GetFormattedDate() + "\nExcursions: " + to_string(numberOfExcursions) + "\nTotal Cost: $" + newFare +"\nTHANK YOU FOR CHOOSING C++ CRUISE LINE!!\nConfirmation written to\n the following file: " + filename;
}

AlaskanCruise::AlaskanCruise(string resName, int numPass, int numDays, int numEx, const Date& booking, const Date& departure):
	reservation(resName), numberOfPass(numPass), numberDaysCruise(numDays), numberOfExcursions(numEx),
	book(booking), dep(departure)
{
		IsValidInput();
		if (bValidInput)
		{
			CalculateFare();
			if(WriteReservationConfirmation(filename))
				resNumber += 1;
		}
		
}

void AlaskanCruise::SetDates(const Date& bk, const Date& dpt)
{
	//Setting dates if object created with deaults
	book = bk;
	IsValidInput();
	if (bValidInput)
		dep = dpt;
	else
		GetReservationConfirmation();
}

string AlaskanCruise::PresentCruiseInfo()
{
	return "7-day and 9-day Alaskan Voyages!!\nInside Passage Cruises roundtrip from Vancouver, BC to Skagway, AK\nThe 7 - day cruise  stops at the Twin Sawyer Glaciers, in Skagway, Juneauand Ketchikan, Alaska\nThe 9 - day cruise adds the ports of Sitka, and Prince Rupert\n7-Day Cruise: $1,999.00 per person				9-Day Cruise: $2,539.00 per person\n*60% DISCOUNT FOR TRIPS BOOKED WITHIN 90 DAYS OF DEPARTURE\n**Excursions available at each port for $325/person";	
}

bool AlaskanCruise::WriteReservationConfirmation(string& filename)
{
	
	if (bValidInput)
	{
		filename = reservation + to_string(resNumber) + ".txt";
		WriteReservationDescription();
		ofstream myfile;
		myfile.open(filename);
		myfile << dateString;
		if (myfile.is_open())
			return true;
		else
			return false;
		myfile.close();
	}
	else
		return false;
}
