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
    std::cout << "\033[31m=============================================================\033[0m\n" << std::endl;
    std::cout << "Solving a Problem:" << std::endl;
    // streamoperator
    std::cout << "That was pretty hard. Next time this should do someone else" << std::endl;
    Developer::drink_coffee();
}
