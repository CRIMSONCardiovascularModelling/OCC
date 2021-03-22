// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColgp_SequenceNodeOfSequenceOfVec_HeaderFile
#define _TColgp_SequenceNodeOfSequenceOfVec_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TColgp_SequenceNodeOfSequenceOfVec.hxx>

#include <gp_Vec.hxx>
#include <TCollection_SeqNode.hxx>
#include <TCollection_SeqNodePtr.hxx>
class gp_Vec;
class TColgp_SequenceOfVec;



class TColgp_SequenceNodeOfSequenceOfVec : public TCollection_SeqNode
{

public:

  
    TColgp_SequenceNodeOfSequenceOfVec(const gp_Vec& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      gp_Vec& Value()  const;




  DEFINE_STANDARD_RTTI(TColgp_SequenceNodeOfSequenceOfVec)

protected:




private: 


  gp_Vec myValue;


};

#define SeqItem gp_Vec
#define SeqItem_hxx <gp_Vec.hxx>
#define TCollection_SequenceNode TColgp_SequenceNodeOfSequenceOfVec
#define TCollection_SequenceNode_hxx <TColgp_SequenceNodeOfSequenceOfVec.hxx>
#define Handle_TCollection_SequenceNode Handle_TColgp_SequenceNodeOfSequenceOfVec
#define TCollection_SequenceNode_Type_() TColgp_SequenceNodeOfSequenceOfVec_Type_()
#define TCollection_Sequence TColgp_SequenceOfVec
#define TCollection_Sequence_hxx <TColgp_SequenceOfVec.hxx>

#include <TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _TColgp_SequenceNodeOfSequenceOfVec_HeaderFile