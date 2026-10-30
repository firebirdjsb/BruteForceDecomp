/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AFEC9A60349BC385DE99D4D96752072FD067E445DB577E0EAF4308E0A0426178
 * Entry: 0x00104b60, Ghidra index: 3327, label: FUN_00104b60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00104b60(float *param_1)

{
  int iVar1;
  int *in_EDX;
  int *extraout_EDX;
  int *piVar2;
  undefined4 unaff_EBX;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float local_4;
  
  iVar3 = 0;
  local_4 = 0.0;
  iVar4 = 0x20;
  do {
    piVar2 = in_EDX + 1;
    if ((*piVar2 != 0) && (iVar1 = in_EDX[0x21], iVar1 != 0)) {
      fVar5 = (float10)0.0;
      if (iVar1 + 4 != 0) {
        fVar5 = (float10)FUN_0008e620(iVar1,unaff_EBX,iVar1 + 4);
        piVar2 = extraout_EDX;
      }
      if ((float10)local_4 < fVar5) {
        iVar3 = *piVar2;
        local_4 = (float)fVar5;
      }
    }
    iVar4 = iVar4 + -1;
    in_EDX = piVar2;
  } while (iVar4 != 0);
  if (iVar3 != 0) {
    *param_1 = local_4;
  }
  return iVar3;
}
