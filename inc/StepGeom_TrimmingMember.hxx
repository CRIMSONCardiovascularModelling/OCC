// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_TrimmingMember_HeaderFile
#define _StepGeom_TrimmingMember_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepGeom_TrimmingMember.hxx>

#include <StepData_SelectReal.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_CString.hxx>


//! For immediate members of TrimmingSelect, i.e. :
//! ParameterValue (a Real)
class StepGeom_TrimmingMember : public StepData_SelectReal
{

public:

  
  Standard_EXPORT StepGeom_TrimmingMember();
  
  Standard_EXPORT virtual   Standard_Boolean HasName()  const;
  
  Standard_EXPORT virtual   Standard_CString Name()  const;
  
  Standard_EXPORT virtual   Standard_Boolean SetName (const Standard_CString name) ;




  DEFINE_STANDARD_RTTI(StepGeom_TrimmingMember)

protected:




private: 




};







#endif // _StepGeom_TrimmingMember_HeaderFile