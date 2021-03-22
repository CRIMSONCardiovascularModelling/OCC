// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MoniTool_IndexedDataMapNodeOfIndexedDataMapOfShapeTransient_HeaderFile
#define _MoniTool_IndexedDataMapNodeOfIndexedDataMapOfShapeTransient_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_MoniTool_IndexedDataMapNodeOfIndexedDataMapOfShapeTransient.hxx>

#include <TopoDS_Shape.hxx>
#include <Standard_Integer.hxx>
#include <Handle_Standard_Transient.hxx>
#include <TCollection_MapNodePtr.hxx>
#include <TCollection_MapNode.hxx>
class Standard_Transient;
class TopoDS_Shape;
class TopTools_ShapeMapHasher;
class MoniTool_IndexedDataMapOfShapeTransient;



class MoniTool_IndexedDataMapNodeOfIndexedDataMapOfShapeTransient : public TCollection_MapNode
{

public:

  
    MoniTool_IndexedDataMapNodeOfIndexedDataMapOfShapeTransient(const TopoDS_Shape& K1, const Standard_Integer K2, const Handle(Standard_Transient)& I, const TCollection_MapNodePtr& n1, const TCollection_MapNodePtr& n2);
  
      TopoDS_Shape& Key1()  const;
  
      Standard_Integer& Key2()  const;
  
      TCollection_MapNodePtr& Next2()  const;
  
      Handle(Standard_Transient)& Value()  const;




  DEFINE_STANDARD_RTTI(MoniTool_IndexedDataMapNodeOfIndexedDataMapOfShapeTransient)

protected:




private: 


  TopoDS_Shape myKey1;
  Standard_Integer myKey2;
  Handle(Standard_Transient) myValue;
  TCollection_MapNodePtr myNext2;


};

#define TheKey TopoDS_Shape
#define TheKey_hxx <TopoDS_Shape.hxx>
#define TheItem Handle(Standard_Transient)
#define TheItem_hxx <Standard_Transient.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <TopTools_ShapeMapHasher.hxx>
#define TCollection_IndexedDataMapNode MoniTool_IndexedDataMapNodeOfIndexedDataMapOfShapeTransient
#define TCollection_IndexedDataMapNode_hxx <MoniTool_IndexedDataMapNodeOfIndexedDataMapOfShapeTransient.hxx>
#define Handle_TCollection_IndexedDataMapNode Handle_MoniTool_IndexedDataMapNodeOfIndexedDataMapOfShapeTransient
#define TCollection_IndexedDataMapNode_Type_() MoniTool_IndexedDataMapNodeOfIndexedDataMapOfShapeTransient_Type_()
#define TCollection_IndexedDataMap MoniTool_IndexedDataMapOfShapeTransient
#define TCollection_IndexedDataMap_hxx <MoniTool_IndexedDataMapOfShapeTransient.hxx>

#include <TCollection_IndexedDataMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef TheItem
#undef TheItem_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_IndexedDataMapNode
#undef TCollection_IndexedDataMapNode_hxx
#undef Handle_TCollection_IndexedDataMapNode
#undef TCollection_IndexedDataMapNode_Type_
#undef TCollection_IndexedDataMap
#undef TCollection_IndexedDataMap_hxx




#endif // _MoniTool_IndexedDataMapNodeOfIndexedDataMapOfShapeTransient_HeaderFile