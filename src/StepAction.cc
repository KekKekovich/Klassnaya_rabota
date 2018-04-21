//
// Created by student on 21.04.18.
//

#include <EventAction.hh>
#include <StepAction.hh>
#include <G4UserSteppingAction.hh>
#include <StepAction.hh>
#include "StepAction.hh"


StepAction::StepAction(EventAction *_event) {
eventAction =_event;
}



void StepAction::UserSteppingAction(const G4Step *aStep) {
aStep->GetTrack()->GetVolume()->GetName();

//        void AddSmth(G4String name, G4double energy);

}
