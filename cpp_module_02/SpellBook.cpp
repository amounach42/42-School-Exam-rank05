#include "SpellBook.hpp"

SpellBook::SpellBook()
{
}

SpellBook::~SpellBook()
{
}

void    SpellBook::learnSpell(ASpell *obj)
{
    book[obj->getName()] = obj;
}

void    SpellBook::forgetSpell(std::string const &spellName)
{
    std::map<std::string, ASpell*>::iterator it = book.find(spellName);
    if (it != book.end())
        book.erase(spellName);
}

ASpell    *SpellBook::createSpell(std::string const &spellName)
{
    std::map<std::string, ASpell*>::iterator it = book.find(spellName);
    if (it != book.end())
        return (it->second->clone());
    return (NULL);
}
