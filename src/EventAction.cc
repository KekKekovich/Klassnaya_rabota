//
// Created by student on 21.04.18.
//

#include "EventAction.hh"

#include <G4UserEventAction.hh>
#include <EventAction.hh>
#include <G4SystemOfUnits.hh>
#include <RunAction.hh>

void EventAction::BeginOfEventAction(const G4Event *anEvent) {

}

void EventAction::EndOfEventAction(const G4Event *anEvent) {
    if (newmap->size()>=0) {
        newmap->clear();
    }


}

EventAction::EventAction(RunAction* _run) : run(_run) {
    newmap = new std::map<G4String, G4double>();
}

void EventAction::AddSmth(const G4String name, G4double energy) {
    if(newmap->find(name)==newmap->end())
    newmap->emplace(name,energy);



else
        newmap->find(name)->second +=energy;
}


