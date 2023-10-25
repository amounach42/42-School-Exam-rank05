#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{
}

TargetGenerator::~TargetGenerator()
{
}

void    TargetGenerator::learnTargetType(ATarget *obj)
{
    book[obj->getType()] = obj;
}

void    TargetGenerator::forgetTargetType(std::string const &spellName)
{
    std::map<std::string, ATarget*>::iterator it = book.find(spellName);
    if (it != book.end())
        book.erase(spellName);
}

ATarget    *TargetGenerator::createTarget(std::string const &spellName)
{
    std::map<std::string, ATarget*>::iterator it = book.find(spellName);
    if (it != book.end())
        return (it->second->clone());
    return (NULL);
}
