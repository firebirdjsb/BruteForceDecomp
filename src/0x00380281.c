/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 90DE2CB207182E800B9DABAF4D313F374FD0F1A0B0B616868520814E9728C7DA
 * Entry: 0x00380281, Ghidra index: 13528, label: FUN_00380281
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00380281(undefined1 *param_1,int *param_2)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = *param_2;
  if (((*(byte *)((int)param_2 + 0xa2) & 1) == 0) && ((*(byte *)(iVar1 + 4) & 2) == 0)) {
    if (*(int *)(param_1 + 4) < 0) {
      param_1[0x1c] = 0;
      param_1[0x1d] = 0;
      param_1[0x1e] = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined2 *)(param_1 + 0x2a) = 0;
      *param_1 = 0x30;
      param_1[1] = 0x40;
      *(undefined1 **)(param_1 + 8) = &LAB_00380336;
      *(int **)(param_1 + 0xc) = param_2;
      param_1[0x28] = 2;
      param_1[0x29] = 1;
      *(ushort *)(param_1 + 0x2c) = (ushort)*(byte *)(iVar1 + 8);
      *(undefined2 *)(param_1 + 0x2e) = 0;
      bVar2 = (*(byte *)(iVar1 + 4) & 0xf0) + 0x10 ^ *(byte *)(iVar1 + 4) & 0xf;
      *(byte *)(iVar1 + 4) = bVar2;
      if ((bVar2 & 0xf0) == 0x40) {
        FUN_00382571();
        return;
      }
    }
    else {
      *(byte *)(iVar1 + 4) = *(byte *)(iVar1 + 4) & 0xf;
      (**(code **)(*(int *)(iVar1 + 0xe) + 0x24))();
      param_2[2] = param_2[2] + 1;
      param_2[1] = 0;
      *(uint *)(param_1 + 0x14) = (uint)*(byte *)(iVar1 + 0xc);
      if ((*(byte *)((int)param_2 + 0xa2) & 8) == 0) {
        return;
      }
    }
    FUN_00381379(param_1);
  }
  return;
}
