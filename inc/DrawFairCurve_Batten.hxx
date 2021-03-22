// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DrawFairCurve_Batten_HeaderFile
#define _DrawFairCurve_Batten_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_DrawFairCurve_Batten.hxx>

#include <Standard_Address.hxx>
#include <DrawTrSurf_BSplineCurve2d.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Real.hxx>
#include <Standard_OStream.hxx>
class gp_Pnt2d;


//! Interactive Draw object of type "Batten"
class DrawFairCurve_Batten : public DrawTrSurf_BSplineCurve2d
{

public:

  
  Standard_EXPORT DrawFairCurve_Batten(const Standard_Address TheBatten);
  
  Standard_EXPORT   void Compute() ;
  
  Standard_EXPORT   void SetPoint (const Standard_Integer Side, const gp_Pnt2d& Point) ;
  
  Standard_EXPORT   void SetAngle (const Standard_Integer Side, const Standard_Real Angle) ;
  
  Standard_EXPORT   void SetSliding (const Standard_Real Length) ;
  
  Standard_EXPORT   void SetHeight (const Standard_Real Heigth) ;
  
  Standard_EXPORT   void SetSlope (const Standard_Real Slope) ;
  
  Standard_EXPORT   Standard_Real GetAngle (const Standard_Integer Side)  const;
  
  Standard_EXPORT   Standard_Real GetSliding()  const;
  
  Standard_EXPORT   void FreeSliding() ;
  
  Standard_EXPORT   void FreeAngle (const Standard_Integer Side) ;
  
  //! For variable dump.
  Standard_EXPORT virtual   void Dump (Standard_OStream& S)  const;




  DEFINE_STANDARD_RTTI(DrawFairCurve_Batten)

protected:


  Standard_Address MyBatten;


private: 




};







#endif // _DrawFairCurve_Batten_HeaderFile