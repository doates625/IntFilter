/**
 * @file IntFilter.cpp
 * @author Dan Oates (WPI Class of 2020)
 */
#include "IntFilter.h"

/**
 * @brief Constructor
 * @param fs Sample frequency
 */
IntFilter::IntFilter(float fs);
{
	// Allocate data
	const uint8_t A = 2; float a[A];
	const uint8_t B = 1; float b[B];

	// Assign coefficients
	a[0] = +fs;
	a[1] = -fs;
	b[0] = 1.0f;

	// Construct filter
	(*this) = LTIFilter(A, a, B, b);
}
