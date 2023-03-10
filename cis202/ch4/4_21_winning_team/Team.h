#ifndef TEAMH
#define TEAMH

#include <string>

using namespace std;

class Team
{
    // TODO: Declare private data members - name, wins, losses
public:
    void SetName(string name);
    void SetWins(int wins);
    void SetLosses(int losses);

    string GetName();
    int GetWins();
    int GetLosses();

    double GetWinPercentage();
    void PrintStanding();

private:
    string m_name;
    int m_wins;
    int m_losses;

    // TODO: Declare mutator functions -
    //       SetName(), SetWins(), SetLosses()

    // TODO: Declare accessor functions -
    //       GetName(), GetWins(), GetLosses()

    // TODO: Declare GetWinPercentage()

    // TODO: Declare PrintStanding()
};

#endif