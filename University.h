#ifndef University_h
#define University_h
#include "Student.h"
#include <memory>
#include <string>
#include <vector>

class University {
private:
	std::vector<std::unique_ptr<Student>> students;
	std::size_t size; 
	std::size_t count;
public:
	explicit University(int);
	~University();
	void add(const std::string&, const std::string&, const std::string&, int, int, int, const std::string&,
		const std::string&, const std::string&, int);
	void remove();
	void show();
	void check_by_faculty(const std::string&);
	void list_of_students();
	void check_by_year(int);
	void compare();
};

#endif 
