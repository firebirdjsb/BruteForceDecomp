/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A249AA0C21E4A45F09CCE8369996C3F0BF087E516E9F0D4DB28579A2AB51E5F0
 * Entry: 0x001729f0, Ghidra index: 4870, label: FUN_001729f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001729f0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)FUN_000120f0();
  if (piVar3 != (int *)0x0) {
    iVar4 = (**(code **)(*piVar3 + 0x40))();
    uVar1 = *(undefined4 *)(iVar4 + 0x2c);
    uVar2 = *(undefined4 *)(iVar4 + 0x28);
    *param_2 = *(undefined4 *)(iVar4 + 0x24);
    param_2[1] = uVar2;
    param_2[2] = uVar1;
  }
  return 0;
}
