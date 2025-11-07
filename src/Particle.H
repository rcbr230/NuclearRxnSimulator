#ifndef Particle_H
#define Particle_H

class Particle
{
	public:
	Particle();
	Particle(float init_xVelocity, float init_yVelocity);
	virtual ~Particle();

	float xVelocity;
	float yVelocity;
	float x;
	float y;

	bool Collision(Particle collider);
	Particle CheckCollision();
};

#endif
