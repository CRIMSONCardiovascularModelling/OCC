// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRep_WPointInter_HeaderFile
#define _TopOpeBRep_WPointInter_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TopOpeBRep_PPntOn2S.hxx>
#include <Standard_Real.hxx>
class IntSurf_PntOn2S;
class gp_Pnt2d;
class gp_Pnt;



class TopOpeBRep_WPointInter 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopOpeBRep_WPointInter();
  
  Standard_EXPORT   void Set (const IntSurf_PntOn2S& P) ;
  
  Standard_EXPORT   void ParametersOnS1 (Standard_Real& U, Standard_Real& V)  const;
  
  Standard_EXPORT   void ParametersOnS2 (Standard_Real& U, Standard_Real& V)  const;
  
  Standard_EXPORT   void Parameters (Standard_Real& U1, Standard_Real& V1, Standard_Real& U2, Standard_Real& V2)  const;
  
  Standard_EXPORT   gp_Pnt2d ValueOnS1()  const;
  
  Standard_EXPORT   gp_Pnt2d ValueOnS2()  const;
  
  Standard_EXPORT  const  gp_Pnt& Value()  const;
  
  Standard_EXPORT   TopOpeBRep_PPntOn2S PPntOn2SDummy()  const;




protected:





private:



  TopOpeBRep_PPntOn2S myPP2S;


};







#endif // _TopOpeBRep_WPointInter_HeaderFile