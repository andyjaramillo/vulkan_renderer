#include <algorithm>
#include "image.h"
#include <stdlib.h>
#include <math.h>
#include <Util/exceptions.h>

using namespace Util;
using namespace Image;

/////////////
// Image32 //
/////////////
Image32 Image32::addRandomNoise( double noise ) const
{
	///////////////////////////
	// Add random noise here //
	///////////////////////////
	WARN( "method undefined" );
	return Image32();
}

Image32 Image32::brighten( double brightness ) const
{
	/////////////////////////
	// Do brightening here //
	/////////////////////////
	WARN( "method undefined" );
	return Image32();
}

Image32 Image32::luminance( void ) const
{
	//////////////////////////////////
	// Compute luminance image here //
	//////////////////////////////////
	WARN( "method undefined" );
	return Image32();
}

Image32 Image32::contrast( double contrast ) const
{
	//////////////////////////////////
	// Do contrast enhancement here //
	//////////////////////////////////
	WARN( "method undefined" );
	return Image32();
}

Image32 Image32::saturate( double saturation ) const
{
	////////////////////////////////////
	// Do saturation enhancement here //
	////////////////////////////////////
	WARN( "method undefined" );
	return Image32();
}

Image32 Image32::quantize( int bits ) const
{
	//////////////////////////
	// Do quantization here //
	//////////////////////////
	WARN( "method undefined" );
	return Image32();
}

Image32 Image32::randomDither( int bits ) const
{
	//////////////////////////////
	// Do random dithering here //
	//////////////////////////////
	WARN( "method undefined" );
	return Image32();
}

Image32 Image32::orderedDither2X2( int bits ) const
{
	///////////////////////////////
	// Do ordered dithering here //
	///////////////////////////////
	WARN( "method undefined" );
	return Image32();
}

Image32 Image32::floydSteinbergDither( int bits ) const
{
	///////////////////////////////////////
	// Do Floyd-Steinberg dithering here //
	///////////////////////////////////////
	WARN( "method undefined" );
	return Image32();
}

Image32 Image32::blur3X3( void ) const
{
	//////////////////////
	// Do blurring here //
	//////////////////////
	WARN( "method undefined" );
	return Image32();
}

Image32 Image32::edgeDetect3X3( void ) const
{
	////////////////////////////
	// Do edge detection here //
	////////////////////////////
	WARN( "method undefined" );
	return Image32();
}

Image32 Image32::scaleNearest( double scaleFactor ) const
{
	/////////////////////////////////////////////////
	// Do scaling with nearest-point sampling here //
	/////////////////////////////////////////////////
	WARN( "method undefined" );
	return Image32();
}

Image32 Image32::scaleBilinear( double scaleFactor ) const
{
	////////////////////////////////////////////
	// Do scaling with bilinear sampling here //
	////////////////////////////////////////////
	WARN( "method undefined" );
	return Image32();
}

Image32 Image32::scaleGaussian( double scaleFactor ) const
{
	////////////////////////////////////////////
	// Do scaling with Gaussian sampling here //
	////////////////////////////////////////////
	WARN( "method undefined" );
	return Image32();
}

Image32 Image32::rotateNearest( double angle ) const
{
	//////////////////////////////////////////////////
	// Do rotation with nearest-point sampling here //
	//////////////////////////////////////////////////
	WARN( "method undefined" );
	return Image32();
}

Image32 Image32::rotateBilinear( double angle ) const
{
	/////////////////////////////////////////////
	// Do rotation with bilinear sampling here //
	/////////////////////////////////////////////
	WARN( "method undefined" );
	return Image32();
}

Image32 Image32::rotateGaussian( double angle ) const
{
	/////////////////////////////////////////////
	// Do rotation with Gaussian sampling here //
	/////////////////////////////////////////////
	WARN( "method undefined" );
	return Image32();
}

void Image32::setAlpha( const Image32& matte )
{
	///////////////////////////
	// Set alpha values here //
	///////////////////////////
	WARN( "method undefined" );
}

Image32 Image32::composite( const Image32& overlay ) const
{
	/////////////////////////
	// Do compositing here //
	/////////////////////////
	WARN( "method undefined" );
	return Image32();
}

Image32 Image32::CrossDissolve( const Image32& source , const Image32& destination , double blendWeight )
{
	////////////////////////////
	// Do cross-dissolve here //
	////////////////////////////
	WARN( "method undefined" );
	return Image32();
}

Image32 Image32::warp( const OrientedLineSegmentPairs& olsp ) const
{
	/////////////////////
	// Do warping here //
	/////////////////////
	WARN( "method undefined" );
	return Image32();
}

Image32 Image32::funFilter( void ) const
{
	////////////////////////////
	// Do the fun-filter here //
	////////////////////////////
	WARN( "method undefined" );
	return Image32();
}

Image32 Image32::crop( int x1 , int y1 , int x2 , int y2 ) const
{
	//////////////////////
	// Do cropping here //
	//////////////////////
	WARN( "method undefined" );
	return Image32();
}

Pixel32 Image32::nearestSample( Point2D p ) const
{
	//////////////////////////////
	// Do nearest sampling here //
	//////////////////////////////
	WARN( "method undefined" );
	return Pixel32();
}

Pixel32 Image32::bilinearSample( Point2D p ) const
{
	///////////////////////////////
	// Do bilinear sampling here //
	///////////////////////////////
	WARN( "method undefined" );
	return Pixel32();
}

Pixel32 Image32::gaussianSample( Point2D p , double variance , double radius ) const
{
	///////////////////////////////
	// Do Gaussian sampling here //
	///////////////////////////////
	WARN( "method undefined" );
	return Pixel32();
}
