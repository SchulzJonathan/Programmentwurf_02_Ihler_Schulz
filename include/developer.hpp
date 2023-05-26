#ifndef DEVELOPER_HPP_JMOANRAITO5
#define DEVELOPER_HPP_JMOANRAITO5

#include <string>

// Here is the basic class Developer defined
class Developer
{
   private:
    std::string name_;
    std::string alias_;

   public:
    Developer(const std::string& name, const std::string& alias);
    static void drink_coffee();
    virtual void solve_problem() = 0;
    auto get_name() const -> const std::string&;
    auto get_alias() const -> const std::string&;
};

// Here is the derived class JuniorDeveloper defined
class JuniorDeveloper : public Developer
{
   public:
    void solve_problem() override;
    JuniorDeveloper(const std::string& name, const std::string& alias);
};

// Here ist the derived class SeniorDeveloper defined
class SeniorDeveloper : public Developer
{
   public:
    void solve_problem() override;
    SeniorDeveloper(const std::string& name, const std::string& alias);
};

#endif  // DEVELOPER_HPP_JMOANRAITO5