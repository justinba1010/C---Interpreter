package Calc;
import Calc.Absyn.*;
/** BNFC-Generated Abstract Visitor */
public class AbstractVisitor<R,A> implements AllVisitor<R,A> {
/* Exp */
    public R visit(Calc.Absyn.ESqrt p, A arg) { return visitDefault(p, arg); }
    public R visit(Calc.Absyn.EAdd p, A arg) { return visitDefault(p, arg); }
    public R visit(Calc.Absyn.ESub p, A arg) { return visitDefault(p, arg); }

    public R visit(Calc.Absyn.EMul p, A arg) { return visitDefault(p, arg); }
    public R visit(Calc.Absyn.EDiv p, A arg) { return visitDefault(p, arg); }

    public R visit(Calc.Absyn.EInt p, A arg) { return visitDefault(p, arg); }

    public R visitDefault(Calc.Absyn.Exp p, A arg) {
      throw new IllegalArgumentException(this.getClass().getName() + ": " + p);
    }

}
