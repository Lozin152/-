
#include <iostream>
#include <string>
#include <vector>

class Application {
public:
    Application(const std::string& name, const std::string& date, int duration)
        : name(name), date(date), duration(duration) {}

    const std::string& getName() const { return name; }
    const std::string& getDate() const { return date; }
    int getDuration() const { return duration; }

private:
    std::string name;
    std::string date;
    int duration;
};

class VacationResort {
public:
    VacationResort(const std::string& name) : name(name) {}

    void addApplication(const Application& application) {
        applications.push_back(application);
    }

    void displayApplications() const {
        std::cout << "Заявки на відпочинок в базі '" << name << "':\n";
        for (const Application& app : applications) {
            std::cout << "Заявка: " << app.getName() << " Дата: " << app.getDate() << " Тривалість: " << app.getDuration() << " днів\n";                 
        }
    }

private:
    std::string name;
    std::vector<Application> applications;
};

int main() {
    VacationResort resort("Відпочинкова база 'Сонце'");

    Application application1("Сімейний відпочинок", "2023-07-15", 7);
    Application application2("Риболовля", "2023-08-10", 5);

    resort.addApplication(application1);
    resort.addApplication(application2);

    resort.displayApplications();

    return 0;
 

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       