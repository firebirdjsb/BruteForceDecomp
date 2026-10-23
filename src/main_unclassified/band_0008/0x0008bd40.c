/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BFBA6B8C8EDC50FD5F4875A614954A16C6D0815587F33B40B6B12C488DCBB6A4
 * Entry: 0x0008bd40, Ghidra index: 1693, label: FUN_0008bd40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_0008bd40(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 unaff_EBX;
  undefined4 uVar3;
  
  piVar1 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
  switch(unaff_EBX) {
  case 0:
    uVar3 = 0x11;
    break;
  case 1:
    uVar3 = 0x12;
    break;
  case 2:
    uVar3 = 0x13;
    break;
  case 3:
    uVar3 = 0x14;
    break;
  default:
    uVar3 = 0x19;
  }
  piVar2 = (int *)(**(code **)(*piVar1 + 0x58))(uVar3);
  if (*piVar2 == -0x20e7933) {
    (**(code **)(*piVar1 + 0x54))(uVar3);
    return;
  }
  (**(code **)(*piVar1 + 0x3c))();
  return;
}
