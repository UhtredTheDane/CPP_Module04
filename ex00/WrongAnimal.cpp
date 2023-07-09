Wrong::WrongAnimal(void)
    : type("None");
{
    std::cout << "WrongAnimal Default Constructor called." << std::endl;
}

Wrong::WrongAnimal(WrongAnimal const& toCopy)
{
    std::cout << "WrongAnimal Copy Constructor called." << std::endl;
	*this = toCopy
}

WrongAnimal& WrongAimal::operator=(WrongAnimal const& toAffect)
{
    if (this != &toAffect)
		type = toAffect.type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal Destructor called." << std::endl;
}

void	WrongAnimal::makeSound(void)
{
    std::cout << "All WrongSounds." << std::endl;
}