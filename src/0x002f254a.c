/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C8CD8A6F99BC0C3B40605B04FF2BA20A21F270708341AEB5B0BC3123D39A81D4
 * Entry: 0x002f254a, Ghidra index: 10799, label: FUN_002f254a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a401c;
void FUN_002f254a(void)

{
  int unaff_EBP;
  
  FUN_002fe554();
  FUN_0001fe90("invalid string position");
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0001f940(unaff_EBP + -0x28);
  *(undefined ***)(unaff_EBP + -0x50) = &PTR_FUN_003a401c;
                    /* WARNING: Subroutine does not return */
  FUN_002fe573(unaff_EBP + -0x50,&LAB_003a55bc);
}
