//
// Created by student on 21.04.18.
//

#include <G4Run.hh>
#include <G4UserRunAction.hh>
#include <map>
#include

#ifndef CPROJECT_RUN_HH
#define CPROJECT_RUN_HH
using namespace std;

class RunAction : public G4UserRunAction {
public:
    map <G4String, G4double> *result;
    void BeginOfRunAction(const G4Run *aRun) override;

    void EndOfRunAction(const G4Run *aRun) override;

    map <G4String, G4double> *result;


private:

};


#endif //CPROJECT_RUN_HH
