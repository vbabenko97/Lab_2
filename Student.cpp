#include "Student.h"
#include <iostream>

void Student::set_surname(const std::string& cur_s)
{
	surname = cur_s;
}

void Student::set_name(const std::string& cur_n)
{
	name = cur_n;
}

void Student::set_patronymic(const std::string& cur_pat)
{
	patronymic = cur_pat;
}

void Student::set_bday(int cur_bd)
{
	b_day = cur_bd;
}

void Student::set_bmonth(int cur_bm)
{
	b_month = cur_bm;
}

void Student::set_byear(int cur_by)
{
	b_year = cur_by;
}

void Student::set_birthday(int cur_bd, int cur_bm, int cur_by)
{
	b_day = cur_bd;
	b_month = cur_bm;
	b_year = cur_by;
}

void Student::set_address(const std::string& cur_a)
{
	address = cur_a;
}

void Student::set_phone(const std::string& cur_ph)
{
	phone = cur_ph;
}

void Student::set_faculty(const std::string& cur_f)
{
	faculty = cur_f;
}

void Student::set_course(int cur_c)
{
	course = cur_c;
}

void Student::show() const
{	
	std::cout << "Surname: " << surname << std::endl
		<< "Name: " << name << std::endl
		<< "Patronymic: " << patronymic << std::endl
		<< "Date of birth: " << b_day << "." << b_month << "." << b_year << std::endl
		<< "Address: " << address << std::endl
		<< "Number of phone: " << phone << std::endl
		<< "Faculty: " << faculty << std::endl
		<< "Course: " << course << std::endl << std::endl;
}
const Student& Student::compare(const Student& st) const
{
	return (st.b_year < this->b_year) ? st : *this;
}
