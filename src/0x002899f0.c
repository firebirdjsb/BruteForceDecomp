/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 20E827C025A2DA6F77672185A8F9CDF2227AF7EFCC677F6B9FE07E389BD16D8D
 * Entry: 0x002899f0, Ghidra index: 9139, label: FUN_002899f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
float10 FUN_002899f0(void)

{
  int in_EAX;
  int iVar1;
  
  if (in_EAX == 0) {
LAB_002899f7:
    return (float10)0.0;
  }
  if (*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + in_EAX * 0x10) != -1) {
    iVar1 = FUN_00292690();
    if (iVar1 != 0) goto LAB_002899f7;
  }
  return (float10)*(double *)(*(int *)(DAT_00469888 + 4) + -8 + in_EAX * 0x10);
}
