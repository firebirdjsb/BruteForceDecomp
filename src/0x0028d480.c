/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B1081EF00CB1C4E55F7669DEC9DC9E2A3CCC40293383F8B0A0A2944AE3DBFBE2
 * Entry: 0x0028d480, Ghidra index: 9192, label: FUN_0028d480
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_0028d480(float param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *unaff_EBX;
  int iVar6;
  undefined1 local_10 [4];
  int local_c;
  int local_8;
  
  FUN_001e0dd0(local_10);
  iVar6 = 0;
  if (local_c == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = local_8 - local_c >> 2;
  }
  iVar3 = iVar3 / 2;
  iVar4 = iVar3;
  if (iVar3 != 0) {
    do {
      iVar6 = iVar4;
      iVar4 = iVar3 / 2;
      if (param_1 < *(float *)(local_c + iVar6 * 4)) {
        iVar4 = -iVar4;
      }
      iVar4 = iVar6 + iVar4;
      uVar5 = iVar6 - iVar4 >> 0x1f;
      iVar3 = (iVar6 - iVar4 ^ uVar5) - uVar5;
    } while (iVar4 != iVar6);
  }
  fVar1 = *(float *)(local_c + iVar6 * 4);
  if (param_1 <= fVar1) {
    fVar2 = *(float *)(local_c + -4 + iVar6 * 4);
    iVar6 = iVar6 + -1;
    fVar1 = (param_1 - fVar2) / (fVar1 - fVar2);
  }
  else {
    fVar1 = (param_1 - fVar1) / (*(float *)(local_c + 4 + iVar6 * 4) - fVar1);
  }
  *unaff_EBX = iVar6;
  if (local_c == 0) {
    return (float10)fVar1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(local_c);
}
