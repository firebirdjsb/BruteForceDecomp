/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 23BFED76E7F6F34D30DFA9007339CD19D27B17A9D07B97380AA75706FEFCA903
 * Entry: 0x001d6c40, Ghidra index: 6375, label: FUN_001d6c40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Ghidra callee 0x001D1AF0 has no explicit source parameters.
 * Implicit guest registers and C++ object ABI remain ABI_UNVERIFIED. */
extern void FUN_001d1af0(void);
int FUN_001d6c40(int param_1,int param_2)

{
  int in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0xac) {
    FUN_001d1af0();
    in_EAX = in_EAX + 0xac;
  }
  return in_EAX;
}
