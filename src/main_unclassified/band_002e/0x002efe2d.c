/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 018DBE5CACD07020A294B84FCB8D6947D5419023DAE742E30638157BA71FD2B2
 * Entry: 0x002efe2d, Ghidra index: 10730, label: __cfltcvt
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    __cfltcvt
   
   Library: Visual Studio 2003 Release */

void __cfltcvt(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
              undefined4 param_5)

{
  if ((param_3 == 0x65) || (param_3 == 0x45)) {
    FUN_002efbb6(param_1,param_2,param_4,param_5);
  }
  else {
    if (param_3 == 0x66) {
      FUN_002efca4(param_1,param_2,param_4);
      return;
    }
    FUN_002efd83(param_1,param_2,param_4,param_5);
  }
  return;
}
