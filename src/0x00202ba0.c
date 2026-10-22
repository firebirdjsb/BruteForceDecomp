/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DB34B5299C9B7C475F62101FDA304A4F9C88597078C7BAEDEFCCEE1C5A2B353F
 * Entry: 0x00202ba0, Ghidra index: 7276, label: FUN_00202ba0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469ab4;
void FUN_00202ba0(void)

{
  int *piVar1;
  int in_EAX;
  int iVar2;
  
  piVar1 = *(int **)(in_EAX + 0x44);
  if (piVar1 != (int *)0x0) {
    if (*(int *)(in_EAX + 0x4c) != -1) {
      piVar1[10] = piVar1[10] ^ ((uint)(*(int *)(in_EAX + 0x4c) != 0) ^ piVar1[10]) & 1;
    }
    if (*(int *)(in_EAX + 0x48) != -1) {
      iVar2 = (**(code **)(*piVar1 + 0x3c))();
      if (iVar2 != 10) {
        if (iVar2 == 0x13) {
          *(bool *)(piVar1 + 0x24) = *(int *)(in_EAX + 0x48) != 0;
          return;
        }
        if (iVar2 != 0x1d) {
          piVar1[10] = piVar1[10] ^ ((uint)(*(int *)(in_EAX + 0x48) != 0) << 2 ^ piVar1[10]) & 4;
          return;
        }
        (**(code **)(*DAT_00469ab4 + 0x88))(piVar1);
        return;
      }
      *(byte *)(piVar1 + 0x19) =
           *(byte *)(piVar1 + 0x19) ^
           ((*(int *)(in_EAX + 0x48) != 0) << 5 ^ *(byte *)(piVar1 + 0x19)) & 0x20;
    }
  }
  return;
}
