#ifndef UNTITLED_DATASTRUCT_H
#define UNTITLED_DATASTRUCT_H
std::string specialization()
{
    std::string specialization[59] = { "Artist", "Shepherd ", "Bus-driver", "Undertaker",
                                  "Caretaker", "Housewife", "Miner", "Electrician", "Housewife",
                                  "Baker",  "Astronomer",  "Cleaner",  "Electrician",  "Farmer",
                                  "Lawyer ",  "Waitress",  "Electrician ",  "Carpenter ",  "Factory worker",
                                  "Chef",  "Pilot ",  "Bricklayer ",  "Dustman",  "Politician ",
                                  "Refuse collector",  "Fireman",  "Fire fighter",  "Fisherman ",  "Gardener ",
                                  "Hairdresser ",  "Journalist ",  "Judge ",  "Librarian",  "Lifeguard ",
                                  "Mechanic ",  "Model ",  "Newsreader ",  "Nurse ",  "Optician ",
                                  "Painter ",  "Pharmacist ",  "Real estate agent",  "Teacher ",  "Traffic warden",
                                  "Travel agent",  "Veterinary doctor",  "Window cleaner  ",  "Accountant ",  "Actor ",
                                  "Astronomer ",  "Research Analyst",  "Secretary ",  "Dentist",  "Investment Banker",
                                  "Programmer",  "Consultant",  "Tailor ",  "Technician",  "Laborer" };
    return specialization[rand() % 59];
}
struct University
{
    University()
    {
        profession = specialization();
        gradeYear = rand()%121+1950;
        usabilityOfDiploma = rand()%2;
    }
    std::string profession;
    int gradeYear;
    bool usabilityOfDiploma;
};
#endif //UNTITLED_DATASTRUCT_H
