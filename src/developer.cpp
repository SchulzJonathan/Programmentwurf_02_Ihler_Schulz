#include <developer.hpp>
#include <iostream>
#include <string>

Developer::~Developer()
{
}

// The drink_coffee method prints out the following text
void Developer::drink_coffee()
{
    std::cout << "\033[1mShit the beer is empty. Well, then i have to drink a coffee.\033[0m" << std::endl;
}

// Getter method for the name
auto Developer::get_name() -> std::string
{
    return name_;
}

// Getter method for the alias
auto Developer::get_alias() -> std::string
{
    return alias_;
}

// overloading the << operator, so the Developer class can be printed using std::cout << <Developer>;
std::ostream& operator<<(std::ostream& printthis, Developer& developertoprint)
{
    printthis << "\033[36;4mName\033[0m:  " << developertoprint.get_name() << std::endl;
    printthis << "\033[36;4mAlias\033[0m: " << developertoprint.get_alias();
    return printthis;
}

// Implementing the solve_problem method for the JuniorDeveloper with printing out  the text "Solving a Problem:" an
// calling the stream-operator and the drink coffee mehtod
void JuniorDeveloper::solve_problem()
{
    std::cout << "\033[37;1m=============================================================\033[0m" << std::endl;
    std::cout << "\033[34;1;4mSolving a Problem:\033[0m" << std::endl;
    std::cout << *this << std::endl;
    std::cout << "That was pretty hard. Next time this should do someone else" << std::endl;
    Developer::drink_coffee();
    std::cout << "\033[37;1m=============================================================\033[0m" << std::endl;
}

// Implementing the solve_problem method for the SeniorDeveloper with printing out  the text "Solving a Problem:" an
// calling the stream-operator and the drink coffee mehtod
void SeniorDeveloper::solve_problem()
{
    std::cout << "\033[37;1m=============================================================\033[0m" << std::endl;
    std::cout << "\033[34;1;4mSolving a Problem:\033[0m" << std::endl;
    std::cout << *this << std::endl;
    std::cout << "Nothing could be easier." << std::endl;
    Developer::drink_coffee();
    std::cout << "\033[37;1m=============================================================\033[0m" << std::endl;
}

// Constructor of the basic class Developer
Developer::Developer(const std::string name, const std::string alias)
{
    name_ = name;
    alias_ = alias;
}

// Constructor of the derived class JuniorDeveloper with calling the constructor of the bascic class Developer
JuniorDeveloper::JuniorDeveloper(const std::string name, const std::string alias) : Developer(name, alias)
{
}

// Constructor of the derived class SeniorDeveloper with calling the constructor of the bascic class Developer
SeniorDeveloper::SeniorDeveloper(const std::string name, const std::string alias) : Developer(name, alias)
{
}