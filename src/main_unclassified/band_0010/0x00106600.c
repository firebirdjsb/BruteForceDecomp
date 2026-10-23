/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8532FAC0689F84EF348DF144799C6B015A3C5FA03541983FED117C2D0BA2E7F2
 * Entry: 0x00106600, Ghidra index: 3355, label: FUN_00106600
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046995c;
uint FUN_00106600(void)

{
  uint uVar1;
  undefined1 local_224 [540];
  uint local_8;
  
  uVar1 = DAT_0046995c;
  if (*(int *)(DAT_0046995c + 0x1c) != 0) {
    uVar1 = FUN_001ed100(local_224);
    if ((char)uVar1 != '\0') {
      uVar1 = local_8 & 1;
      if (1 < ((local_8 & 4) >> 2) + ((local_8 & 2) >> 1) + 1 + uVar1) goto LAB_00106647;
    }
    return uVar1 & 0xffffff00;
  }
LAB_00106647:
  return CONCAT31((int3)(uVar1 >> 8),1);
}
