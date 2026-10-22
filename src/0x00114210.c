/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 464CF814326C637DFD6B60500140D6C4D9F06E1189FE7CA0021A445017400F06
 * Entry: 0x00114210, Ghidra index: 3568, label: FUN_00114210
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039dbd0;
void FUN_00114210(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  if (((*(int *)(param_1 + 0x4d8) == 0) ||
      (*(int *)(param_1 + 0x4dc) - *(int *)(param_1 + 0x4d8) >> 2 == 0)) &&
     (iVar3 = **(int **)(*(int *)(param_1 + 0x6c) + 0x4c),
     *(int *)(*(int *)(param_1 + 0xc) + 0x70c) != 0)) {
    iVar1 = FUN_00114d00(iVar3,0x42480000);
    if ((*(uint *)(iVar1 + 0x70) & 0x300) == 0) {
      FUN_002c00d0(*(undefined4 *)(*(int *)(iVar1 + 0x14) + 0x10));
      *(uint *)(iVar1 + 0x70) = *(uint *)(iVar1 + 0x70) & 0xfffffdff | 0x100;
    }
    piVar2 = (int *)FUN_002ea01d(0x10);
    piVar4 = (int *)0x0;
    if (piVar2 != (int *)0x0) {
      piVar2[1] = 0;
      piVar2[2] = 0;
      *piVar2 = (int)&PTR_LAB_0039dbd0;
      piVar2[3] = -1;
      piVar4 = piVar2;
    }
    piVar4[3] = iVar3;
    piVar4[2] = iVar1;
    FUN_002b9940();
    iVar3 = FUN_002ea01d(0x60);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_002b9980();
    }
    piVar4[1] = iVar3;
    (**(code **)(*piVar4 + 4))();
    FUN_001611d0();
    FUN_001611d0();
  }
  return;
}
