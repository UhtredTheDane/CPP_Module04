#ifndef BRAIN_HPP
# define BRAIN_HPP

class Brain
{
    public:

        Brain(void);
        Brain(Brain const& toCopy);
        Brain& operator=(Brain const& toAffect);
        ~Brain(void);

    private:

        std::string ideas[100];
        
};
#endif