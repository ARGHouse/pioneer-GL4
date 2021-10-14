// Copyright © 2008-2021 Pioneer Developers. See AUTHORS.txt for details
// Licensed under the terms of the GPL v3. See licenses/GPL-3.txt

#ifndef ELEMENTARY_H
#define ELEMENTARY_H

#include "gameconsts.h"
#include "RefCounted.h"
#include "IterationProxy.h"
#include "fixed.h"

class Atomics;

struct AtomicParameters;


class Elemenary : public RefCounted {
public:

	enum PhysTypes {

		SCI_ELEMENT = 0,
		SCI_MOLECULE = 1,
		SCI_COMPOUND = 2,
		SCI_SPECTRA = 3,
		SCI_ACID = 4,
		SCI_BASE = 5,

	};


	enum PeriodicSets { // <enum scope = 'Elementary' prefix=SET_ public>

		SET_ALKALI = 0,
		SET_ALKALINE = 1,
		SET_LANTHANIDE = 2,
		SET_ACTINIDE = 3,
		SET_TRANSMETAL = 4,
		SET_METAL = 5,
		SET_METALOID = 6,
		SET_NONMETAL = 7,
		SET_HALOGEN = 8,
		SET_NOBLE = 9,

	};

private:

	fixed e_electrons_total;
	fixed e_electronShellsTotal;
	fixed e_numberOfProtons;
	fixed e_numberOfNeutrons;
	fixed e_numberOfNuclei;
	fixed e_atomicWeight;

	fixed e_meltingPoint;
	fixed e_boilingPoint;
	fixed e_liquidPoint;

	fixed e_densityAtRT;
	fixed e_densityAtMP;
	fixed e_criticalPoint;
	fixed e_heatOfFusion;
	fixed e_heatOfVaporization;
	fixed e_molarHeatCap;

	fixed e_vaporPressureP;
	fixed e_vaporPressureT;

	fixed e_atomicRadius;
	fixed e_covalentRadius;
	fixed e_vdwRadius;

	fixed e_speedOfSound;
	fixed e_thermalExpansion;
	fixed e_thermalConductivity;
	fixed e_electricResistivity;
	fixed e_molarMagSus;

	fixed e_youngsModulus;
	fixed e_shearModulus;
	fixed e_bulkModulus;
	fixed e_mohsHardness;
	fixed e_brinellHardness;

	fixed e_depositionPoint;
	fixed e_crystalizationPoint;
	fixed e_evaporationPoint;
	fixed e_lambdaPoint;
	fixed e_regelationPoint;
	fixed e_sublimationPoint;
	fixed e_superCoolingPoint;
	fixed e_triplePoint;
	fixed e_vitrificationPoint;
	fixed e_halfLife;

	fixed e_liquidPh;

};

#endif // ELEMENTARY_H
