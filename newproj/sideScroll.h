#include "hitbox.h"


//simulatex player movement by moving everything else
class sideScroll:public hitBox  {
public:
	  sideScroll();
	virtual ~sideScroll();
	virtual void move(int player); // = 0; should be able to be pure virtual but enemies gets angry
private:
	

};
