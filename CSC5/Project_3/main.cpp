/**************************************************************************
 * AUTHOR 		: Wilman Garcia 										  *
 * STUDENT ID 	: 2611300  												  *
 * LAB #1 		: Eclipse Lab 										      *
 * CLASS 		: CSC5 													  *
 * SECTION 		: TTh 6PM - 9:10PM 										  *
 * DUE DATE 	: 9/3/2015 										 		  *
 *************************************************************************/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
/*************************************************************************
 *
 * CALCULATE CATALOG SALES INVOICE
 * _______________________________________________________________________
 * This program uses a function named GetSalesInfo to prompt and gather
 * the users account number, date of sale, county code ('O',''S', or 'L')
 * , the total sale amount (before tax) and the shipping weight. Then the
 * program calculates the users appropriate discount based on their date
 * of sale, sales tax based off the county code entered, and shipping
 * based off the weight entered. Then the program displays the users final
 * invoice with all the appropriate calculations.
 *
 * Computations are based on the formula
 * total = preSales - discount + salesTax + shipping
 *________________________________________________________________________
 * INPUT
 * 	acctNum			: The users account number
 * 	month			: The month of the sale
 * 	day				: The day of the sale
 * 	year			: The year of the sale
 * 	county			: The users county code
 * 	preSales		: The users sales total before tax
 * 	weight			: The weight of the users catalog order.
 *
 * OUTPUT
 * 	discount		: The discount the user receives
 * 	label			: The label for  the users county code
 * 	shipping		: The final cost of shipping
 * 	total			: The users final total
 ************************************************************************/
/*************************************************************************
 * ClassHeader
 * This void function takes the programmers information and outputs it in
 * a block wherever this function is called.
 ************************************************************************/
void  ClassHeader();
/*************************************************************************
 * GetSalesInfo
 * This void function prompts and gathers input from the user. It gathers
 * the users account number, date of sale, county code, the total sale
 * amount and the shipping weight. Using the '&' the function passes the
 * values by reference, there for returning these inputs to the calling
 * function.
 ************************************************************************/
void GetSalesInfo(	int&refAcct, 		//Account Number
					int&month,			//Month
					int&day,			//Day
					int&year, 			//Year
					char&county, 		//County
					string&label,		//County Label
					float&preSales, 	//Presales
					int&weight			//Weight
					);
/*************************************************************************
 * CalcDiscount
 * This value returning function calculates the users discount by using
 * arguments of month and preSales which are passed to the parameters
 * userMonth and userSales. If the userMonth is greater than or equal to 1
 * and less than or equal to 5 the userSales is multiplied by .05. If
 * userMonth is greater than or equal to 6 and less than or equal to 8 the
 * userSales is multiplied by .10. If the userMonth does not match either
 * of those the userSsales is multiplied by .15. After calculating the
 * discount the function returns a float value called discount back to the
 * main.
 ************************************************************************/
float CalcDiscount (int userMonth,		//The month of the sale
					float userSales		//The presale amount
					);
/*************************************************************************
 * CalcSalesTax
 * This value returning function calculates the users sales tax by using
 * the arguments county, preSales, and discount. These arguments are
 * passed to the parameters userCounty, userSales, and userDiscount.
 * If the user had input the userCounty 'O' userSales is multiplied by
 * .0075. If the user had input the userCounty 'S' userSales is
 * multiplied by .0825. If the user had input the userCounty 'L' userSales
 * is multiplied by .08. Once the sales tax is calculated userSalesTax is
 * which is a float value is returned back to the main.
 ************************************************************************/
float CalcSalesTax (char userCounty, 	//County code
					float userSales,	//User sales amount
					float userDiscount	//Discount
					);
/*************************************************************************
 * CalcShipping
 * This value returning function calculates the users shipping total by
 * using the argument weight which is passed to the parameter userWeight.
 * If userWeight is less than or equal to 25 finalShipping is 5. If
 * userWeight is greater than 25 the formula is (userWeight - 25) * .1 +5.
 * If user is greater than 50 the formula is finalShipping = 25 * 0.1
 * finalShipping += (userWeight - 50) * .07 +5. Once finalShipping has
 * been calculated finalShipping is returned back to the main as a float.
 ************************************************************************/
float CalcShipping (int userWeight		//Weight of order
					);
/*************************************************************************
 * OutputInvoice
 * This void function displays the final invoice for the users catalog
 * order by passing the arguments preSales, discount, salesTax, shipping,
 * label, and total to the parameters sales, discount, tax, shipping, label
 * , and total. It displays and formats the invoice in a neatly fashion.
 ************************************************************************/
void OutputInvoice (float sales,		//Sales amount
					float discount, 	//Discount
					float tax, 			//Sales tax
					float shipping,		//Shipping cost
					string label,		//County label
					float total			//Sales total
					);
int acctNum;							//INPUT - Account number
int month;								//INPUT - Sales month
int day;								//INPUT - Sales day
int year;								//INPUT - Sales year
char county;							//INPUT - County code
float preSales;							//INPUT - User sales amount
int weight;								//INPUT - Weight of sale
string label;							//OUTPUT - County label
float discount;							//OUTPUT - Users discount
float salesTax;							//OUTPUT- Users sales tax
float shipping;							//OUTPUT- Users shipping cost
float total;							//OUTPUT - Users final total
int count;								//CALC - Loop control variable

int main ()
{
	//Calls the ClassHeader function
	ClassHeader();

	//Formula for the loop
	for (count = 1; count <= 3; count++)
	{
		//Calls the GetSalesInfo function and passes arguments
		GetSalesInfo(acctNum, month,day,year,county,label,preSales,weight);

		//Calls the CalcDiscount function and passes arguments
		discount = CalcDiscount(month, preSales);

		//Calls the CalcSalesTax function and passes arguments
		salesTax = CalcSalesTax(county, preSales, discount);

		//Calls the CalcShipping function and passes an argument
		shipping = CalcShipping (weight);

		//Calculates the users final total
		total = preSales - discount + salesTax + shipping;

		//Calls the OutputInvoice function and passes arguments
		OutputInvoice(preSales, discount, salesTax, shipping, label,total);
	}
return 0;
}
/*************************************************************************
 * void GetSalesInfo
 * This function will prompt the user to enter their account number, date
 * of the sale, their county code, sales amount, and order weight. This
 * function will also validate for a proper county code.
 ************************************************************************/
void GetSalesInfo (int &refAcct, int &refMonth, int &refDay, int &refYear,
			char &refCode, string &refLabel,float &refSales,int &refWeight)
{
	//Prompt the user and gather input
	cout << "Please Enter your Account Number: ";
	cin >> refAcct;
	cout <<  "Please Enter the Sales Date." << endl;
	cout << "Enter Month: ";
	cin >> refMonth;
	cout << "Enter Day: ";
	cin >> refDay;
	cout << "Enter Year: ";
	cin >> refYear;
	cout << "Please Enter County Code: ";
	cin >> refCode;
	switch (refCode)	//Assign county code with label
	{
	case 'o':
	case 'O': refLabel = "Orange County";
		break;
	case 's':
	case 'S': refLabel = "San Diego County";
		break;
	case 'l':
	case 'L': refLabel = "Los Angeles County";
		break;
	default: cout << "Please enter a valid county code";
			 cin >> refCode;
	}

	cout<< "Please Enter the Sales Amount: ";
	cin >> refSales;
	cout << "Please Enter the Weight: ";
	cin >> refWeight;
}
/*************************************************************************
 * CalcDiscount
 * This function will return a float value named finalDiscount. The value
 * of finalDiscount depends on the vale of userMonth.
 ************************************************************************/
float CalcDiscount (int userMonth, float userSales)
{
	float finalDiscount; //Defines special variable for the return value

	//Discount if month is between January and May
	if (userMonth >= 1 && userMonth <= 5)
	{
		finalDiscount = userSales * .05;
	}
	//Discount if month is between June and August
	else if (userMonth >= 6 && userMonth <= 8)
	{
		finalDiscount = userSales * .10;
	}
	//Discount if month is neither of the above
	else
		finalDiscount = userSales * .15;

	return finalDiscount;
}
/*************************************************************************
 * CalcSalesTax
 * This function will calculate the user sales tax depending on the county
 * code that the user has entered. Once the sales tax has been calculated
 * a float valued named userSalesTax will be returned back to main.
 ************************************************************************/
float CalcSalesTax (char userCounty, float userSales, float userDiscount)
{
	float userSalesTax;	//Defines special variable for the return value

	//Determines what the sales tax is going to be
	switch (userCounty)
	{
	//Sales tax if county code O was entered
	case 'o':
	case 'O': userSalesTax = (userSales - discount) * .0775;
		break;
	//Sales tax if county code S was entered
	case 's':
	case 'S': userSalesTax = (userSales - discount) * .0825;
		break;
	//Sales tax if county code L was entered
	case 'l':
	case 'L': userSalesTax = (userSales - discount) * .08;
	}
	return userSalesTax;	//Returns the userSalesTax value
}
/*************************************************************************
 * CalcShipping
 * This function will calculate the users shipping cost depending on the
 * weight that the user has entered. Once the shipping cost has been
 * calculated the float value named finalShipping will be returned back
 * to the main.
 ************************************************************************/
float CalcShipping (int userWeight)
{
	float finalShipping; //Defines special variable for the return value

	//Shipping cost if order weighs is less than 25
	if (userWeight <= 25)
	{
		finalShipping = 5;
	}
	//Shipping cost if order weighs more than 25 and less than 51
	else if (userWeight >= 26 && userWeight <= 50)
	{
		finalShipping = (userWeight - 25) * .1 +5;
	}
	//Determines the shipping cost if neither of the above is true
	else {
		finalShipping = 25 * 0.1;
		finalShipping += (userWeight - 50) * .07 +5;
	}
	return finalShipping;	//Returns the finalShippign value
}
/*************************************************************************
 * OutputInvoice
 * This function will display the final output. It will display and format
 * the final invoice using the input the user has input and using the
 * calculations the other functions have  done.
 ************************************************************************/
void OutputInvoice (float sales, float discount, float tax, float shipping,
		string label, float total)
{
	//Outputs the invoice
	cout << "\nACCOUNT NUMBER" << setw(32) << "COUNTY" << endl;
	cout << setw(9) << acctNum << setw(41) << label;
	cout << endl << endl;				//Formatting
	cout << "DATE OF SALE:";
	cout <<setw(2)<< month << "/" << day << "/" << year << endl;
	cout << endl << endl;				//Formatting
	cout << fixed << setprecision(2);	//Formatting
	cout << "SALE AMOUNT:" << setw(8) << "$" << setw(8) << preSales;
	cout << endl;						//Formatting
	cout << "DISCOUNT:" << setw(11) << "$" << setw(8) << discount << endl;
	cout << "SALES TAX:" << setw(10) <<"$" << setw(8) << tax << endl;
	cout << "SHIPPING:" << setw(11) << "$" << setw(8) << shipping << endl;
	cout << "TOTAL DUE:" <<setw(10) << "$" << setw(8) << total;
	cout << endl << endl << endl;		//Formatting
}
/*************************************************************************
 * ClassHeader
 * This function displays the class header with all the programmers
 * information and all of the class information.
 ************************************************************************/
void ClassHeader()
{
cout << left;
cout << "**************************************************";
cout << "\n* PROGRAMMED BY : " << "Wilman Garcia";
cout << "\n* " << setw(14) << "CLASS" << ": " << "CSC5";
cout << "\n* " << setw(14) << "SECTION" << ": " << "TTh 6PM - 9:10PM";
cout << "\n* " << setw(14) << "ASSIGNMENT #3" << ": " << "Functions";
cout << "\n**************************************************\n\n";
cout << right;
}
