
#include <Randomize.hh>
#include <G4Electron.hh>
#include <G4Neutron.hh>
#include "PrimaryGen.hh"
#include "Random.h"

PrimaryGen::PrimaryGen() {
    gun = new G4ParticleGun(1);
    G4cout<<"Primary particles generator is created successfully\t\tOK!!!"<<G4endl;
//    gun1 = new G4ParticleGun(1);
}

PrimaryGen::~PrimaryGen() {

}

void PrimaryGen::GeneratePrimaries(G4Event* anEvent) {
//   RandomSpectre a(0);
//   G4double E = a.RandomVariate(0,0.545,0.01,1)[0]* MeV;

    gun->SetParticleDefinition(G4Neutron::NeutronDefinition());
    gun->SetParticleEnergy(0.025*eV);


    double  px, py, pz, R{75*mm};

     do {
        px = (2*G4UniformRand()-1) * cm;
        py = (2*G4UniformRand()-1) * cm;
        pz = (2*G4UniformRand()-1) * cm;
    } while (sqrt(px*px + py*py + pz*pz) > R);

   gun->SetParticlePosition(G4ThreeVector(px, py, pz));
    G4double X{2*G4UniformRand()-1}, Y{2*G4UniformRand()-1}, Z{2*G4UniformRand()-1};
    double l = sqrt(X*X+Y*Y+Z*Z);




   gun->SetParticleMomentum(G4ThreeVector(px/l, py/l, pz/l));


//    gun1->SetParticleDefinition(G4Electron::ElectronDefinition());
//    gun1->SetParticleEnergy(E);

//    double R1= 10*cm, pX, pY, pZ;
//    gun1->SetParticleMomentum(G4ThreeVector(x/r, y/r, z/r));
//    gun1->SetParticleMomentum(G4ThreeVector(1, 0, 0));


    gun->GeneratePrimaryVertex(anEvent);
//    gun1->GeneratePrimaryVertex(anEvent);


}