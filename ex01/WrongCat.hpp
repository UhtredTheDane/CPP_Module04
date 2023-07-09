#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:

		WrongCat(void);
		WrongCat(WrongCat const& toCopy);
		WrongCat& operator=(WrongCat const& toAffect);
		~WrongCat(void);

		void	makeSound(void) const;
};

#endif
