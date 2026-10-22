/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8B9EF15192570CCD4CA16EDC74A533F4EC9F7A152426D3A7DEF4924AE1BF1F6D
 * Entry: 0x002d5420, Ghidra index: 10221, label: FUN_002d5420
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002d5420(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int unaff_EBX;
  uint uVar4;
  
  if (*(ushort *)(unaff_EBX + 8) <= *(ushort *)(unaff_EBX + 10)) {
    FUN_002ccf80();
  }
  *(int *)(*(int *)(unaff_EBX + 0xc) + (uint)*(ushort *)(unaff_EBX + 10) * 4) = param_1;
  *(short *)(unaff_EBX + 10) = *(short *)(unaff_EBX + 10) + 1;
  if (*(int *)(param_1 + 0x1cc) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x1cc) + 0x20) = 1;
  }
  uVar4 = (uint)*(ushort *)(*(int *)(unaff_EBX + 0x2c) + 0x3e);
joined_r0x002d5464:
  do {
    do {
      uVar4 = uVar4 - 1;
      if ((int)uVar4 < 0) {
        return;
      }
      iVar1 = *(int *)(*(int *)(*(int *)(unaff_EBX + 0x2c) + 0x40) + uVar4 * 4);
    } while (((*(int *)(iVar1 + 0x2c) != param_1) && (*(int *)(iVar1 + 0x30) != param_1)) ||
            (iVar1 == param_2));
    iVar2 = *(ushort *)(unaff_EBX + 0x22) - 1;
    if (-1 < iVar2) {
      piVar3 = (int *)(*(int *)(unaff_EBX + 0x24) + iVar2 * 4);
      do {
        if (*piVar3 == iVar1) goto joined_r0x002d5464;
        iVar2 = iVar2 + -1;
        piVar3 = piVar3 + -1;
      } while (-1 < iVar2);
    }
    iVar2 = FUN_002c5420(iVar1,*(int *)(unaff_EBX + 0x2c));
    if (0 < iVar2) {
      if (*(ushort *)(unaff_EBX + 0x20) <= *(ushort *)(unaff_EBX + 0x22)) {
        FUN_002ccf80();
      }
      *(int *)(*(int *)(unaff_EBX + 0x24) + (uint)*(ushort *)(unaff_EBX + 0x22) * 4) = iVar1;
      *(short *)(unaff_EBX + 0x22) = *(short *)(unaff_EBX + 0x22) + 1;
    }
  } while( true );
}
