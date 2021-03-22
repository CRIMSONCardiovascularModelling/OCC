// File generated by CPPExt (Value)
//                     Copyright (C) 1991,1995 by
//  
//                      MATRA DATAVISION, FRANCE
//  
// This software is furnished in accordance with the terms and conditions
// of the contract and with the inclusion of the above copyright notice.
// This software or any other copy thereof may not be provided or otherwise
// be made available to any other person. No title to an ownership of the
// software is hereby transferred.
//  
// At the termination of the contract, the software and all copies of this
// software must be deleted.

#ifndef _TOcaf_Commands_HeaderFile
#define _TOcaf_Commands_HeaderFile

#ifndef _TDF_Label_HeaderFile
#include <TDF_Label.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_TNaming_NamedShape_HeaderFile
#include <Handle_TNaming_NamedShape.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class TDF_Label;
class gp_Pnt;
class TopoDS_Shape;
class TNaming_NamedShape;
class gp_XYZ;
class Handle_TDataStd_TreeNode;
class TOcaf_Object;

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#include "TFunction_Logbook.hxx"

class TOcaf_Commands  {

public:
	TDF_Label Cut( TDF_Label ObjectLab, TDF_Label ToolObjectLab);
	TDF_Label ModifyBox(Standard_Real x, Standard_Real y, Standard_Real z, Standard_Real w, Standard_Real l, Standard_Real h, const TCollection_ExtendedString& Name, TFunction_Logbook &log);
	TDF_Label CreateBox(Standard_Real x, Standard_Real y, Standard_Real z, Standard_Real w, Standard_Real l, Standard_Real h, const TCollection_ExtendedString& Name);
	TDF_Label ModifyCyl(Standard_Real x, Standard_Real y, Standard_Real z, Standard_Real r, Standard_Real h, const TCollection_ExtendedString &Name, TFunction_Logbook &log);
	TDF_Label CreateCyl(Standard_Real x, Standard_Real y, Standard_Real z, Standard_Real r, Standard_Real h, const TCollection_ExtendedString& Name);

 // Methods PUBLIC
 // 
Standard_EXPORT TOcaf_Commands(const TDF_Label& Main);
//Standard_EXPORT   Handle_TDataStd_TreeNode Graph() ;

protected:

 // Methods PROTECTED
 // 


 // Fields PROTECTED
 //


private: 

 // Methods PRIVATE
 // 


 // Fields PRIVATE
 //
TDF_Label MainLab;
};





// other inline functions and methods (like "C++: function call" methods)
//


#endif