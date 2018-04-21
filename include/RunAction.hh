//
// Created by student on 21.04.18.
//

#include <G4Run.hh>
#include <G4UserRunAction.hh>

#ifndef CPROJECT_RUN_HH
#define CPROJECT_RUN_HH

class RunAction : public G4UserRunAction {
public:
    void BeginOfRunAction(const G4Run *aRun) override;

    void EndOfRunAction(const G4Run *aRun) override;


private:

};


#endif //CPROJECT_RUN_HH
