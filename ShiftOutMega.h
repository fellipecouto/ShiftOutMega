/*------------------------------------------------------------------------------
  Program  : ShiftOutMega
  Descr    : Library to control additional digital ports using CI 74HC595
  Author   : Fellipe Couto [ http://www.efeitonerd.com.br ]
  GitHub   : https://github.com/fellipecouto/ShiftOutMega
  Date     : 2012-09-17
  ------------------------------------------------------------------------------*/
#ifndef ShiftOutMega_h  
#define ShiftOutMega_h  
#include "Arduino.h"
class ShiftOutMega{  
	public:
		ShiftOutMega(int latchPin, int dataPin, int clockPin, int qtdRegister);
		void shiftWrite(int pin, boolean state);
	private:
		int _latchPin;
		int _dataPin;
		int _clockPin;
		int _qtdRegister;
		void shiftOut(byte dataOut);
		String decToBin(int myNum);
		int binToDec(String b);
		int potency(int b, int e);
};
#endif