/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FE07FF867204855CA6062D19FB838A99F4324024CC4D53BA3B17C6DD365FD18D
 * Entry: 0x000f5050, Ghidra index: 3068, label: FUN_000f5050
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
uint FUN_000f5050(undefined4 param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  int *unaff_EDI;
  
  puVar1 = param_2;
  *param_2 = 0;
  if (unaff_EDI != (int *)0x0) {
    (**(code **)(*unaff_EDI + 4))();
  }
  FUN_001039b0();
  iVar2 = FUN_00103d40();
  if ((iVar2 != 0) && (*(char *)(iVar2 + 4) != '\0')) {
    piVar5 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    param_2 = (undefined1 *)0xea3bfa1c;
    (**(code **)(*piVar5 + 8))(&param_2,0,0);
    uVar4 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x22c))(&stack0xfffffffc);
    return uVar4 & 0xffffff00;
  }
  uVar3 = FUN_001039b0();
  uVar4 = FUN_000f4c00(param_1,uVar3,unaff_EDI[1],puVar1);
  return uVar4;
}
