#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class   Warlock
{
    private:
        std::string _name;
        std::string _title;
        SpellBook   sBook;
    public:
        Warlock( const std::string &, const std::string &);
        ~Warlock();
        const   std::string &getName() const;
        const   std::string &getTitle() const;
        void    setTitle(const std::string &);
        void    introduce() const;
        void    learnSpell(ASpell *);
        void    forgetSpell(std::string );
        void    launchSpell(std::string , const ATarget &);
};

#endif
