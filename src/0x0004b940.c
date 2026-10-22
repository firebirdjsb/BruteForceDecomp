/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7468B6FDB1E4F8F30150964AE61779F47D87814F8E9A83AAB7ACCE0CDC2262A8
 * Entry: 0x0004b940, Ghidra index: 619, label: FUN_0004b940
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003ffd80;
uint FUN_0004b940(void)

{
  uint in_EAX;
  int in_ECX;
  
  if ((in_EAX != 0xffffffff) && (in_ECX != -1)) {
    return CONCAT31((int3)(in_EAX * 5 >> 8),(&DAT_003ffd80)[in_EAX * 10 + in_ECX]);
  }
  return in_EAX & 0xffffff00;
}
