#include "alang/op.hpp"

namespace alang {
  Op::Imp::Imp(OpCode code, const optional<Form> form): code(code), form(form) {}
  Op::Imp::~Imp() {}

  Op::Op(shared_ptr<const Imp> imp): imp(imp) {}

  void Op::dump(ostream& out) const { imp->dump(out); }

  ostream &operator<<(ostream &out, Op val) {
    val.dump(out);
    return out;
  }
}
