#include "Student.h"
#include "University.h"

int main() 
{
	University KPI(5);
	KPI.add("Babenko","Vitaliy","Olegovich",31,12,1997,"g. Vishnevoe","+380635656379","FBMI",2);
	KPI.add("Kovchak", "Olena", "Igoriva", 7, 8, 1998, "g. Vishnevoe", "Unknown", "FIOT", 1);
	KPI.add("Polischuk", "Andrey", "Olegovich", 25, 12, 1997, "g. Vishnevoe", "Unknown", "FIOT", 2);
	KPI.add("Solyarik", "Anton", "Sergeevich", 14, 3, 1998, "g. Kiev", "Unknown", "FBMI", 2);
	KPI.add("Merzoyan", "Artur", "Alexeevich", 30, 4, 1996, "g. Donetsk", "Unknown", "IEE", 3);
	KPI.add("Zelenskiy", "Vladimir", "Yuriyovich", 1, 1, 2001, "g. Kriviy Rig", "Unknown", "IPSA", 6);
	KPI.add("Vakulenko", "Mariya", "Alexandrovna", 27, 9, 1997, "g. Kharkiv", "Unknown", "FBMI", 1);
	KPI.show();
	KPI.check_by_faculty("FBMI");
	KPI.check_by_year(1997);
	KPI.list_of_students();
	KPI.remove();
	KPI.show();
	KPI.compare();
	return 0;
}
