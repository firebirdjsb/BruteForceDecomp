/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B54B45B2AE8EC5543C89E50234D1A798DFB4B62B4D8F3A664FC8DAEB3430384D
 * Entry: 0x0034ce3c, Ghidra index: 12989, label: FUN_0034ce3c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_fef00084;
extern uint32_t _DAT_fef00094;
extern uint32_t _DAT_fef00110;
extern uint32_t _DAT_fef00144;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0034ce3c(void)

{
  int in_ECX;
  
  _DAT_fef00110 = *(uint *)(in_ECX + 0x210) | 0x10000;
  _DAT_fef00084 = 1;
  _DAT_fef00094 = 1;
  _DAT_fef00144 = 3;
  return;
}
