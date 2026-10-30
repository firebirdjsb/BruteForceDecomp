/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 730622FD59B352A748B47EE43ED27682C565A47542B16B0191CF3979CBD3BB7D
 * Entry: 0x000b2a10, Ghidra index: 2155, label: FUN_000b2a10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000b25a0(int param_1,int *param_2);

extern uint32_t DAT_00469ab0;
int FUN_000b2a10(void)

{
  char in_AL;
  int iVar1;
  int unaff_EDI;
  
  iVar1 = FUN_000b9120(DAT_00469ab0);
  if (iVar1 != 0) {
    if (unaff_EDI != 0) {
      FUN_000b25a0(unaff_EDI,iVar1);
    }
    *(byte *)(iVar1 + 0x13) = *(byte *)(iVar1 + 0x13) ^ (in_AL << 2 ^ *(byte *)(iVar1 + 0x13)) & 4;
  }
  return iVar1;
}
