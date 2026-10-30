/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A1FC099D587E2261F51425C8503DE2E45E65A60EF744FA560EBAB3E6CB754D75
 * Entry: 0x0015b1d0, Ghidra index: 4523, label: FUN_0015b1d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469b54;
void FUN_0015b1d0(void)

{
  float fVar1;
  int in_ECX;
  float10 fVar2;
  
  fVar2 = (float10)(**(code **)(*DAT_00469b54 + 0x44))();
  fVar1 = *(float *)(in_ECX + 0x14c);
  *(float *)(in_ECX + 0x14c) = (float)fVar2;
  if (fVar2 - (float10)fVar1 < (float10)0.5) {
    *(char *)(in_ECX + 0x74) = *(char *)(in_ECX + 0x74) + '\x01';
    return;
  }
  *(undefined1 *)(in_ECX + 0x74) = 1;
  return;
}
