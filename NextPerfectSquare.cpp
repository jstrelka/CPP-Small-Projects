#ifndef NEXTPERFECTSQUARE_CPP
#define NEXTPERFECTSQUARE_CPP


#include "NextPerfectSquare.h"

namespace strelka_1
{
	long int findNextSquare(long int sq) {
		long double root = sqrt(sq);
		long double nextSquare = 0;
		if (root - floor(root) == 0)
		{
			nextSquare = (root + 1) * (root + 1);
			return nextSquare;
		}
		return -1;
	};
}

#endif

