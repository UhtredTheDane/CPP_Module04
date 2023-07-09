#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	type = "WrongCat";
     std::cout << "WrongCat Default Constructor called." << std::endl;
}

WrongCat::WrongCat(WrongCat const& toCopy)
	: WrongAnimal()
{
    std::cout << "WrongCat Copy Constructor called." << std::endl;
	*this = toCopy;
}

WrongCat& WrongCat::operator=(WrongCat const& toAffect)
{
    if (this != &toAffect)
		type = toAffect.type;
	return (*this);
}
		
WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat Destructor called." << std::endl;
}

void	WrongCat::makeSound(void) const
{
    std::cout << "The Cat barks." << std::endl;
}
