/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 093F58BF4F8B0FBC23F40CBCF9539F9BEC8B3D4177BD8B04793656747230B228
 * Entry: 0x002bd740, Ghidra index: 9952, label: FUN_002bd740
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002bd740(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)FUN_002ea01d(0x18);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined2 *)((int)puVar1 + 6) = 0;
    *(undefined2 *)(puVar1 + 3) = 0;
    puVar1[2] = puVar1 + 4;
    *(undefined2 *)(puVar1 + 1) = 2;
    puVar2 = puVar1;
  }
  *puVar2 = param_2;
  if (*(ushort *)(param_1 + 0x20) <= *(ushort *)(param_1 + 0x22)) {
    FUN_002ccf80();
  }
  *(undefined4 **)(*(int *)(param_1 + 0x24) + (uint)*(ushort *)(param_1 + 0x22) * 4) = puVar2;
  *(short *)(param_1 + 0x22) = *(short *)(param_1 + 0x22) + 1;
  return;
}
