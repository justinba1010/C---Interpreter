package Calc;
import Calc.Absyn.*;
/** BNFC-Generated Composition Visitor
*/

public class ComposVisitor<A> implements
  Calc.Absyn.Exp.Visitor<Calc.Absyn.Exp,A>
{
/* Exp */
    public Exp visit(Calc.Absyn.ESqrt p, A arg)
    {
      Exp exp_ = p.exp_.accept(this, arg);
      return new Calc.Absyn.ESqrt(exp_);
    }    public Exp visit(Calc.Absyn.EAdd p, A arg)
    {
      Exp exp_1 = p.exp_1.accept(this, arg);
      Exp exp_2 = p.exp_2.accept(this, arg);
      return new Calc.Absyn.EAdd(exp_1, exp_2);
    }    public Exp visit(Calc.Absyn.ESub p, A arg)
    {
      Exp exp_1 = p.exp_1.accept(this, arg);
      Exp exp_2 = p.exp_2.accept(this, arg);
      return new Calc.Absyn.ESub(exp_1, exp_2);
    }    public Exp visit(Calc.Absyn.EMul p, A arg)
    {
      Exp exp_1 = p.exp_1.accept(this, arg);
      Exp exp_2 = p.exp_2.accept(this, arg);
      return new Calc.Absyn.EMul(exp_1, exp_2);
    }    public Exp visit(Calc.Absyn.EDiv p, A arg)
    {
      Exp exp_1 = p.exp_1.accept(this, arg);
      Exp exp_2 = p.exp_2.accept(this, arg);
      return new Calc.Absyn.EDiv(exp_1, exp_2);
    }    public Exp visit(Calc.Absyn.EInt p, A arg)
    {
      Integer integer_ = p.integer_;
      return new Calc.Absyn.EInt(integer_);
    }
}
