/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 88885DCCB283C37DF41F30ECE64183A8538F79B61C0AEB71E6B13DE910B6EDBF
 * Entry: 0x001cfc60, Ghidra index: 6146, label: FUN_001cfc60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001cfc60(int param_1,int param_2)

{
  undefined4 unaff_EDI;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x50) {
    FUN_001d1dc0(unaff_EDI);
  }
  return;
}
