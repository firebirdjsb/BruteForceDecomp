/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8C36B41B5E054B33DE53725FCCD5678EDB8879EAA1F7D843EE004805FC9A2F31
 * Entry: 0x001d1230, Ghidra index: 6234, label: FUN_001d1230
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d1230(int param_1,int param_2)

{
  int unaff_EDI;
  
  if (param_1 != param_2) {
    do {
      FUN_0001f4f0(unaff_EDI,0,0xffffffff);
      FUN_001d5b10(unaff_EDI + 0x1c);
      FUN_001d5b10(unaff_EDI + 0x2c);
      FUN_0010bc40();
      param_1 = param_1 + 0x4c;
    } while (param_1 != param_2);
  }
  return;
}
