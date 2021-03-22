// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntPatch_ALine_HeaderFile
#define _IntPatch_ALine_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IntPatch_ALine.hxx>

#include <IntAna_Curve.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Integer.hxx>
#include <IntPatch_SequenceOfPoint.hxx>
#include <IntPatch_Line.hxx>
#include <IntSurf_TypeTrans.hxx>
#include <IntSurf_Situation.hxx>
#include <Standard_Real.hxx>
#include <gp_Pnt.hxx>
class Standard_DomainError;
class Standard_OutOfRange;
class IntAna_Curve;
class IntPatch_Point;
class gp_Pnt;
class gp_Vec;


//! Implementation of an intersection line described by a
//! parametrised curve.
class IntPatch_ALine : public IntPatch_Line
{

public:

  
  //! Creates an analytic intersection line
  //! when the transitions are In or Out.
  Standard_EXPORT IntPatch_ALine(const IntAna_Curve& C, const Standard_Boolean Tang, const IntSurf_TypeTrans Trans1, const IntSurf_TypeTrans Trans2);
  
  //! Creates an analytic intersection line
  //! when the transitions are Touch.
  Standard_EXPORT IntPatch_ALine(const IntAna_Curve& C, const Standard_Boolean Tang, const IntSurf_Situation Situ1, const IntSurf_Situation Situ2);
  
  //! Creates an analytic intersection line
  //! when the transitions are Undecided.
  Standard_EXPORT IntPatch_ALine(const IntAna_Curve& C, const Standard_Boolean Tang);
  
  //! To add a vertex in the list.
  Standard_EXPORT   void AddVertex (const IntPatch_Point& Pnt) ;
  
  //! Replaces the element of range Index in the list
  //! of points.
      void Replace (const Standard_Integer Index, const IntPatch_Point& Pnt) ;
  
      void SetFirstPoint (const Standard_Integer IndFirst) ;
  
      void SetLastPoint (const Standard_Integer IndLast) ;
  
  //! Returns the first parameter on the intersection line.
  //! If IsIncluded returns True, Value and D1 methods can
  //! be call with a parameter equal to FirstParamater.
  //! Otherwise, the parameter must be greater than
  //! FirstParameter.
      Standard_Real FirstParameter (Standard_Boolean& IsIncluded)  const;
  
  //! Returns the last parameter on the intersection line.
  //! If IsIncluded returns True, Value and D1 methods can
  //! be call with a parameter equal to LastParamater.
  //! Otherwise, the parameter must be less than LastParameter.
      Standard_Real LastParameter (Standard_Boolean& IsIncluded)  const;
  
  //! Returns the point of parameter U on the analytic
  //! intersection line.
      gp_Pnt Value (const Standard_Real U) ;
  
  //! Returns Standard_True when the derivative at parameter U
  //! is defined on the analytic intersection line.
  //! In that case, Du is the derivative.
  //! Returns Standard_False when it is not possible to
  //! evaluate the derivative.
  //! In both cases, P is the point at parameter U on the
  //! intersection.
      Standard_Boolean D1 (const Standard_Real U, gp_Pnt& P, gp_Vec& Du) ;
  
  //! Tries to find the parameter of the point P on the curve.
  //! If the method returns False, the "projection" is
  //! impossible, and the value of Para is not significant.
  //! If the method returns True, Para is the parameter of the
  //! nearest intersection between the curve and the iso-theta
  //! containing P.
      Standard_Boolean FindParameter (const gp_Pnt& P, Standard_Real& Para)  const;
  
  //! Returns True if the line has a known First point.
  //! This point is given by the method FirstPoint().
      Standard_Boolean HasFirstPoint()  const;
  
  //! Returns True if the line has a known Last point.
  //! This point is given by the method LastPoint().
      Standard_Boolean HasLastPoint()  const;
  
  //! Returns the IntPoint corresponding to the FirstPoint.
  //! An exception is raised when HasFirstPoint returns False.
     const  IntPatch_Point& FirstPoint()  const;
  
  //! Returns the IntPoint corresponding to the LastPoint.
  //! An exception is raised when HasLastPoint returns False.
     const  IntPatch_Point& LastPoint()  const;
  
      Standard_Integer NbVertex()  const;
  
  //! Returns the vertex of range Index on the line.
     const  IntPatch_Point& Vertex (const Standard_Integer Index)  const;
  
  //! Set the parameters of all the vertex on the line.
  //! if a vertex is already in the line,
  //! its parameter is modified
  //! else a new point in the line is inserted.
  Standard_EXPORT   void ComputeVertexParameters (const Standard_Real Tol) ;
  
  Standard_EXPORT  const  IntAna_Curve& Curve()  const;




  DEFINE_STANDARD_RTTI(IntPatch_ALine)

protected:




private: 


  IntAna_Curve curv;
  Standard_Boolean fipt;
  Standard_Boolean lapt;
  Standard_Integer indf;
  Standard_Integer indl;
  IntPatch_SequenceOfPoint svtx;


};


#include <IntPatch_ALine.lxx>





#endif // _IntPatch_ALine_HeaderFile