/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 527809433AD54B08180605CEB3D08A965CCAFE5BB2044129F3B9872738BABB42
 * Entry: 0x0001d700, Ghidra index: 138, label: FUN_0001d700
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a4028;
void FUN_0001d700(void)

{
  undefined4 *in_EAX;
  int in_ECX;
  
  if (in_EAX != (undefined4 *)0x0) {
    *in_EAX = PTR_LAB_003a4028;
    in_EAX[1] = *(undefined4 *)(in_ECX + 4);
    in_EAX[2] = *(undefined4 *)(in_ECX + 8);
  }
  return;
}
