#include <developer.hpp>
#include <iostream>
#include <string>

// The drink_coffee method prints out the following text
void Developer::drink_coffee()
{
    std::cout << "\033[1mShit the beer is empty. Well, then i have to drink a coffee.\033[0m" << std::endl;
}

// Getter method for the name
auto Developer::get_name() const -> const std::string&
{
    return name_;
}

// Getter method for the alias
auto Developer::get_alias() const -> const std::string&
{
    return alias_;
}

// overloading the << operator, so the Developer class can be printed using std::cout << <Developer>;
auto operator<<(std::ostream& printthis, const Developer& developertoprint) -> std::ostream&
{
    printthis << "\033[36;4mName\033[0m:  " << developertoprint.get_name() << std::endl;
    printthis << "\033[36;4mAlias\033[0m: " << developertoprint.get_alias();
    return printthis;
}

/* Implementing the solve_problem method for the JuniorDeveloper. After printing out the text "Solving a Problem:", the
 * Developer is printed using cout and the drink coffee method is called */
void JuniorDeveloper::solve_problem()
{
    std::cout << "\033[37;1m=============================================================\033[0m" << std::endl;
    std::cout << "\033[34;1;4mSolving a Problem:\033[0m" << std::endl;
    std::cout << *this << std::endl;
    std::cout << "That was pretty hard. Next time this should do someone else" << std::endl;
    this->drink_coffee();
    std::cout << "\033[37;1m=============================================================\033[0m" << std::endl;
}

/* Implementing the solve_problem method for the SeniorDeveloper. After printing out the text "Solving a Problem:", the
 * Developer is printed using cout and the drink coffee method is called */
void SeniorDeveloper::solve_problem()
{
    std::cout << "\033[37;1m=============================================================\033[0m" << std::endl;
    std::cout << "\033[34;1;4mSolving a Problem:\033[0m" << std::endl;
    std::cout << *this << std::endl;
    std::cout << "Nothing could be easier." << std::endl;
    this->drink_coffee();
    std::cout << "\033[37;1m=============================================================\033[0m" << std::endl;
}

// Constructor of the base class Developer
Developer::Developer(std::string name, std::string alias) : name_{std::move(name)}, alias_{std::move(alias)}
{
}

// Constructor of the derived class JuniorDeveloper, which calls the constructor of its base class Developer.
JuniorDeveloper::JuniorDeveloper(const std::string& name, const std::string& alias) : Developer(name, alias)

{
}

// Constructor of the derived class SeniorDeveloper, which calls the constructor of its base class Developer.
SeniorDeveloper::SeniorDeveloper(const std::string& name, const std::string& alias) : Developer(name, alias)
{
}