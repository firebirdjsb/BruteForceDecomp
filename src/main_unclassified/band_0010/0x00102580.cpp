/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6E0B8CACA8C057DA44DEF672C7BD3AFA08D42F358DC7D8F571B7B935E7B4B4B7
 * Entry: 0x00102580, Ghidra index: 3271, label: FUN_00102580
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469944;
undefined4 FUN_00102580(void)

{
  int in_ECX;
  
  *(byte *)(in_ECX + 0x80) = *(byte *)(in_ECX + 0x80) | 4;
  if (*(int *)(in_ECX + 0x74) != 0) {
    (**(code **)(*DAT_00469944 + 0x14))(*(int *)(in_ECX + 0x74));
    *(undefined4 *)(in_ECX + 0x74) = 0;
  }
  *(undefined4 *)(in_ECX + 0x70) = 0xffffffff;
  return 1;
}
