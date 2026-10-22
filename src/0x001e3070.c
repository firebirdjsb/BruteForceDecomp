/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FA38379F81DD26415D771266FC17296B53125C464198A6749790461C3B9595A2
 * Entry: 0x001e3070, Ghidra index: 6761, label: FUN_001e3070
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e3070(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (param_2 - param_1) / 0x38;
  if (0 < iVar1) {
    iVar2 = iVar1 * 0x1c + param_1;
    do {
      iVar2 = iVar2 + -0x1c;
      iVar1 = iVar1 + -1;
      FUN_0001f4f0(iVar2,0,0xffffffff);
      FUN_001e3260(param_1);
    } while (0 < iVar1);
  }
  return;
}
