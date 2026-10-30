/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5A45BF5A6BF5240A9A1BA9E9CFC872346892E5807A70766DE21C8165DE5EDDDF
 * Entry: 0x002083c0, Ghidra index: 7315, label: FUN_002083c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_00000000;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_002083c0(void)

{
  int iVar1;
  
  iVar1 = FUN_002ea01d(0x58);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_001fe080();
  }
  (**(code **)(_DAT_00000000 + 0x34))();
  return 0;
}
