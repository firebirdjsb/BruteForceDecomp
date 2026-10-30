/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 24B3A0C2B6D70D818E6F54F8717884114374B26C2C3CBD00D445CD80B5EF56EE
 * Entry: 0x00101120, Ghidra index: 3235, label: FUN_00101120
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_00101120(void)

{
  uint uVar1;
  int in_EAX;
  int *piVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(in_EAX + 0xb0);
  if (-1 < (int)uVar1) {
    if (*(int *)(in_EAX + 0x74) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(int *)(in_EAX + 0x78) - *(int *)(in_EAX + 0x74) >> 2;
    }
    if (uVar1 < uVar3) {
      return;
    }
  }
  if (uVar1 == 0xffffffff) {
    return;
  }
  piVar2 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
                    /* WARNING: Could not recover jumptable at 0x00101162. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x10))();
  return;
}
