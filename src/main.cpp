#include <developer.hpp>
#include <iostream>
#include <memory>
#include <vector>

auto main() -> int
{
    // This is the array with the developers inside
    std::vector<std::shared_ptr<Developer>> developer_group;
    // initialising Developers
    std::shared_ptr<SeniorDeveloper> sen_dev = std::make_shared<SeniorDeveloper>("Diana Prince", "Wonder Woman");
    std::shared_ptr<JuniorDeveloper> jun_dev = std::make_shared<JuniorDeveloper>("Peter Parker", "Spiderman");
    // Adding our Developers to our vector
    developer_group.push_back(std::dynamic_pointer_cast<Developer>(sen_dev));
    developer_group.push_back(std::dynamic_pointer_cast<Developer>(jun_dev));
    
    // Let the developers solve some problems
    for (auto& current_dev : developer_group)
    {
        current_dev -> solve_problem();
    };
}