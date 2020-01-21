/**
 * @file IntFilter.h
 * @brief Class for first-order integrators
 * @author Dan Oates (WPI Class of 2020)
 */
#pragma once
#include <LTIFilter.h>

/**
 * Class Declaration
 */
class IntFilter : public LTIFilter
{
public:
	IntFilter(float fs);
}
