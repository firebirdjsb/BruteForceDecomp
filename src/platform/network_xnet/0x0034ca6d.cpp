/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 086E76FE4FAD703C89D5C8486CA295FE20503683B16BBD3E14709749118A455B
 * Entry: 0x0034ca6d, Ghidra index: 12981, label: FUN_0034ca6d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_external_import_addresses_x86.h"
void FUN_0034ca6d(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x1dc) = *(undefined4 *)KeTickCount_exref;
  puVar1 = (uint *)(in_ECX + 0x1d8);
  *puVar1 = *puVar1 + 1;
  uVar2 = *puVar1;
  while ((piVar5 = *(int **)(in_ECX + 0x1d0), piVar5 != (int *)(in_ECX + 0x1d0) &&
         ((uint)piVar5[2] <= uVar2))) {
    iVar3 = *piVar5;
    piVar4 = (int *)piVar5[1];
    *piVar4 = iVar3;
    *(int **)(iVar3 + 4) = piVar4;
    *piVar5 = 0;
    piVar5[2] = -1;
    (*(code *)piVar5[3])(piVar5);
  }
  FUN_0034d3de();
  FUN_003497b4();
  FUN_003523bb();
  return;
}
