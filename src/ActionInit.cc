
#include "ActionInit.hh"
#include "EventAction.hh"

ActionInit::ActionInit()
{ }

ActionInit::~ActionInit()
{ }

void ActionInit::Build() const
{
    auto runAction = new RunAction;
    auto eventAction = new EventAction(runAction);


    SetUserAction(new PrimaryGen());
    SetUserAction(new StepAction(eventAction));

    SetUserAction(runAction);
    SetUserAction(eventAction);


}