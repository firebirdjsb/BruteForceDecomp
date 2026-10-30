/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D2373B0FDCFADD6C1E4D021FDB348BCAAD1707ABC47B0A6615B9FA59DC750CA3
 * Entry: 0x002ec8cc, Ghidra index: 10662, label: __errcode
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    __errcode
   
   Library: Visual Studio 2003 Release */

int __errcode(byte param_1)

{
  undefined4 uStack_4;
  
  if ((param_1 & 0x20) == 0) {
    if ((param_1 & 8) != 0) {
      return 1;
    }
    if ((param_1 & 4) == 0) {
      if ((param_1 & 1) == 0) {
        return (param_1 & 2) << 1;
      }
      uStack_4 = 3;
    }
    else {
      uStack_4 = 2;
    }
  }
  else {
    uStack_4 = 5;
  }
  return uStack_4;
}
