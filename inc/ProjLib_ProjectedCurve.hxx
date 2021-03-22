// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ProjLib_ProjectedCurve_HeaderFile
#define _ProjLib_ProjectedCurve_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Real.hxx>
#include <Handle_Adaptor3d_HSurface.hxx>
#include <Handle_Adaptor3d_HCurve.hxx>
#include <ProjLib_Projector.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <GeomAbs_Shape.hxx>
#include <Standard_Integer.hxx>
#include <Handle_Adaptor2d_HCurve2d.hxx>
#include <Standard_Boolean.hxx>
#include <GeomAbs_CurveType.hxx>
#include <Handle_Geom2d_BezierCurve.hxx>
#include <Handle_Geom2d_BSplineCurve.hxx>
class Adaptor3d_HSurface;
class Adaptor3d_HCurve;
class Standard_OutOfRange;
class Standard_NoSuchObject;
class Standard_DomainError;
class Standard_NotImplemented;
class TColStd_Array1OfReal;
class Adaptor2d_HCurve2d;
class gp_Pnt2d;
class gp_Vec2d;
class gp_Lin2d;
class gp_Circ2d;
class gp_Elips2d;
class gp_Hypr2d;
class gp_Parab2d;
class Geom2d_BezierCurve;
class Geom2d_BSplineCurve;


//! Compute the 2d-curve.  Try to solve the particular
//! case if possible.  Otherwize, an approximation  is
//! done.
class ProjLib_ProjectedCurve  : public Adaptor2d_Curve2d
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT ProjLib_ProjectedCurve();
  
  Standard_EXPORT ProjLib_ProjectedCurve(const Handle(Adaptor3d_HSurface)& S);
  
  Standard_EXPORT ProjLib_ProjectedCurve(const Handle(Adaptor3d_HSurface)& S, const Handle(Adaptor3d_HCurve)& C);
  
  Standard_EXPORT ProjLib_ProjectedCurve(const Handle(Adaptor3d_HSurface)& S, const Handle(Adaptor3d_HCurve)& C, const Standard_Real Tol);
  
  //! Changes the tolerance used to project
  //! the curve on the surface
  Standard_EXPORT   void Load (const Standard_Real Tolerance) ;
  
  //! Changes the Surface.
  Standard_EXPORT   void Load (const Handle(Adaptor3d_HSurface)& S) ;
  
  //! Changes the Curve.
  Standard_EXPORT   void Load (const Handle(Adaptor3d_HCurve)& C) ;
  
  Standard_EXPORT  const  Handle(Adaptor3d_HSurface)& GetSurface()  const;
  
  Standard_EXPORT  const  Handle(Adaptor3d_HCurve)& GetCurve()  const;
  
  //! returns the tolerance reached if an approximation
  //! is Done.
  Standard_EXPORT   Standard_Real GetTolerance()  const;
  
  Standard_EXPORT   Standard_Real FirstParameter()  const;
  
  Standard_EXPORT   Standard_Real LastParameter()  const;
  
  Standard_EXPORT   GeomAbs_Shape Continuity()  const;
  
  //! If necessary,  breaks the  curve in  intervals  of
  //! continuity  <S>.    And  returns   the number   of
  //! intervals.
  Standard_EXPORT   Standard_Integer NbIntervals (const GeomAbs_Shape S)  const;
  
  //! Stores in <T> the  parameters bounding the intervals
  //! of continuity <S>.
  //!
  //! The array must provide  enough room to  accomodate
  //! for the parameters. i.e. T.Length() > NbIntervals()
  Standard_EXPORT   void Intervals (TColStd_Array1OfReal& T, const GeomAbs_Shape S)  const;
  
  //! Returns    a  curve equivalent   of  <me>  between
  //! parameters <First>  and <Last>. <Tol>  is used  to
  //! test for 3d points confusion.
  //! If <First> >= <Last>
  Standard_EXPORT   Handle(Adaptor2d_HCurve2d) Trim (const Standard_Real First, const Standard_Real Last, const Standard_Real Tol)  const;
  
  Standard_EXPORT   Standard_Boolean IsClosed()  const;
  
  Standard_EXPORT   Standard_Boolean IsPeriodic()  const;
  
  Standard_EXPORT   Standard_Real Period()  const;
  
  //! Computes the point of parameter U on the curve.
  Standard_EXPORT   gp_Pnt2d Value (const Standard_Real U)  const;
  
  //! Computes the point of parameter U on the curve.
  Standard_EXPORT   void D0 (const Standard_Real U, gp_Pnt2d& P)  const;
  
  //! Computes the point of parameter U on the curve with its
  //! first derivative.
  //! Raised if the continuity of the current interval
  //! is not C1.
  Standard_EXPORT   void D1 (const Standard_Real U, gp_Pnt2d& P, gp_Vec2d& V)  const;
  

  //! Returns the point P of parameter U, the first and second
  //! derivatives V1 and V2.
  //! Raised if the continuity of the current interval
  //! is not C2.
  Standard_EXPORT   void D2 (const Standard_Real U, gp_Pnt2d& P, gp_Vec2d& V1, gp_Vec2d& V2)  const;
  

  //! Returns the point P of parameter U, the first, the second
  //! and the third derivative.
  //! Raised if the continuity of the current interval
  //! is not C3.
  Standard_EXPORT   void D3 (const Standard_Real U, gp_Pnt2d& P, gp_Vec2d& V1, gp_Vec2d& V2, gp_Vec2d& V3)  const;
  

  //! The returned vector gives the value of the derivative for the
  //! order of derivation N.
  //! Raised if the continuity of the current interval
  //! is not CN.
  //! Raised if N < 1.
  Standard_EXPORT   gp_Vec2d DN (const Standard_Real U, const Standard_Integer N)  const;
  
  //! Returns the parametric  resolution corresponding
  //! to the real space resolution <R3d>.
  Standard_EXPORT   Standard_Real Resolution (const Standard_Real R3d)  const;
  
  //! Returns  the  type of the   curve  in the  current
  //! interval :   Line,   Circle,   Ellipse, Hyperbola,
  //! Parabola, BezierCurve, BSplineCurve, OtherCurve.
  Standard_EXPORT   GeomAbs_CurveType GetType()  const;
  
  Standard_EXPORT   gp_Lin2d Line()  const;
  
  Standard_EXPORT   gp_Circ2d Circle()  const;
  
  Standard_EXPORT   gp_Elips2d Ellipse()  const;
  
  Standard_EXPORT   gp_Hypr2d Hyperbola()  const;
  
  Standard_EXPORT   gp_Parab2d Parabola()  const;
  
  Standard_EXPORT   Standard_Integer Degree()  const;
  
  Standard_EXPORT   Standard_Boolean IsRational()  const;
  
  Standard_EXPORT   Standard_Integer NbPoles()  const;
  
  Standard_EXPORT   Standard_Integer NbKnots()  const;
  
  //! Warning ! This will  NOT make a copy  of the -- Bezier Curve -
  //! If you want to modify -- the Curve  please make a copy
  //! yourself --  Also it will  NOT trim the surface  to --
  //! myFirst/Last.
  Standard_EXPORT   Handle(Geom2d_BezierCurve) Bezier()  const;
  
  //! Warning ! This will NOT make a copy of the BSpline Curve - If
  //! you want to  modify the   Curve  please make a   copy
  //! yourself Also it   will  NOT  trim   the surface   to
  //! myFirst/Last.
  Standard_EXPORT   Handle(Geom2d_BSplineCurve) BSpline()  const;




protected:





private:



  Standard_Real myTolerance;
  Handle(Adaptor3d_HSurface) mySurface;
  Handle(Adaptor3d_HCurve) myCurve;
  ProjLib_Projector myResult;


};







#endif // _ProjLib_ProjectedCurve_HeaderFile