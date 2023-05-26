#include <developer.hpp>
#include <iostream>
#include <memory>
#include <vector>

auto main() -> int
{
    // This is the array with the developers inside
    std::vector<std::shared_ptr<Developer>> developer_group;
    // // initialising Developers
    SeniorDeveloper sen_dev("Diana Prince", "Wonder Woman");
    JuniorDeveloper jun_dev("Peter Parker", "Spiderman");
    // // Adding our Developers to our vector
    developer_group.push_back(std::make_shared<SeniorDeveloper>(sen_dev));
    developer_group.push_back(std::make_shared<JuniorDeveloper>(jun_dev));
    // Let the develolpers solve some problems
    for (auto& current_dev : developer_group)
    {
        current_dev->solve_problem();
    };
}