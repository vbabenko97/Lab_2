#ifndef Student_h
#define Student_h
//#include <string.h>
#include <string>

class Student {
private:
	std::string surname;
	std::string name;
	std::string patronymic;
	int b_day;
	int b_month;
	int b_year;
	std::string address;
	std::string phone;
	std::string faculty;
	int course;
public:
	Student(const std::string& cur_s, const std::string& cur_n, const std::string& cur_pat, int cur_bd, int cur_bm,
		int cur_by, const std::string& cur_a, const std::string& cur_ph, const std::string& cur_f, int cur_c)
		: surname(cur_s), name(cur_n), patronymic(cur_pat), b_day(cur_bd), b_month(cur_bm),
		b_year(cur_by),address(cur_a), phone(cur_ph), faculty(cur_f), course(cur_c)
	{
	};
	Student()
	{
	}
	~Student() 
	{
	};
	void set_surname(const std::string& s);
	void set_name(const std::string& n);
	void set_patronymic(const std::string& pat);
	void set_bday(int bd);
	void set_bmonth(int bm);
	void set_byear(int by);
	void set_birthday(int bd, int bm, int by);
	void set_address(const std::string& a);
	void set_phone(const std::string& ph);
	void set_faculty(const std::string& f);
	void set_course(int c);
	const std::string& get_surname() const 
	{ 
		return surname; 
	};
	const std::string& get_name() const 
	{ 
		return name; 
	};
	const std::string& get_patronymic() const 
	{ 
		return patronymic; 
	};
	int get_bday() const 
	{ 
		return b_day; 
	};
	int get_bmonth() const 
	{ 
		return b_month; 
	};
	int get_byear() const
	{
		return b_year;
	};
	const std::string& get_address() const
	{
		return address;
	};
	const std::string& get_phone() const
	{
		return phone;
	};
	const std::string& get_faculty() const
	{
		return faculty;
	};
	int get_course() const
	{
		return course;
	};
	void show() const;
	const Student& compare(const Student& st) const;
};

#endif 
