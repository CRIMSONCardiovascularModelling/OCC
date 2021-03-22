// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOPTools_AlgoTools2D_HeaderFile
#define _BOPTools_AlgoTools2D_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Boolean.hxx>
#include <Standard_Real.hxx>
#include <Handle_Geom2d_Curve.hxx>
#include <Handle_Geom_Curve.hxx>
#include <BOPCol_ListOfShape.hxx>
#include <Standard_Integer.hxx>
#include <Handle_IntTools_Context.hxx>
class TopoDS_Edge;
class TopoDS_Face;
class gp_Vec;
class Geom2d_Curve;
class Geom_Curve;
class BRepAdaptor_Surface;
class ProjLib_ProjectedCurve;
class IntTools_Context;



//! The class contains handy static functions
//! dealing with the topology
//! This is the copy of the BOPTools_AlgoTools2D.cdl
class BOPTools_AlgoTools2D 
{
public:

  DEFINE_STANDARD_ALLOC

  

  //! Compute P-Curve for the edge <aE> on the face <aF>
  //! Raises exception Standard_ConstructionError if projection algorithm fails
  Standard_EXPORT static   void BuildPCurveForEdgeOnFace (const TopoDS_Edge& aE, const TopoDS_Face& aF) ;
  

  //! Compute tangent for the edge  <aE> [in 3D]  at parameter <aT>
  Standard_EXPORT static   Standard_Boolean EdgeTangent (const TopoDS_Edge& anE, const Standard_Real aT, gp_Vec& Tau) ;
  

  //! Compute surface parameters <U,V> of the face <aF>
  //! for  the point from the edge <aE> at parameter <aT>.
  //! If <aE> has't pcurve on surface, algorithm tries to get it by
  //! projection and can
  //! raise exception Standard_ConstructionError if projection algorithm fails
  Standard_EXPORT static   void PointOnSurface (const TopoDS_Edge& aE, const TopoDS_Face& aF, const Standard_Real aT, Standard_Real& U, Standard_Real& V) ;
  

  //! Get P-Curve <aC>  for the edge <aE> on surface <aF> .
  //! If the P-Curve does not exist, build  it using Make2D().
  //! [aToler] - reached tolerance
  //! Raises exception Standard_ConstructionError if algorithm Make2D() fails
  Standard_EXPORT static   void CurveOnSurface (const TopoDS_Edge& aE, const TopoDS_Face& aF, Handle(Geom2d_Curve)& aC, Standard_Real& aToler) ;
  

  //! Get P-Curve <aC>  for the edge <aE> on surface <aF> .
  //! If the P-Curve does not exist, build  it using Make2D().
  //! [aFirst, aLast] - range of the P-Curve
  //! [aToler] - reached tolerance
  //! Raises exception Standard_ConstructionError if algorithm Make2D() fails
  Standard_EXPORT static   void CurveOnSurface (const TopoDS_Edge& aE, const TopoDS_Face& aF, Handle(Geom2d_Curve)& aC, Standard_Real& aFirst, Standard_Real& aLast, Standard_Real& aToler) ;
  

  //! Returns TRUE if the edge <aE>  has  P-Curve <aC>
  //! on surface <aF> .
  //! [aFirst, aLast] - range of the P-Curve
  //! [aToler] - reached tolerance
  //! If the P-Curve does not exist, aC.IsNull()=TRUE.
  Standard_EXPORT static   Standard_Boolean HasCurveOnSurface (const TopoDS_Edge& aE, const TopoDS_Face& aF, Handle(Geom2d_Curve)& aC, Standard_Real& aFirst, Standard_Real& aLast, Standard_Real& aToler) ;
  

  //! Returns TRUE if the edge <aE>  has  P-Curve <aC>
  //! on surface <aF> .
  //! If the P-Curve does not exist, aC.IsNull()=TRUE.
  Standard_EXPORT static   Standard_Boolean HasCurveOnSurface (const TopoDS_Edge& aE, const TopoDS_Face& aF) ;
  

  //! Adjust P-Curve <aC2D> (3D-curve <C3D>) on surface <aF> .
  Standard_EXPORT static   void AdjustPCurveOnFace (const TopoDS_Face& aF, const Handle(Geom_Curve)& C3D, const Handle(Geom2d_Curve)& aC2D, Handle(Geom2d_Curve)& aC2DA) ;
  

  //! Adjust P-Curve <aC2D> (3D-curve <C3D>) on surface <aF> .
  //! [aT1,  aT2] - range to adjust
  Standard_EXPORT static   void AdjustPCurveOnFace (const TopoDS_Face& aF, const Standard_Real aT1, const Standard_Real aT2, const Handle(Geom2d_Curve)& aC2D, Handle(Geom2d_Curve)& aC2DA) ;
  

  //! Adjust P-Curve <aC2D> (3D-curve <C3D>) on surface <aF> .
  //! [aT1,  aT2] - range to adjust
  Standard_EXPORT static   void AdjustPCurveOnFace (const BRepAdaptor_Surface& aF, const Standard_Real aT1, const Standard_Real aT2, const Handle(Geom2d_Curve)& aC2D, Handle(Geom2d_Curve)& aC2DA) ;
  

  //! Compute intermediate  value in  between [aFirst, aLast] .
  Standard_EXPORT static   Standard_Real IntermediatePoint (const Standard_Real aFirst, const Standard_Real aLast) ;
  

  //! Compute intermediate value of parameter for the edge <anE>.
  Standard_EXPORT static   Standard_Real IntermediatePoint (const TopoDS_Edge& anE) ;
  
  Standard_EXPORT static   void BuildPCurveForEdgeOnPlane (const TopoDS_Edge& theE, const TopoDS_Face& theF) ;
  
  Standard_EXPORT static   void BuildPCurveForEdgeOnPlane (const TopoDS_Edge& theE, const TopoDS_Face& theF, Handle(Geom2d_Curve)& theC2D, Standard_Boolean& bToUpdate) ;
  
  Standard_EXPORT static   void BuildPCurveForEdgesOnPlane (const BOPCol_ListOfShape& theLE, const TopoDS_Face& theF) ;
  

  //! Make P-Curve <aC> for the edge <aE> on surface <aF> .
  //! [aFirst, aLast] - range of the P-Curve
  //! [aToler] - reached tolerance
  //! Raises exception Standard_ConstructionError if algorithm fails
  Standard_EXPORT static   void Make2D (const TopoDS_Edge& aE, const TopoDS_Face& aF, Handle(Geom2d_Curve)& aC, Standard_Real& aFirst, Standard_Real& aLast, Standard_Real& aToler) ;
  

  //! Make P-Curve <aC> for the 3D-curve <C3D> on surface <aF> .
  //! [aToler] - reached tolerance
  //! Raises exception Standard_ConstructionError if projection algorithm fails
  Standard_EXPORT static   void MakePCurveOnFace (const TopoDS_Face& aF, const Handle(Geom_Curve)& C3D, Handle(Geom2d_Curve)& aC, Standard_Real& aToler) ;
  

  //! Make P-Curve <aC> for the 3D-curve <C3D> on surface <aF> .
  //! [aT1,  aT2] - range to build
  //! [aToler] - reached tolerance
  //! Raises exception Standard_ConstructionError if projection algorithm fails
  Standard_EXPORT static   void MakePCurveOnFace (const TopoDS_Face& aF, const Handle(Geom_Curve)& C3D, const Standard_Real aT1, const Standard_Real aT2, Handle(Geom2d_Curve)& aC, Standard_Real& aToler) ;
  

  //! Make empty  P-Curve <aC> of relevant to <PC> type
  Standard_EXPORT static   void MakePCurveOfType (const ProjLib_ProjectedCurve& PC, Handle(Geom2d_Curve)& aC) ;
  

  //! Attach P-Curve from the edge <aEold> on surface <aF>
  //! to the edge <aEnew>
  //! Returns 0 in case of success
  Standard_EXPORT static   Standard_Integer AttachExistingPCurve (const TopoDS_Edge& aEold, const TopoDS_Edge& aEnew, const TopoDS_Face& aF, const Handle(IntTools_Context)& aCtx) ;




protected:





private:





};







#endif // _BOPTools_AlgoTools2D_HeaderFile