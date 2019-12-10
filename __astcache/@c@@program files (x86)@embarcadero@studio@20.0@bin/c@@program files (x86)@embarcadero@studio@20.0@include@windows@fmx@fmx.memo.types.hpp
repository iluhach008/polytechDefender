// CodeGear C++Builder
// Copyright (c) 1995, 2018 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.Memo.Types.pas' rev: 33.00 (Windows)

#ifndef Fmx_Memo_TypesHPP
#define Fmx_Memo_TypesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Memo
{
namespace Types
{
//-- forward type declarations -----------------------------------------------
struct TCaretPosition;
struct TFragmentInserted;
struct TFragmentDeleted;
//-- type declarations -------------------------------------------------------
enum class DECLSPEC_DENUM TInsertOption : unsigned char { Selected, MoveCaret, CanUndo, UndoPairedWithPrev, Typed };

typedef System::Set<TInsertOption, _DELPHI_SET_ENUMERATOR(TInsertOption::Selected), _DELPHI_SET_ENUMERATOR(TInsertOption::Typed)> TInsertOptions;

enum class DECLSPEC_DENUM TDeleteOption : unsigned char { MoveCaret, CanUndo, Selected };

typedef System::Set<TDeleteOption, _DELPHI_SET_ENUMERATOR(TDeleteOption::MoveCaret), _DELPHI_SET_ENUMERATOR(TDeleteOption::Selected)> TDeleteOptions;

enum class DECLSPEC_DENUM TActionType : unsigned char { Delete, Insert };

enum class DECLSPEC_DENUM TSelectionPointType : unsigned char { Left, Right };

struct DECLSPEC_DRECORD TCaretPosition
{
public:
	int Line;
	int Pos;
	static TCaretPosition __fastcall Create(const int ALine, const int APos);
	static bool __fastcall _op_Equality(const TCaretPosition &A, const TCaretPosition &B);
	bool __fastcall operator==(const TCaretPosition& __rhs) { return TCaretPosition::_op_Equality(*this, __rhs); };
	static bool __fastcall _op_Inequality(const TCaretPosition &A, const TCaretPosition &B);
	bool __fastcall operator!=(const TCaretPosition& __rhs) { return TCaretPosition::_op_Inequality(*this, __rhs); };
	static bool __fastcall _op_LessThanOrEqual(const TCaretPosition &A, const TCaretPosition &B);
	bool __fastcall operator<=(const TCaretPosition& __rhs) { return TCaretPosition::_op_LessThanOrEqual(*this, __rhs); };
	static bool __fastcall _op_LessThan(const TCaretPosition &A, const TCaretPosition &B);
	bool __fastcall operator<(const TCaretPosition& __rhs) { return TCaretPosition::_op_LessThan(*this, __rhs); };
	static bool __fastcall _op_GreaterThanOrEqual(const TCaretPosition &A, const TCaretPosition &B);
	bool __fastcall operator>=(const TCaretPosition& __rhs) { return TCaretPosition::_op_GreaterThanOrEqual(*this, __rhs); };
	static bool __fastcall _op_GreaterThan(const TCaretPosition &A, const TCaretPosition &B);
	bool __fastcall operator>(const TCaretPosition& __rhs) { return TCaretPosition::_op_GreaterThan(*this, __rhs); };
	__fastcall operator System::Types::TPoint();
	static TCaretPosition __fastcall Zero();
	static TCaretPosition __fastcall Invalid();
	void __fastcall IncrementLine();
	void __fastcall DecrementLine();
	bool __fastcall IsZero();
	bool __fastcall IsInvalid();
};


struct DECLSPEC_DRECORD TFragmentInserted
{
public:
	int StartPos;
	int FragmentLength;
	bool PairedWithPrev;
	bool Typed;
	static TFragmentInserted __fastcall Create(const int StartPos, const int FragmentLength, const bool PairedWithPrev, const bool Typed);
};


struct DECLSPEC_DRECORD TFragmentDeleted
{
public:
	int StartPos;
	System::UnicodeString Fragment;
	bool Selected;
	bool CaretMoved;
	static TFragmentDeleted __fastcall Create(const int StartPos, const System::UnicodeString Fragment, const bool Selected, const bool CaretMoved);
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Types */
}	/* namespace Memo */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_MEMO_TYPES)
using namespace Fmx::Memo::Types;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_MEMO)
using namespace Fmx::Memo;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_Memo_TypesHPP
