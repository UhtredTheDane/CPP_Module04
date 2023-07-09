#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	public:

		WrongAnimal(void);
		WrongAnimal(WrongAnimal const& toCopy);
		WrongAnimal& operator=(WrongAnimal const& toAffect);
		~WrongAnimal(void);

		std::string getType(void) const;
		void	makeSound(void) const;
	
	protected:

		std::string type;
};

#endif
