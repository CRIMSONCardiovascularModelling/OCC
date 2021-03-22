// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HatchGen_SequenceNodeOfDomains_HeaderFile
#define _HatchGen_SequenceNodeOfDomains_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_HatchGen_SequenceNodeOfDomains.hxx>

#include <HatchGen_Domain.hxx>
#include <TCollection_SeqNode.hxx>
#include <TCollection_SeqNodePtr.hxx>
class HatchGen_Domain;
class HatchGen_Domains;



class HatchGen_SequenceNodeOfDomains : public TCollection_SeqNode
{

public:

  
    HatchGen_SequenceNodeOfDomains(const HatchGen_Domain& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      HatchGen_Domain& Value()  const;




  DEFINE_STANDARD_RTTI(HatchGen_SequenceNodeOfDomains)

protected:




private: 


  HatchGen_Domain myValue;


};

#define SeqItem HatchGen_Domain
#define SeqItem_hxx <HatchGen_Domain.hxx>
#define TCollection_SequenceNode HatchGen_SequenceNodeOfDomains
#define TCollection_SequenceNode_hxx <HatchGen_SequenceNodeOfDomains.hxx>
#define Handle_TCollection_SequenceNode Handle_HatchGen_SequenceNodeOfDomains
#define TCollection_SequenceNode_Type_() HatchGen_SequenceNodeOfDomains_Type_()
#define TCollection_Sequence HatchGen_Domains
#define TCollection_Sequence_hxx <HatchGen_Domains.hxx>

#include <TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _HatchGen_SequenceNodeOfDomains_HeaderFile