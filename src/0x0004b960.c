/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0EF66990590E49C2CD88FF7E6C6B905171A2CB6BD0A97BB935151D754459F029
 * Entry: 0x0004b960, Ghidra index: 620, label: FUN_0004b960
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003ffd80;
uint FUN_0004b960(void)

{
  uint in_EAX;
  uint in_ECX;
  
  if ((in_EAX == 0xffffffff) || (in_ECX == 0xffffffff)) {
    return in_EAX & 0xffffff00;
  }
  if ((in_EAX == in_ECX) && ((&DAT_003ffd80)[in_EAX * 10 + in_ECX] == '\0')) {
    return 1;
  }
  return 0;
}
