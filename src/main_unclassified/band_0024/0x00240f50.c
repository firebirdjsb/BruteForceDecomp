/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 03D1C0CE8BF020A5B2934C999514D19E4B872F3EDB33914C309CA34E57E6FF69
 * Entry: 0x00240f50, Ghidra index: 7994, label: FUN_00240f50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00240f50(undefined4 *param_1,int param_2)

{
  int in_EAX;
  int in_ECX;
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(int *)(in_ECX + 4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(in_ECX + 8) - *(int *)(in_ECX + 4);
  }
  FUN_0024a600(0);
  puVar3 = (undefined4 *)(*(int *)(in_ECX + 4) + iVar2);
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
