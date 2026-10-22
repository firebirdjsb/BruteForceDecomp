/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 48C09C7A8E6DF856CFDD10FBF824AE2BF6FACA8AF266F577740C9867DC2AF665
 * Entry: 0x001e7820, Ghidra index: 6816, label: FUN_001e7820
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469948;
void FUN_001e7820(void)

{
  int in_EAX;
  int iVar1;
  int *unaff_EDI;
  
  *unaff_EDI = in_EAX;
  if (((0 < in_EAX) && (in_EAX < 9)) &&
     (iVar1 = *(int *)(DAT_00469948 + 0x10 + in_EAX * 4) + 1,
     *(int *)(DAT_00469948 + 0x10 + in_EAX * 4) = iVar1, iVar1 == 1)) {
    FUN_001e7880();
  }
  return;
}
