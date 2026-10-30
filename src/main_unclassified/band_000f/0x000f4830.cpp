/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AADFEE3474B22502129A380EA19B0620B9BF4747F9212AC1FA8BA05717D6A5F7
 * Entry: 0x000f4830, Ghidra index: 3065, label: FUN_000f4830
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046995c;
undefined4 FUN_000f4830(int param_1)

{
  char cVar1;
  int unaff_EDI;
  undefined1 local_224 [532];
  undefined4 auStack_10 [4];
  
  if (*(int *)(DAT_0046995c + 0x1c) == 0) {
    return *(undefined4 *)(param_1 + 4 + unaff_EDI * 4);
  }
  cVar1 = FUN_001ed100(local_224);
  if (cVar1 != '\0') {
    return auStack_10[unaff_EDI];
  }
  return 0;
}
