// CodeGear C++Builder
// Copyright (c) 1995, 2011 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'LbRandom.pas' rev: 23.00 (Win32)

#ifndef LbrandomHPP
#define LbrandomHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <System.Math.hpp>	// Pascal unit
#include <LbCipher.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Lbrandom
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TLbRandomGenerator;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TLbRandomGenerator : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int RandCount;
	Lbcipher::TMD5Digest Seed;
	void __fastcall ChurnSeed(void);
	
public:
	__fastcall TLbRandomGenerator(void);
	__fastcall virtual ~TLbRandomGenerator(void);
	void __fastcall RandomBytes(void *buff, unsigned len);
};

#pragma pack(pop)

class DELPHICLASS TLbRanLFS;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TLbRanLFS : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	unsigned ShiftRegister;
	void __fastcall SetSeed(void);
	System::Byte __fastcall LFS(void);
	
public:
	__fastcall TLbRanLFS(void);
	__fastcall virtual ~TLbRanLFS(void);
	void __fastcall FillBuf(void *buff, unsigned len);
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 tmp = System::Int8(0x1);

}	/* namespace Lbrandom */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_LBRANDOM)
using namespace Lbrandom;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// LbrandomHPP
