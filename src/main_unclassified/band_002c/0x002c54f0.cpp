/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B154427F9085BABD1CABFDACEF1CEB33D4C3206F29EF18A35C2CEB2CA4AAA50E
 * Entry: 0x002c54f0, Ghidra index: 10063, label: FUN_002c54f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c54f0(void)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int unaff_EBX;
  uint uVar4;
  float10 fVar5;
  
  uVar4 = (uint)*(ushort *)(unaff_EBX + 0x3e);
  while (uVar4 = uVar4 - 1, -1 < (int)uVar4) {
    iVar1 = *(int *)(*(int *)(unaff_EBX + 0x40) + uVar4 * 4);
    fVar3 = *(float *)(*(int *)(*(int *)(iVar1 + 0x2c) + 0xc) + 0x130) * *(float *)(iVar1 + 0x28);
    *(float *)(iVar1 + 0x28) = fVar3;
    if (0.0 < fVar3) {
      fVar5 = (float10)FUN_002c5bc0(fVar3);
      iVar2 = *(int *)(*(int *)(iVar1 + 0x2c) + 0xc);
      *(float *)(iVar2 + 0x70) = (float)(fVar5 + (float10)*(float *)(iVar2 + 0x70));
      *(float *)(iVar1 + 0x28) = (float)((float10)*(float *)(iVar1 + 0x28) - fVar5);
    }
  }
  return;
}
