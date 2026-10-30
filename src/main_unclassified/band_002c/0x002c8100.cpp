/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1ACC20E92DF85D27936EB48743EF21D9D4A8FAA7A3B71F5AD39C8706E604B059
 * Entry: 0x002c8100, Ghidra index: 10116, label: FUN_002c8100
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c8100(int param_1)

{
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 *puVar4;
  
  iVar2 = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_1 + 0x108);
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 0x10c);
  dVar1 = *(double *)(param_1 + 0x118);
  *(double *)(param_1 + 0x110) =
       (double)(*(float *)(param_1 + 0xb4) + (float)*(double *)(param_1 + 0x118));
  puVar4 = (undefined4 *)**(undefined4 **)(iVar2 + 8);
  while ((puVar4 != (undefined4 *)0x0 && (puVar4 != (undefined4 *)0x0))) {
    puVar4[2] = (float)puVar4[2] - (float)dVar1;
    puVar4 = (undefined4 *)*puVar4;
  }
  *(float *)(*(int *)(iVar2 + 8) + 4) = *(float *)(*(int *)(iVar2 + 8) + 4) - (float)dVar1;
  *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(param_1 + 0x11c);
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  FUN_002b55f0(*(undefined4 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x11c));
  uVar3 = FUN_002d5d50(in_ECX,(float)((float10)*(double *)(param_1 + 0x110) -
                                     (float10)*(double *)(*(int *)(param_1 + 4) + 0x18)));
  *(undefined4 *)(in_ECX + 4) = uVar3;
  return;
}
