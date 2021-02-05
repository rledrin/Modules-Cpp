#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"

class Human
{
private:
	Brain	*brain;

public:
	Human();
	~Human();
	Brain &getBrain();
	std::string	identifier();
};


#endif
