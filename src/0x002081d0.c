/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DF7EF64DD05B0E5B0109729F41B5F14B177EE2B89AD48E63CFB7EDC3BF11462D
 * Entry: 0x002081d0, Ghidra index: 7314, label: FUN_002081d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_002081d0(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int unaff_ESI;
  int local_1c [5];
  undefined4 local_8;
  
  local_1c[0] = *(int *)(unaff_ESI + 0x40);
  if (local_1c[0] == -0xc4f90fc) {
    piVar1 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    iVar3 = *piVar1;
    uVar2 = FUN_001e97c0(0,0x15,0);
    uVar2 = FUN_001e97c0(uVar2);
    iVar3 = (**(code **)(iVar3 + 0x34))(unaff_ESI + 0x48,uVar2);
  }
  else if (local_1c[0] == 0xec41ef2) {
    piVar1 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    iVar3 = *piVar1;
    uVar2 = FUN_001e97c0(0,0x15,0);
    uVar2 = FUN_001e97c0(uVar2);
    iVar3 = (**(code **)(iVar3 + 0x38))(unaff_ESI + 0x48,uVar2);
  }
  else {
    local_1c[3] = 0;
    piVar1 = local_1c;
    for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar1 = 0;
      piVar1 = piVar1 + 1;
    }
    local_8 = *(undefined4 *)(unaff_ESI + 0x10);
    local_1c[1] = 0x15;
    puVar4 = (undefined4 *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    iVar3 = (**(code **)*puVar4)(local_1c);
  }
  if (iVar3 != 0) {
    *(byte *)(iVar3 + 0x65) = *(byte *)(iVar3 + 0x65) | 8;
    *(int *)(iVar3 + 0xac) = unaff_ESI + 0x50;
    *(undefined4 *)(unaff_ESI + 0x4c) = *(undefined4 *)(iVar3 + 0x24);
  }
  return;
}
