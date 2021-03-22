// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepElement_SequenceNodeOfSequenceOfSurfaceElementPurposeMember_HeaderFile
#define _StepElement_SequenceNodeOfSequenceOfSurfaceElementPurposeMember_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepElement_SequenceNodeOfSequenceOfSurfaceElementPurposeMember.hxx>

#include <Handle_StepElement_SurfaceElementPurposeMember.hxx>
#include <TCollection_SeqNode.hxx>
#include <TCollection_SeqNodePtr.hxx>
class StepElement_SurfaceElementPurposeMember;
class StepElement_SequenceOfSurfaceElementPurposeMember;



class StepElement_SequenceNodeOfSequenceOfSurfaceElementPurposeMember : public TCollection_SeqNode
{

public:

  
    StepElement_SequenceNodeOfSequenceOfSurfaceElementPurposeMember(const Handle(StepElement_SurfaceElementPurposeMember)& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      Handle(StepElement_SurfaceElementPurposeMember)& Value()  const;




  DEFINE_STANDARD_RTTI(StepElement_SequenceNodeOfSequenceOfSurfaceElementPurposeMember)

protected:




private: 


  Handle(StepElement_SurfaceElementPurposeMember) myValue;


};

#define SeqItem Handle(StepElement_SurfaceElementPurposeMember)
#define SeqItem_hxx <StepElement_SurfaceElementPurposeMember.hxx>
#define TCollection_SequenceNode StepElement_SequenceNodeOfSequenceOfSurfaceElementPurposeMember
#define TCollection_SequenceNode_hxx <StepElement_SequenceNodeOfSequenceOfSurfaceElementPurposeMember.hxx>
#define Handle_TCollection_SequenceNode Handle_StepElement_SequenceNodeOfSequenceOfSurfaceElementPurposeMember
#define TCollection_SequenceNode_Type_() StepElement_SequenceNodeOfSequenceOfSurfaceElementPurposeMember_Type_()
#define TCollection_Sequence StepElement_SequenceOfSurfaceElementPurposeMember
#define TCollection_Sequence_hxx <StepElement_SequenceOfSurfaceElementPurposeMember.hxx>

#include <TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _StepElement_SequenceNodeOfSequenceOfSurfaceElementPurposeMember_HeaderFile