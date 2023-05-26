#ifndef DEVELOPER_HPP_JMOANRAITO5
#define DEVELOPER_HPP_JMOANRAITO5

#include <string>

// Here is the basic class Developer defined
class Developer
{
   public:
    Developer(std::string, std::string);
    static void drink_coffee();
    virtual void solve_problem() = 0;
    auto get_name() -> std::string;
    auto get_alias() -> std::string;
    virtual ~Developer();

   private:
    std::string name_;
    std::string alias_;
};

// Here ist the derived class JuniorDeveloper defined
class JuniorDeveloper : public Developer
{
   public:
    void solve_problem() override;
    JuniorDeveloper(std::string name, std::string alias);
};

// Here ist the derived class SeniorDeveloper defined
class SeniorDeveloper : public Developer
{
   public:
    void solve_problem() override;
    SeniorDeveloper(std::string name, std::string alias);
};

#endif  // DEVELOPER_HPP_JMOANRAITO5