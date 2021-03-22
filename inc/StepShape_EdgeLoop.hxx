// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_EdgeLoop_HeaderFile
#define _StepShape_EdgeLoop_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepShape_EdgeLoop.hxx>

#include <Handle_StepShape_HArray1OfOrientedEdge.hxx>
#include <StepShape_Loop.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <Handle_StepShape_OrientedEdge.hxx>
#include <Standard_Integer.hxx>
class StepShape_HArray1OfOrientedEdge;
class TCollection_HAsciiString;
class StepShape_OrientedEdge;



class StepShape_EdgeLoop : public StepShape_Loop
{

public:

  
  //! Returns a EdgeLoop
  Standard_EXPORT StepShape_EdgeLoop();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT   void Init (const Handle(TCollection_HAsciiString)& aName, const Handle(StepShape_HArray1OfOrientedEdge)& aEdgeList) ;
  
  Standard_EXPORT   void SetEdgeList (const Handle(StepShape_HArray1OfOrientedEdge)& aEdgeList) ;
  
  Standard_EXPORT   Handle(StepShape_HArray1OfOrientedEdge) EdgeList()  const;
  
  Standard_EXPORT   Handle(StepShape_OrientedEdge) EdgeListValue (const Standard_Integer num)  const;
  
  Standard_EXPORT   Standard_Integer NbEdgeList()  const;




  DEFINE_STANDARD_RTTI(StepShape_EdgeLoop)

protected:




private: 


  Handle(StepShape_HArray1OfOrientedEdge) edgeList;


};







#endif // _StepShape_EdgeLoop_HeaderFile