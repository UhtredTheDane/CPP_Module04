#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal: public Animal
{
	public:

		WrongAnimal(void);
		WrongAnimal(WrongAnimal const& toCopy);
		WrongAnimal& operator=(WrongAnimal const& toAffect);
		~WrongAnimal(void);

		void	makeSound(void);
}

#endif