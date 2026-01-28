#include "University.h"
#include <iostream>

University::University(int size): students(static_cast<std::size_t>(size)), size(static_cast<std::size_t>(size)), count(0)
{
}

University::~University()
{
}

void University::show()
{
	std::cout << "List of students: " << std::endl;
	for (std::size_t i = 0; i < this->size; i++)
		if (this->students[i] != nullptr)
			this->students[i]->show();
}

void University::add(const std::string& cur_s, const std::string& cur_n, const std::string& cur_pat, int cur_bd,
	int cur_bm, int cur_by, const std::string& cur_a, const std::string& cur_ph, const std::string& cur_f, int cur_c)
{
	if (count >= size)
	{
			std::cout << "Cannot add more students: capacity reached." << std::endl;
		return;
	}
	for (std::size_t i = 0; i < size; i++)
	{
		if (students[i] == nullptr)
		{
			students[i] = std::unique_ptr<Student>(
				new Student(cur_s, cur_n, cur_pat, cur_bd, cur_bm, cur_by, cur_a, cur_ph, cur_f, cur_c));
			count++;
			break;
		}
	}
}

void University::remove()
{
	int index_input;
	std::cout << "Enter index of object, which you wanna remove: ";
	std::cin >> index_input;
	if (index_input < 0 || static_cast<std::size_t>(index_input) >= size || students[index_input] == nullptr)
	{
		std::cout << "Invalid index." << std::endl;
		return;
	}
	const std::size_t index = static_cast<std::size_t>(index_input);
	for (std::size_t i = index; i + 1 < size; i++)
	{
		students[i] = std::move(students[i + 1]);
	}
	students[size - 1].reset();
	count--;
	std::cout << std::endl;
}

void University::check_by_faculty(const std::string& faculty) 
{
	std::cout << "Students sorted by faculty " << faculty << ": " << std::endl;
	for (std::size_t i = 0; i < this->size; i++)
	{
		if (this->students[i] == nullptr)
			continue;
		if (this->students[i]->get_faculty() == faculty)
			this->students[i]->show();
	}
}

void University::list_of_students() 
{
	std::cout << "List of all students sorted by course and faculty: " << std::endl;
	for (std::size_t i = 0; i < this->size; i++)
	{
		if (this->students[i] == nullptr)
			continue;
		const int course = students[i]->get_course();
		std::cout << "Course " << course << ", ";
		std::cout << "faculty " << students[i]->get_faculty() << ": " << students[i]->get_surname() << " "
			<< students[i]->get_name() << " " << students[i]->get_patronymic() << ". ";
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void University::check_by_year(int year) 
{
	std::cout << "Students, born after " << year << ": " << std::endl;
	for (std::size_t i = 0; i < this->size; i++)
	{
		if (this->students[i] == nullptr)
			continue;
		if (year < this->students[i]->get_byear())
			this->students[i]->show();
	}
}
void University::compare() 
{
	std::cout << "Enter the indices of objects, which age you wanna compare: " << std::endl;
	int i, j;
	std::cin >> i;
	std::cin >> j;
	if (i < 0 || j < 0 || static_cast<std::size_t>(i) >= size || static_cast<std::size_t>(j) >= size)
	{
		std::cout << "Invalid indices." << std::endl;
		return;
	}
	if (students[i] == nullptr || students[j] == nullptr)
	{
		std::cout << "Invalid indices." << std::endl;
		return;
	}
	if (this->students[i]->get_byear() == this->students[j]->get_byear())
		std::cout << "These students are the same age" << std::endl;
	else
	{
		std::cout << "This student is older:" << std::endl;
		this->students[i]->compare(*this->students[j]).show();
	}
}
