/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5D8F2B3741FD1E89BB8187C2EDA3E5708D04870A0885E824CBC96727C713CD9B
 * Entry: 0x002003a0, Ghidra index: 7250, label: FUN_002003a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_00000000;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_002003a0(void)

{
  int iVar1;
  
  iVar1 = FUN_002ea01d(0x54);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_001fe080();
  }
  (**(code **)(_DAT_00000000 + 0x34))();
  return 0;
}
