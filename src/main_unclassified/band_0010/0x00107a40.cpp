/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 50302D8B73E75344C319E9A2C144EBC3FFD5713643DF022F6434ED5D378DC63B
 * Entry: 0x00107a40, Ghidra index: 3370, label: FUN_00107a40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046995c;
uint FUN_00107a40(void)

{
  uint uVar1;
  int unaff_ESI;
  
  uVar1 = (**(code **)(**(int **)(*(int *)(unaff_ESI + 0x24) + 0xbec) + 0x34))();
  if (((int)uVar1 < 2) && (uVar1 = DAT_0046995c, *(int *)(DAT_0046995c + 0x1c) == 0)) {
    uVar1 = FUN_00107d50(unaff_ESI);
    if (((char)uVar1 == '\0') &&
       ((uVar1 = *(uint *)(*(int *)(unaff_ESI + 0x24) + 0xc4c), uVar1 != 0 &&
        (*(int *)(uVar1 + 0x14) == 0x159bec67)))) {
      return CONCAT31((int3)(uVar1 >> 8),*(byte *)(uVar1 + 0x24) >> 1) & 0xffffff01;
    }
  }
  return uVar1 & 0xffffff00;
}
