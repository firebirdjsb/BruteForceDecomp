/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A6E9031B341185C5E371F3E9A341566F4026C8027C0048115AB6BAB7BD612734
 * Entry: 0x000c8880, Ghidra index: 2473, label: FUN_000c8880
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469ab0;
void FUN_000c8880(void)

{
  int iVar1;
  int unaff_EBX;
  
  iVar1 = FUN_000b9120(DAT_00469ab0);
  if (iVar1 != 0) {
    if (unaff_EBX + 0x2c != 0) {
      FUN_000b25a0(unaff_EBX + 0x2c,iVar1);
    }
    *(byte *)(iVar1 + 0x13) = *(byte *)(iVar1 + 0x13) & 0xfb;
  }
  *(int *)(unaff_EBX + 0x84) = iVar1;
  return;
}
