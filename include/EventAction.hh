//
// Created by student on 21.04.18.
//

#ifndef CPROJECT_EVENTACT_HH
#define CPROJECT_EVENTACT_HH

#include "G4UserEventAction.hh"
#include "G4RunManager.hh"
#include "RunAction.hh"
#include "StepAction.hh"
using namespace std;


class EventAction : public G4UserEventAction
{
private:
    map <G4String, G4double> *newmap;
    RunAction* runAction;


//    newmap.emplace();
public:
    EventAction(RunAction *runAction);

    virtual void BeginOfEventAction(const G4Event* event);
    virtual void EndOfEventAction(const G4Event* event);
    void AddSmth(G4String name, G4double energy);
private:

};

