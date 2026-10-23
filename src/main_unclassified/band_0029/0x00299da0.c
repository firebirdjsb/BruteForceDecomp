/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 28489C45D3605540B6E3755F3C242359862FB2CBEFE98C3FC474EF50589C1E00
 * Entry: 0x00299da0, Ghidra index: 9394, label: FUN_00299da0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00299da0(void)

{
  int iVar1;
  int *in_EDX;
  
  iVar1 = *in_EDX;
  if (iVar1 == 0) {
    FUN_00299580(0x19,in_EDX[1],0xffffffff);
  }
  else {
    if (iVar1 == 1) {
      FUN_00299580(0x17,in_EDX[1],0xffffffff);
      return;
    }
    if (iVar1 == 3) {
      FUN_00299600(0x1a);
      return;
    }
  }
  return;
}
