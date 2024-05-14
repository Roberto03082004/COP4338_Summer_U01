#include<stdio.h>

//For toupper function
#include<ctype.h>

//Basic Salary Designation
#define ceo_basicsalary 5000
#define cdo_basicsalary 4800
#define gm_basicsalary 3950
#define sm_basicsalary 3100
#define tech_basicsalary 2800
#define receptionist_basicsalary 1450
#define brm_basicsalary 1770

//Allowance Designation
#define houserent_allowance_rate 0.25
#define medical_allowance_rate 0.085
#define mileage_allowance_rate 0.037
#define utilities_allowance_rate 0.072

//Tax Rate Designation
#define tax_rate1 0.14
#define tax_rate2 0.12
#define tax_rate3 0.10
#define tax_rate4 0.08
#define tax_rate5 0.06

int main(){
	char designation_code;
	double basicsalary, houserent_allowance, medical_allowance, mileage_allowance, utilities_allowance;
	double gross_salary, net_salary, income_tax;
	char continueoption;

	do{

		//Code Designation Selection
		printf("Enter designation code: ");
		scanf(" %c", &designation_code);

		//Convert entered Designation Code to uppercase
		designation_code = toupper(designation_code);


		switch(designation_code){
			case 'C':
				basicsalary = ceo_basicsalary;
				break;
			case 'D':
				basicsalary = cdo_basicsalary;
				break;
			case 'M':
				basicsalary = gm_basicsalary;
				break;
			case 'S':
				basicsalary = sm_basicsalary;
				break;
			case 'T':
				basicsalary = tech_basicsalary;
				break;
			case 'R':
				basicsalary = receptionist_basicsalary;
				break;
			case 'B':
				basicsalary = brm_basicsalary;
				break;
			default:
				printf("Invalid designation code.\n");
				return 1;

		}

		//Allowance Calculation
		houserent_allowance = basicsalary * houserent_allowance_rate;
		medical_allowance = basicsalary * medical_allowance_rate;
		mileage_allowance = basicsalary * mileage_allowance_rate;
		utilities_allowance = basicsalary * utilities_allowance_rate;


		//Gross Salary Calculation
		gross_salary = basicsalary + houserent_allowance + medical_allowance + mileage_allowance + utilities_allowance;

		if(gross_salary > 5500)
			income_tax = gross_salary * tax_rate1;
		else if (gross_salary > 5000)
			income_tax = gross_salary * tax_rate2;
		else if (gross_salary > 4500)
			income_tax = gross_salary * tax_rate3;
		else if (gross_salary > 4000)
			income_tax = gross_salary * tax_rate4;
		else
			income_tax = gross_salary * tax_rate5;

		net_salary = gross_salary - income_tax;

		//Print Information
		printf("SALARY INFORMATION\n");
		printf("=========================\n");

		printf("%-30s: $%.2f\n", "Basic Salary", basicsalary);
		printf("%-30s: $%.2f\n", "House Rent Allowance", houserent_allowance);
		printf("%-30s: $%.2f\n", "Medical Allowance", medical_allowance);
		printf("%-30s: $%.2f\n", "Monthly Mileage Allowance", mileage_allowance);
		printf("%-30s: $%.2f\n", "Utilities Allowance", utilities_allowance);
		printf("%-30s: $%.2f\n", "Gross Salary", gross_salary);
		printf("%-30s: $%.2f\n", "Income Tax", income_tax);
		printf("%-30s: $%.2f\n", "Net Payable Salary", net_salary);

		printf("Do you want to continue? (y/n): ");
		scanf(" %c", &continueoption);

	} while (continueoption == 'y' || continueoption == 'Y');

	printf("Exited the program.\n");
	return 0;
}
