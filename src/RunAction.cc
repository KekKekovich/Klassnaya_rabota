//
// Created by student on 21.04.18.
//

#include "RunAction.hh"

#include <G4UserRunAction.hh>
#include <RunAction.hh>

void RunAction::BeginOfRunAction(const G4Run *aRun) {
    G4UserRunAction::BeginOfRunAction(aRun);
}

void RunAction::EndOfRunAction(const G4Run *aRun) {
    G4UserRunAction::EndOfRunAction(aRun);
}
