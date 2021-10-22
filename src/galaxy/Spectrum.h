// Copyright © 2008-2021 Pioneer Developers. See AUTHORS.txt for details
// Licensed under the terms of the GPL v3. See licenses/GPL-3.txt

#ifndef SPECTRUM_H
#define SPECTRUM_H

#include "gameconsts.h"
#include "RefCounted.h"
#include "IterationProxy.h"
#include "fixed.h"

class Atomics;

struct AtomicParameters;

//HUMAN EYE CAN SEE 380NM to 780NM
// BELOW 380 is WHITE - HIGH WAVELENGTH - HIGH ENERGY - UVs, Gamma Rays, Cosmic Rays
// ABOVE 750 IS BLACK	- microWave - xRays - RadioWaves
//FOR THE SPECTRA OF STARS WE GET:
//ATOMIC MAKEUP
//TEMPERATURE
//L
//

class Spectrum : public RefCounted {
public:



private:

	fixed e_minVisibleSpec;
	fixed e_minVisibleSpecNm; //380
	fixed e_maxVisibleSpec;
	fixed e_maxVisibleSpecNm; //780
	fixed e_emissionLines;
	fixed e_absorbtionLines;
	fixed e_spectralEmissionWavelength;	  //between 0 to 1
	fixed e_spectralEmissionAlpha;		  //between 0 to 1
	fixed e_spectralAbsorbtionWavelength; //between 0 to 1
	fixed e_spectralAbsorbtionAlpha;	  //between 0 to 1
	fixed e_minNaturalBroadening;
	fixed e_maxNaturalBroadening;
	fixed e_minThermalDopplerBroadening;
	fixed e_maxThermalDopplerBroadening;
	fixed e_minPressureDopplerBroadening;
	fixed e_maxPressureDopplerBroadening;
	fixed e_minInhomogenousBroadening;
	fixed e_maxInhomogenousBroadening;
	fixed e_minOpacityBroadening;
	fixed e_maxOpacityBroadening;
	fixed e_proximityBroadening;
	fixed e_spectraEmissionBand; //any band that isn't fully black is treated as an emission alpha
	fixed e_spectraAbsorptionBand; //any paty of the spectrum that isn't fully black is treated as an absorption alpha
	fixed e_indexOfRefraction;



};

#endif // SPECTRUM_H
