/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9390C3DE1AB67A8BDA5FAFA007C171A8A466DA02EE6BADFA54583960DAC1C553
 * Entry: 0x001005f0, Ghidra index: 3218, label: FUN_001005f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469948;
extern uint32_t DAT_00469b58;
void FUN_001005f0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int unaff_EBX;
  
  if (((*(byte *)(unaff_EBX + 0x65) & 4) == 0) && (iVar2 = FUN_00100fc0(), iVar2 != 4)) {
    piVar3 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    iVar1 = *piVar3;
    uVar4 = FUN_0008bbc0();
    piVar3 = (int *)(**(code **)(iVar1 + 0x58))(uVar4);
    if ((*piVar3 != 0) &&
       (((*piVar3 != -0x20e7933 && (iVar1 = *(int *)(DAT_00469948 + 0x21c + iVar2 * 4), iVar1 != 0))
        && (*(char *)(iVar1 + 4) == '\0')))) {
      piVar3 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
      (**(code **)(*piVar3 + 0x3c))(iVar2,0,*(undefined4 *)(unaff_EBX + 0xa8));
    }
  }
  return;
}
