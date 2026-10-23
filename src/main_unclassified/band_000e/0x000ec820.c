/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 764199A740C3756E44B49D591F61E95726983179C09627C7ABBAC841CBB8D180
 * Entry: 0x000ec820, Ghidra index: 2934, label: FUN_000ec820
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039e7e8;
extern uint32_t PTR_LAB_0039eca8;
extern uint32_t PTR_LAB_003a3f18;
void FUN_000ec820(void)

{
  undefined4 *unaff_ESI;
  
  FUN_000ec6e0();
  *unaff_ESI = &PTR_LAB_0039eca8;
  unaff_ESI[2] = &PTR_LAB_003a3f18;
  unaff_ESI[3] = &PTR_FUN_0039e7e8;
  return;
}
