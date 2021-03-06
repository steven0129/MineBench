// $Id: findRateOfGene.h 2399 2014-03-13 22:43:51Z wkliao $

#ifndef ____FIND_RATE_OF_GENE
#define ____FIND_RATE_OF_GENE


#include "numRec.h"
#include "errorMsg.h"
#include "likelihoodComputation.h"
#include "tree.h"
#include "sequenceContainer.h"
#include "stochasticProcess.h"
#include "suffStatComponent.h"
#include "definitions.h"

MDOUBLE findTheBestFactorFor(const tree &t,
							 const sequenceContainer& sc,
							stochasticProcess& sp,
							const Vdouble * weights,
							 MDOUBLE & logLresults);

void makeAverageRateEqOne(tree& et,vector<stochasticProcess> & spVec);

#endif
