#include <iostream>
#include <iomanip> 
#include "Team.h"
using namespace std;

// TODO: Implement mutator functions - 
//       SetName(), SetWins(), SetLosses()
void Team::SetName(string name){
    m_name = name;
}   
void Team::SetWins(int wins){
    m_wins = wins;
}
void Team::SetLosses(int losses){
    m_losses = losses;
}
// TODO: Implement accessor functions - 
//       GetName(), GetWins(), GetLosses()
string Team::GetName(){
    return m_name;
}   
int Team::GetWins(){
    return m_wins;
}
int Team::GetLosses(){
    return m_losses;
}
// TODO: Implement GetWinPercentage()
double Team::GetWinPercentage(){
    return (double)m_wins / (m_wins + m_losses);
}
// TODO: Implement PrintStanding()
void Team::PrintStanding(){
    cout << "Win percentage: " << GetWinPercentage() << endl;
    cout << "Congratulations, Team " << GetName() << " has a winning average!" << endl;
}