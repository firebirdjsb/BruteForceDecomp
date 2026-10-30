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
  /* XBE 0x000F3E3A reserves 0x14 bytes of local storage.
   * 0x000F3E83 addresses its first word with LEA ECX,[ESP+8];
   * 0x000F3E75/79/7D write words at offsets +8/+12/+16.
   * Storage layout only: initialization, indirect-call ABI and
   * original stack-byte state remain ABI_UNVERIFIED. */
  undefined4 call_stack_words[5];
  
  piVar3 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
  piVar1 = *(int **)(DAT_00469b58 + 8);
  cVar2 = (**(code **)(*piVar3 + 0x30))();
  if (cVar2 != '\0') {
    (**(code **)(*piVar3 + 0x24))();
    return;
  }
  (**(code **)(*piVar3 + 0x1c))();
  (**(code **)(*piVar1 + 0x20))(call_stack_words);
  (**(code **)(*piVar1 + 0x8c))();
  return;
}
