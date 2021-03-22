// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <Adaptor3d_HCurveOnSurface.hxx>

#include <Standard_Type.hxx>

#include <Standard_OutOfRange.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_DomainError.hxx>
#include <Adaptor3d_CurveOnSurface.hxx>
#include <Adaptor3d_Curve.hxx>

 


IMPLEMENT_STANDARD_TYPE(Adaptor3d_HCurveOnSurface)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Adaptor3d_HCurve),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Adaptor3d_HCurveOnSurface)


IMPLEMENT_DOWNCAST(Adaptor3d_HCurveOnSurface,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Adaptor3d_HCurveOnSurface)


#define TheCurve Adaptor3d_CurveOnSurface
#define TheCurve_hxx <Adaptor3d_CurveOnSurface.hxx>
#define Adaptor3d_GenHCurve Adaptor3d_HCurveOnSurface
#define Adaptor3d_GenHCurve_hxx <Adaptor3d_HCurveOnSurface.hxx>
#define Handle_Adaptor3d_GenHCurve Handle_Adaptor3d_HCurveOnSurface
#define Adaptor3d_GenHCurve_Type_() Adaptor3d_HCurveOnSurface_Type_()
#include <Adaptor3d_GenHCurve.gxx>
