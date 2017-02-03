/*
 * Swarm.h
 *
 *  Created on: Feb 3, 2017
 *      Author: Kirby James
 */

#ifndef SWARM_H_
#define SWARM_H_

#include "Particle.h"

namespace slashgeegee {

class Swarm {
public:
	const static int NPARTICLES = 5000;
private:
	Particle * m_pParticles;
public:
	Swarm();
	virtual ~Swarm();

	const Particle * const getParticles() {
		return m_pParticles;
	}
	;
};

} /* namespace slashgeegee */

#endif /* SWARM_H_ */
