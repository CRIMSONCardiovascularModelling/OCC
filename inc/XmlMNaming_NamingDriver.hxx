// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XmlMNaming_NamingDriver_HeaderFile
#define _XmlMNaming_NamingDriver_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_XmlMNaming_NamingDriver.hxx>

#include <XmlMDF_ADriver.hxx>
#include <Handle_CDM_MessageDriver.hxx>
#include <Handle_TDF_Attribute.hxx>
#include <Standard_Boolean.hxx>
#include <XmlObjMgt_RRelocationTable.hxx>
#include <XmlObjMgt_SRelocationTable.hxx>
class CDM_MessageDriver;
class TDF_Attribute;
class XmlObjMgt_Persistent;



class XmlMNaming_NamingDriver : public XmlMDF_ADriver
{

public:

  
  Standard_EXPORT XmlMNaming_NamingDriver(const Handle(CDM_MessageDriver)& aMessageDriver);
  
  Standard_EXPORT   Handle(TDF_Attribute) NewEmpty()  const;
  
  Standard_EXPORT   Standard_Boolean Paste (const XmlObjMgt_Persistent& theSource, const Handle(TDF_Attribute)& theTarget, XmlObjMgt_RRelocationTable& theRelocTable)  const;
  
  Standard_EXPORT   void Paste (const Handle(TDF_Attribute)& theSource, XmlObjMgt_Persistent& theTarget, XmlObjMgt_SRelocationTable& theRelocTable)  const;




  DEFINE_STANDARD_RTTI(XmlMNaming_NamingDriver)

protected:




private: 




};







#endif // _XmlMNaming_NamingDriver_HeaderFile