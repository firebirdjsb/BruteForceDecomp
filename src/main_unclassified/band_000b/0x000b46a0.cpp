/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 13F19C683FC5A4D6BABBC70629F9C4B9A038EC4BE22D6A643A3F46DE8096EE9D
 * Entry: 0x000b46a0, Ghidra index: 2177, label: FUN_000b46a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000b25a0(int param_1,int *param_2);

extern uint32_t DAT_00469ab0;
void FUN_000b46a0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_1 + 0x2c;
  piVar2 = (int *)FUN_000b9120(DAT_00469ab0);
  if (piVar2 != (int *)0x0) {
    if (iVar1 != 0) {
      FUN_000b25a0(iVar1,piVar2);
    }
    *(byte *)((int)piVar2 + 0x13) = *(byte *)((int)piVar2 + 0x13) & 0xfb;
  }
  *(int **)(param_1 + 0x88) = piVar2;
  (**(code **)(*piVar2 + 0x38))();
  piVar2 = (int *)FUN_000b9120(DAT_00469ab0);
  if (piVar2 != (int *)0x0) {
    if (iVar1 != 0) {
      FUN_000b25a0(iVar1,piVar2);
    }
    *(byte *)((int)piVar2 + 0x13) = *(byte *)((int)piVar2 + 0x13) & 0xfb;
  }
  *(int **)(param_1 + 0x8c) = piVar2;
  (**(code **)(*piVar2 + 0x38))();
  return;
}
