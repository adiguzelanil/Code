/* 
* HCTL2032.h
*
* Created: 11.05.2016 22:49:29
* Author: adgzlanl
*/
#include "arduino.h"

class HCTL2032
{
	public:

	enum SelectChannel
	{
		ChannelX,
		ChannelY
	};
	
	enum QuadrateX
	{
		x1,
		x2,
		x3,
		x4
	};


	void EncoderInit() const;
	void EncoderReset() const;
	void EncoderQuadrature(QuadrateX QuadX) const;
	byte ReadByte() const;
	int32_t EncoderRead(SelectChannel EncoderChannel) const;

	private:
	// Atmega2560
	const int encoderPinXY = 31;
	const int encoderPinOE = 32;
	const int encoderPinSEL1 = 33;
	const int encoderPinSEL2 = 34;
	const int encoderPinEn1 = 35;
	const int encoderPinEn2 = 36;
	const int encoderPinRSTX = 37;
	const int encoderPinRSTY = 38;
	const int encoderPinD0 = 22;
	const int encoderPinD1 = 23;
	const int encoderPinD2 = 24;
	const int encoderPinD3 = 25;
	const int encoderPinD4 = 26;
	const int encoderPinD5 = 27;
	const int encoderPinD6 = 28;
	const int encoderPinD7 = 29;

};