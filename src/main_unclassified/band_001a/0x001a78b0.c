/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EE48BDB9C48DA78DA25F59044F03A37FF18D926B82289C0ADA53CF3746A7A268
 * Entry: 0x001a78b0, Ghidra index: 5409, label: FUN_001a78b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001a78b0(undefined4 *param_1,int param_2)

{
  int in_EAX;
  uint uVar1;
  int unaff_EBX;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(int *)(unaff_EBX + 4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(unaff_EBX + 8) - *(int *)(unaff_EBX + 4) >> 2;
  }
  FUN_0014c470(0);
  puVar3 = (undefined4 *)(*(int *)(unaff_EBX + 4) + iVar2 * 4);
  for (uVar1 = (uint)(param_2 * in_EAX) >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  for (uVar1 = param_2 * in_EAX & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar3 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  return 0;
}
