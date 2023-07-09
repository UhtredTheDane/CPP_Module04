#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

class WrongCat: public Cat
{
	public:

		WrongCat(void);
		WrongCat(WrongCat const& toCopy);
		WrongCat& operator=(WrongCat const& toAffect);
		~WrongCat(void);

		void	makeSound(void);
}

#endif