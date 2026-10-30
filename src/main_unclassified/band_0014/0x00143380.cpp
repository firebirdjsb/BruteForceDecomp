/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FB3534044C57CA0D83733464704CEDD6A283D50AFFE2D6626C88F1EF438EEFF0
 * Entry: 0x00143380, Ghidra index: 4139, label: FUN_00143380
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00143380(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  
  unaff_ESI[4] = 0;
  unaff_ESI[5] = 0;
  unaff_ESI[6] = 0;
  unaff_ESI[9] = 0;
  unaff_ESI[10] = 0;
  unaff_ESI[0xb] = 0;
  unaff_ESI[0xd] = 0;
  unaff_ESI[0xe] = 0;
  unaff_ESI[0xf] = 0;
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  unaff_ESI[7] = param_1;
  unaff_ESI[0x10] = 0;
  *(undefined1 *)(unaff_ESI + 0x15) = 0;
  unaff_ESI[0x14] = 0;
  for (iVar2 = *(int *)(param_1 + 0x24); iVar2 != *(int *)(param_1 + 0x28); iVar2 = iVar2 + 8) {
    iVar1 = FUN_00235d50(iVar2);
    if ((iVar1 != 0) && (iVar1 != -1)) {
      *(uint *)(iVar1 + 0x44) = *(uint *)(iVar1 + 0x44) | 0x20;
      FUN_001611d0();
    }
  }
  if ((unaff_ESI[4] == 0) || ((int)(unaff_ESI[5] - unaff_ESI[4]) >> 2 == 0)) {
    unaff_ESI[2] = 0xffffffff;
  }
  else if (*(int *)(*(int *)unaff_ESI[4] + 0x10) == 0) {
    unaff_ESI[2] = 0;
  }
  else {
    unaff_ESI[2] = *(undefined4 *)(*(int *)(*(int *)unaff_ESI[4] + 0x10) + 100);
  }
  unaff_ESI[0x12] = 0;
  unaff_ESI[0x13] = 0x41200000;
  FUN_00143ea0(0,0,0,0);
  FUN_00143e20(0);
  unaff_ESI[0x16] = 1;
  unaff_ESI[0x17] = 1;
  FUN_00143820(unaff_ESI[7] + 0x10);
  return;
}
