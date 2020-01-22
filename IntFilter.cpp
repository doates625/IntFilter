/**
 * @file IntFilter.cpp
 * @author Dan Oates (WPI Class of 2020)
 */
#include "IntFilter.h"

/**
 * @brief Constructor
 * @param fs Sample frequency
 */
IntFilter::IntFilter(float fs) :
	LTIFilter()
{
	A = 2;
	B = 1;
	a[0] = +fs;
	a[1] = -fs;
	b[0] = 1.0f;
}
