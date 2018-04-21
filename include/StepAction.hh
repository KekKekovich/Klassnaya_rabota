//
// Created by student on 21.04.18.
//

#ifndef L11_STEPACTION_HH
#define L11_STEPACTION_HH

#include <G4UserSteppingAction.hh>
#include <EventAction.hh>
#include "EventAction.hh"
class EventAction;
class StepAction: public G4UserSteppingAction{
private:
    EventAction* eventAction;
public:
    StepAction(EventAction* event);
    void UserSteppingAction(const G4Step*);


};


#endif //L11_STEPACTION_HH