#include "Student.h"
#include "University.h"

int main() 
{
	University KPI(5);
	KPI.add("Babenko","Vitalii","Olegovich",31,12,1997,"g. Vyshneve","+38000000000","FBME",2);
	KPI.add("Kovchak", "Olena", "Igoriva", 7, 8, 1998, "g. Vyshneve", "Unknown", "FIOT", 1);
	KPI.add("Polischuk", "Andrii", "Olegovich", 25, 12, 1997, "g. Vyshneve", "Unknown", "FIOT", 2);
	KPI.add("Solyarik", "Anton", "Sergiivich", 14, 3, 1998, "g. Kyiv", "Unknown", "FBME", 2);
	KPI.add("Merzoyan", "Artur", "Olexiivich", 30, 4, 1996, "g. Donetsk", "Unknown", "IEE", 3);
	KPI.add("Zelenskiy", "Volodymyr", "Yuriyovich", 1, 1, 2001, "g. Kriviy Rig", "Unknown", "IPSA", 6);
	KPI.add("Vakulenko", "Mariya", "Olexandrivna", 27, 9, 1997, "g. Kharkiv", "Unknown", "FBME", 1);
	KPI.show();
	KPI.check_by_faculty("FBME");
	KPI.check_by_year(1997);

	KPI.list_of_students();
	KPI.remove();
	KPI.show();
	KPI.compare();
	return 0;
}
