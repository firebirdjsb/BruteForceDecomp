/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0341F71E74B2817FC6BB396BD6E00CDFA501C213132C0816E51E44AD13434081
 * Entry: 0x001cf3f0, Ghidra index: 6108, label: FUN_001cf3f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001cf3f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *unaff_EBX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  while (param_1 != param_2) {
    puVar1 = param_1 + 0x100;
    puVar3 = unaff_EBX;
    puVar4 = param_1;
    for (iVar2 = 0x100; param_1 = puVar1, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  return;
}
