/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4A5C53CC9D7A09E3ACF2A64835145EEC68F95ADEB3A4C54C503A77988F09C19F
 * Entry: 0x0004e4d0, Ghidra index: 669, label: FUN_0004e4d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0004e4d0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 != param_2) && (iVar3 = param_1 + 8, iVar3 != param_2)) {
    iVar4 = param_1 + 0x10;
    do {
      iVar1 = iVar3;
      iVar2 = param_1;
      if (*(float *)(param_1 + 4) <= *(float *)(iVar4 + -4)) {
        do {
          iVar2 = iVar1;
          iVar1 = iVar2 + -8;
        } while (*(float *)(iVar4 + -4) < *(float *)(iVar2 + -4));
      }
      if ((iVar2 != iVar3) && (iVar3 != iVar4)) {
        FUN_0004e7f0(iVar2,iVar3,iVar4,0,0);
      }
      iVar3 = iVar3 + 8;
      iVar4 = iVar4 + 8;
    } while (iVar3 != param_2);
  }
  return;
}
