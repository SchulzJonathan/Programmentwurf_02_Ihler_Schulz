#include <developer.hpp>
#include <iostream>
#include <string>

void Developer::drink_coffee()
{
    std::cout << "\033[31mShit the beer is empty. Well, then i have to drink a coffee.\033[0m\n";
}

auto Developer::get_name() -> std::string
{
    return name_;
}

auto Developer::get_alias() -> std::string
{
    return alias_;
}

void JuniorDeveloper::solve_problem()
{
    std::cout << "Thats too hard for me";
}

void operator<<(/*unused*/)
{
    std::cout << "Name: " << this->get_name() << std::endl;
    std::cout << "Alias: " << this->get_alias() << std::endl;
}
