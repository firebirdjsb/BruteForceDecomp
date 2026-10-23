/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3DE8C726E76EBB3F48B0C31B7C064E3A690E17B60224512A61CB82295398196B
 * Entry: 0x00272af0, Ghidra index: 8843, label: FUN_00272af0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003925d0;
void FUN_00272af0(void)

{
  undefined4 in_EAX;
  undefined4 *unaff_ESI;
  
  FUN_002710e0(unaff_ESI,in_EAX);
  *unaff_ESI = &PTR_FUN_003925d0;
  unaff_ESI[0x37] = 0;
  FUN_00272b80(in_EAX);
  FUN_00271330();
  FUN_00271430(unaff_ESI,unaff_ESI + 0x26,unaff_ESI + 0x15);
  return;
}
