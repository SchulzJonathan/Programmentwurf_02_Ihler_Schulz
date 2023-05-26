#include <developer.hpp>
#include <iostream>
#include <string>

void Developer::drink_coffee()
{
    std::cout << "\033[31mShit the beer is empty. Well, then i have to drink a coffee.\033[0m" << std::endl;
}

auto Developer::get_name() -> std::string
{
    return name_;
}

auto Developer::get_alias() -> std::string
{
    return alias_;
}

// overloading the << operator, so the Developer class can be printed using std::cout << <Developer>;
std::ostream &operator<<(std::ostream &printthis, Developer &developertoprint)
{
    printthis << "Name:  " << developertoprint.get_name() << std::endl;
    printthis << "Alias: " << developertoprint.get_alias();
    return printthis;
}

void JuniorDeveloper::solve_problem()
{
    std::cout << "\033[31m=============================================================\033[0m" << std::endl;
    std::cout << "Solving a Problem:" << std::endl;
    std::cout << *this << std::endl;
    std::cout << "That was pretty hard. Next time this should do someone else" << std::endl;
    Developer::drink_coffee();
    std::cout << "\033[31m=============================================================\033[0m" << std::endl;
}

void SeniorDeveloper::solve_problem()
{
    std::cout << "\033[31m=============================================================\033[0m" << std::endl;
    std::cout << "Solving a Problem:" << std::endl;
    std::cout << *this << std::endl;
    std::cout << "Nothing could be easier." << std::endl;
    Developer::drink_coffee();
    std::cout << "\033[31m=============================================================\033[0m" << std::endl;
}

Developer::Developer(const std::string name, const std::string alias)
{
    name_ = name;
    alias_ = alias;
}

JuniorDeveloper::JuniorDeveloper(const std::string name, const std::string alias) : Developer(name, alias)
{
}

SeniorDeveloper::SeniorDeveloper(const std::string name, const std::string alias) : Developer(name, alias)
{
}