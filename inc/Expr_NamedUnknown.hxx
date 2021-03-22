// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Expr_NamedUnknown_HeaderFile
#define _Expr_NamedUnknown_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Expr_NamedUnknown.hxx>

#include <Handle_Expr_GeneralExpression.hxx>
#include <Expr_NamedExpression.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Real.hxx>
class Expr_GeneralExpression;
class Expr_NotAssigned;
class Standard_OutOfRange;
class Standard_NumericError;
class Expr_InvalidAssignment;
class Expr_InvalidOperand;
class Expr_NotEvaluable;
class TCollection_AsciiString;
class Expr_Array1OfNamedUnknown;
class TColStd_Array1OfReal;


//! This class describes any variable of an expression.
//! Assignment is treated directly in this class.
class Expr_NamedUnknown : public Expr_NamedExpression
{

public:

  
  Standard_EXPORT Expr_NamedUnknown(const TCollection_AsciiString& name);
  
  //! Tests if an expression is assigned to <me>.
      Standard_Boolean IsAssigned()  const;
  
  //! If exists, returns the assigned expression.
  //! An exception is raised if the expression does not exist.
  Standard_EXPORT  const  Handle(Expr_GeneralExpression)& AssignedExpression()  const;
  
  //! Assigns <me> to <exp> expression.
  //! Raises exception if <exp> refers to <me>.
  Standard_EXPORT   void Assign (const Handle(Expr_GeneralExpression)& exp) ;
  
  //! Supresses the assigned expression
      void Deassign() ;
  
  //! Returns the number of sub-expressions contained
  //! in <me> ( >= 0)
  Standard_EXPORT   Standard_Integer NbSubExpressions()  const;
  
  //! Returns the <I>-th sub-expression of <me>
  //! raises OutOfRange if <I> > NbSubExpressions(me)
  Standard_EXPORT  const  Handle(Expr_GeneralExpression)& SubExpression (const Standard_Integer I)  const;
  
  //! Returns a GeneralExpression after replacement of
  //! NamedUnknowns by an associated expression and after
  //! values computation.
  Standard_EXPORT   Handle(Expr_GeneralExpression) Simplified()  const;
  
  //! Returns a GeneralExpression after a simplification
  //! of the arguments of <me>.
  Standard_EXPORT   Handle(Expr_GeneralExpression) ShallowSimplified()  const;
  
  //! Returns a copy of <me> having the same unknowns and functions.
  Standard_EXPORT   Handle(Expr_GeneralExpression) Copy()  const;
  
  //! Tests if <me> contains NamedUnknown.
  Standard_EXPORT   Standard_Boolean ContainsUnknowns()  const;
  
  //! Tests if <exp> is contained in <me>.
  Standard_EXPORT   Standard_Boolean Contains (const Handle(Expr_GeneralExpression)& exp)  const;
  
  Standard_EXPORT   Standard_Boolean IsLinear()  const;
  
  //! Returns the derivative on <X> unknown of <me>
  Standard_EXPORT   Handle(Expr_GeneralExpression) Derivative (const Handle(Expr_NamedUnknown)& X)  const;
  
  //! Replaces all occurences of <var> with <with> in <me>
  //! Raises InvalidOperand if <with> contains <me>.
  Standard_EXPORT   void Replace (const Handle(Expr_NamedUnknown)& var, const Handle(Expr_GeneralExpression)& with) ;
  
  //! Returns the value of <me> (as a Real) by
  //! replacement of <vars> by <vals>.
  //! Raises NotEvaluable if <me> contains NamedUnknown not
  //! in <vars> or NumericError if result cannot be computed.
  Standard_EXPORT   Standard_Real Evaluate (const Expr_Array1OfNamedUnknown& vars, const TColStd_Array1OfReal& vals)  const;




  DEFINE_STANDARD_RTTI(Expr_NamedUnknown)

protected:




private: 


  Handle(Expr_GeneralExpression) myExpression;


};


#include <Expr_NamedUnknown.lxx>





#endif // _Expr_NamedUnknown_HeaderFile