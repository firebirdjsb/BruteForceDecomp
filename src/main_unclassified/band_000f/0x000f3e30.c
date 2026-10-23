/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DF698F4E32BD767D91D594A7633EF92F903653C3D6FF96D6660529D6EA6B31DC
 * Entry: 0x000f3e30, Ghidra index: 3052, label: FUN_000f3e30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_000f3e30(void)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  
  piVar3 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
  piVar1 = *(int **)(DAT_00469b58 + 8);
  cVar2 = (**(code **)(*piVar3 + 0x30))();
  if (cVar2 != '\0') {
    (**(code **)(*piVar3 + 0x24))();
    return;
  }
  (**(code **)(*piVar3 + 0x1c))();
  (**(code **)(*piVar1 + 0x20))(&stack0xffffffe8);
  (**(code **)(*piVar1 + 0x8c))();
  return;
}
