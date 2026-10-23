/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 737154870EE4F7D2E9757957AF0F25BF12BA2709E4E95B7C4C2CA774A9A9468A
 * Entry: 0x002dcf50, Ghidra index: 10312, label: FUN_002dcf50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_002dcf50(int param_1)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  float local_34;
  float local_20;
  undefined8 local_1c;
  undefined4 local_14;
  float local_10;
  undefined8 local_c;
  undefined4 local_4;
  
  uVar2 = (uint)*(ushort *)(param_1 + 0x26);
  local_34 = 0.0;
  while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x28) + uVar2 * 4);
    local_4 = 0;
    local_14 = 0;
    local_10 = *(float *)(iVar1 + 0xac) + *(float *)(iVar1 + 0x8c);
    local_c = CONCAT44((float)((ulonglong)*(undefined8 *)(iVar1 + 0xb0) >> 0x20) +
                       (float)((ulonglong)*(undefined8 *)(iVar1 + 0x90) >> 0x20),
                       (float)*(undefined8 *)(iVar1 + 0xb0) + (float)*(undefined8 *)(iVar1 + 0x90));
    local_20 = *(float *)(iVar1 + 0x9c) + *(float *)(iVar1 + 0x7c);
    local_1c = CONCAT44((float)((ulonglong)*(undefined8 *)(iVar1 + 0xa0) >> 0x20) +
                        (float)((ulonglong)*(undefined8 *)(iVar1 + 0x80) >> 0x20),
                        (float)*(undefined8 *)(iVar1 + 0xa0) + (float)*(undefined8 *)(iVar1 + 0x80))
    ;
    fVar3 = (float10)FUN_002ba8a0(iVar1,&local_10,&local_20);
    local_34 = (float)(fVar3 + (float10)local_34);
  }
  return (float10)local_34;
}
