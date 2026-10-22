/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7206A2263732F480B2F0B9BA571D568CACE41B6EE84D7B2C2E156C58A22D8B60
 * Entry: 0x001e4df0, Ghidra index: 6790, label: FUN_001e4df0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_004698d4;
extern uint32_t DAT_004698d8;
undefined4 FUN_001e4df0(void)

{
  int iVar1;
  int in_ECX;
  
  FUN_001f0f60();
  iVar1 = *(int *)(in_ECX + 4);
  while (iVar1 != 0) {
    if (DAT_004698d4 != (code *)0x0) {
      (*DAT_004698d4)(DAT_004698d8);
    }
    XAPILIB__Sleep(0x32);
    iVar1 = *(int *)(in_ECX + 4);
  }
  return CONCAT31((int3)((uint)*(int *)(in_ECX + 8) >> 8),*(int *)(in_ECX + 8) == 0);
}
