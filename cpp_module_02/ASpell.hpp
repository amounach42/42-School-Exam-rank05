#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>
#include "ATarget.hpp"

class   ATarget;

class   ASpell
{
    protected:
        std::string _name;
        std::string _effects;
    public:
        ASpell(std::string, std::string);
        virtual ~ASpell();
        const std::string &getName() const;
        const std::string &getEffects() const;
        virtual ASpell *clone() const = 0;
        void    launch(const ATarget &) const;
};

#endif
