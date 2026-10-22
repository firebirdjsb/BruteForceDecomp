/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 58540A329BCC3568DC25FAAAC2C15C767CFFD72A771409FB4FB9FA0C5131F9CE
 * Entry: 0x002bb590, Ghidra index: 9904, label: FUN_002bb590
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002bb590(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = param_1;
  for (iVar3 = 0x76; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  param_1[0x15] = param_1 + 0x17;
  *(ushort *)(param_1 + 0x14) = 1;
  if (*(ushort *)(param_1 + 0x14) <= *(ushort *)((int)param_1 + 0x52)) {
    FUN_002ccf80();
  }
  *(int *)(param_1[0x15] + (uint)*(ushort *)((int)param_1 + 0x52) * 4) = param_2;
  *(short *)((int)param_1 + 0x52) = *(short *)((int)param_1 + 0x52) + 1;
  param_1[3] = *(undefined4 *)(param_2 + 0x14);
  puVar2 = (uint *)FUN_002ea01d(0x2c);
  if (puVar2 == (uint *)0x0) {
    puVar2 = (uint *)0x0;
  }
  else {
    *(undefined2 *)((int)puVar2 + 0xe) = 0;
    *(undefined2 *)(puVar2 + 5) = 0;
    *(undefined2 *)(puVar2 + 3) = 2;
    puVar2[4] = (uint)(puVar2 + 6);
    *(undefined2 *)(puVar2 + 8) = 0;
    *(undefined2 *)((int)puVar2 + 0x22) = 0;
    puVar2[9] = 0;
    *(undefined2 *)(puVar2 + 10) = 1;
    *puVar2 = *puVar2 & 0xfffffcff;
    *(undefined1 *)puVar2 = 8;
    *puVar2 = *puVar2 & 0xffffc3ff;
  }
  param_1[0x5c] = puVar2;
  if ((ushort)puVar2[3] <= *(ushort *)((int)puVar2 + 0xe)) {
    FUN_002ccf80();
  }
  *(undefined4 **)(puVar2[4] + (uint)*(ushort *)((int)puVar2 + 0xe) * 4) = param_1;
  *(short *)((int)puVar2 + 0xe) = *(short *)((int)puVar2 + 0xe) + 1;
  *(undefined1 *)param_1[0x5c] = 8;
  uVar1 = *(undefined4 *)param_1[3];
  if (*(ushort *)(param_1 + 0x58) <= *(ushort *)((int)param_1 + 0x162)) {
    FUN_002ccf80();
  }
  *(undefined4 *)(param_1[0x59] + (uint)*(ushort *)((int)param_1 + 0x162) * 4) = uVar1;
  *(short *)((int)param_1 + 0x162) = *(short *)((int)param_1 + 0x162) + 1;
  FUN_002be010(param_1);
  *(undefined1 *)(param_1 + 0x19) = 8;
  return;
}
