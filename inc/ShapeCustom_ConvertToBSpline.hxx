// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeCustom_ConvertToBSpline_HeaderFile
#define _ShapeCustom_ConvertToBSpline_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_ShapeCustom_ConvertToBSpline.hxx>

#include <Standard_Boolean.hxx>
#include <ShapeCustom_Modification.hxx>
#include <Handle_Geom_Surface.hxx>
#include <Standard_Real.hxx>
#include <Handle_Geom_Curve.hxx>
#include <Handle_Geom2d_Curve.hxx>
#include <GeomAbs_Shape.hxx>
class TopoDS_Face;
class Geom_Surface;
class TopLoc_Location;
class TopoDS_Edge;
class Geom_Curve;
class TopoDS_Vertex;
class gp_Pnt;
class Geom2d_Curve;


//! implement a modification for BRepTools
//! Modifier algortihm. Converts Surface of
//! Linear Exctrusion, Revolution and Offset
//! surfaces into BSpline Surface according to
//! flags.
class ShapeCustom_ConvertToBSpline : public ShapeCustom_Modification
{

public:

  
  Standard_EXPORT ShapeCustom_ConvertToBSpline();
  
  //! Sets mode for convertion of Surfaces of Linear
  //! extrusion.
  Standard_EXPORT   void SetExtrusionMode (const Standard_Boolean extrMode) ;
  
  //! Sets mode for convertion of Surfaces of Revolution.
  Standard_EXPORT   void SetRevolutionMode (const Standard_Boolean revolMode) ;
  
  //! Sets mode for convertion of Offset surfaces.
  Standard_EXPORT   void SetOffsetMode (const Standard_Boolean offsetMode) ;
  
  //! Sets mode for convertion of Plane surfaces.
  Standard_EXPORT   void SetPlaneMode (const Standard_Boolean planeMode) ;
  
  //! Returns Standard_True if the face <F> has  been
  //! modified. In this case, <S> is the new geometric
  //! support of the face, <L> the new location,  <Tol>
  //! the new tolerance.  Otherwise, returns
  //! Standard_False, and <S>, <L>, <Tol> are  not
  //! significant.
  Standard_EXPORT   Standard_Boolean NewSurface (const TopoDS_Face& F, Handle(Geom_Surface)& S, TopLoc_Location& L, Standard_Real& Tol, Standard_Boolean& RevWires, Standard_Boolean& RevFace) ;
  
  //! Returns Standard_True  if  the edge  <E> has  been
  //! modified.  In this case,  <C> is the new geometric
  //! support of the  edge, <L> the  new location, <Tol>
  //! the         new    tolerance.   Otherwise, returns
  //! Standard_False,    and  <C>,  <L>,   <Tol> are not
  //! significant.
  Standard_EXPORT   Standard_Boolean NewCurve (const TopoDS_Edge& E, Handle(Geom_Curve)& C, TopLoc_Location& L, Standard_Real& Tol) ;
  
  //! Returns  Standard_True if the  vertex <V> has been
  //! modified.  In this  case, <P> is the new geometric
  //! support of the vertex,   <Tol> the new  tolerance.
  //! Otherwise, returns Standard_False, and <P>,  <Tol>
  //! are not significant.
  Standard_EXPORT   Standard_Boolean NewPoint (const TopoDS_Vertex& V, gp_Pnt& P, Standard_Real& Tol) ;
  
  //! Returns Standard_True if  the edge  <E> has a  new
  //! curve on surface on the face <F>.In this case, <C>
  //! is the new geometric support of  the edge, <L> the
  //! new location, <Tol> the new tolerance.
  //!
  //! Otherwise, returns  Standard_False, and <C>,  <L>,
  //! <Tol> are not significant.
  //!
  //! <NewE> is the new  edge created from  <E>.  <NewF>
  //! is the new face created from <F>. They may be usefull.
  Standard_EXPORT   Standard_Boolean NewCurve2d (const TopoDS_Edge& E, const TopoDS_Face& F, const TopoDS_Edge& NewE, const TopoDS_Face& NewF, Handle(Geom2d_Curve)& C, Standard_Real& Tol) ;
  
  //! Returns Standard_True if the Vertex  <V> has a new
  //! parameter on the  edge <E>. In  this case,  <P> is
  //! the parameter,    <Tol>  the     new    tolerance.
  //! Otherwise, returns Standard_False, and <P>,  <Tol>
  //! are not significant.
  Standard_EXPORT   Standard_Boolean NewParameter (const TopoDS_Vertex& V, const TopoDS_Edge& E, Standard_Real& P, Standard_Real& Tol) ;
  
  //! Returns the  continuity of  <NewE> between <NewF1>
  //! and <NewF2>.
  //!
  //! <NewE> is the new  edge created from <E>.  <NewF1>
  //! (resp. <NewF2>) is the new  face created from <F1>
  //! (resp. <F2>).
  Standard_EXPORT   GeomAbs_Shape Continuity (const TopoDS_Edge& E, const TopoDS_Face& F1, const TopoDS_Face& F2, const TopoDS_Edge& NewE, const TopoDS_Face& NewF1, const TopoDS_Face& NewF2) ;




  DEFINE_STANDARD_RTTI(ShapeCustom_ConvertToBSpline)

protected:




private: 

  
  Standard_EXPORT   Standard_Boolean IsToConvert (const Handle(Geom_Surface)& S, Handle(Geom_Surface)& SS)  const;

  Standard_Boolean myExtrMode;
  Standard_Boolean myRevolMode;
  Standard_Boolean myOffsetMode;
  Standard_Boolean myPlaneMode;


};







#endif // _ShapeCustom_ConvertToBSpline_HeaderFile