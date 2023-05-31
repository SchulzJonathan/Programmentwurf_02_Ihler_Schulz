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
    developer_group.push_back(sen_dev);
    developer_group.push_back(jun_dev);
    // Let the develolpers solve some problems and cast them to its base class 
    for (auto& current_dev : developer_group)
    {
        if (auto base_dev = std::dynamic_pointer_cast<Developer>(current_dev))
        {
            base_dev->solve_problem();  
        }
    };
}