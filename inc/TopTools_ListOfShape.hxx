// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopTools_ListOfShape_HeaderFile
#define _TopTools_ListOfShape_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Address.hxx>
#include <Handle_TopTools_ListNodeOfListOfShape.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
class Standard_NoSuchObject;
class TopTools_ListIteratorOfListOfShape;
class TopoDS_Shape;
class TopTools_ListNodeOfListOfShape;



class TopTools_ListOfShape 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopTools_ListOfShape();
  
  Standard_EXPORT TopTools_ListOfShape(const TopTools_ListOfShape& Other);
  
  Standard_EXPORT   void Assign (const TopTools_ListOfShape& Other) ;
  void operator= (const TopTools_ListOfShape& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT   Standard_Integer Extent()  const;
  
  Standard_EXPORT   void Clear() ;
~TopTools_ListOfShape()
{
  Clear();
}
  
      Standard_Boolean IsEmpty()  const;
  
  Standard_EXPORT   void Prepend (const TopoDS_Shape& I) ;
  
  Standard_EXPORT   void Prepend (const TopoDS_Shape& I, TopTools_ListIteratorOfListOfShape& theIt) ;
  
  Standard_EXPORT   void Prepend (TopTools_ListOfShape& Other) ;
  
  Standard_EXPORT   void Append (const TopoDS_Shape& I) ;
  
  Standard_EXPORT   void Append (const TopoDS_Shape& I, TopTools_ListIteratorOfListOfShape& theIt) ;
  
  Standard_EXPORT   void Append (TopTools_ListOfShape& Other) ;
  
  Standard_EXPORT   TopoDS_Shape& First()  const;
  
  Standard_EXPORT   TopoDS_Shape& Last()  const;
  
  Standard_EXPORT   void RemoveFirst() ;
  
  Standard_EXPORT   void Remove (TopTools_ListIteratorOfListOfShape& It) ;
  
  Standard_EXPORT   void InsertBefore (const TopoDS_Shape& I, TopTools_ListIteratorOfListOfShape& It) ;
  
  Standard_EXPORT   void InsertBefore (TopTools_ListOfShape& Other, TopTools_ListIteratorOfListOfShape& It) ;
  
  Standard_EXPORT   void InsertAfter (const TopoDS_Shape& I, TopTools_ListIteratorOfListOfShape& It) ;
  
  Standard_EXPORT   void InsertAfter (TopTools_ListOfShape& Other, TopTools_ListIteratorOfListOfShape& It) ;


friend class TopTools_ListIteratorOfListOfShape;


protected:





private:



  Standard_Address myFirst;
  Standard_Address myLast;


};

#define Item TopoDS_Shape
#define Item_hxx <TopoDS_Shape.hxx>
#define TCollection_ListNode TopTools_ListNodeOfListOfShape
#define TCollection_ListNode_hxx <TopTools_ListNodeOfListOfShape.hxx>
#define TCollection_ListIterator TopTools_ListIteratorOfListOfShape
#define TCollection_ListIterator_hxx <TopTools_ListIteratorOfListOfShape.hxx>
#define Handle_TCollection_ListNode Handle_TopTools_ListNodeOfListOfShape
#define TCollection_ListNode_Type_() TopTools_ListNodeOfListOfShape_Type_()
#define TCollection_List TopTools_ListOfShape
#define TCollection_List_hxx <TopTools_ListOfShape.hxx>

#include <TCollection_List.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx




#endif // _TopTools_ListOfShape_HeaderFile