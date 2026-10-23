/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A4005BDD9CB723123DCFF6A3F1241F55FC594B2B9E947CA83638140C1C657845
 * Entry: 0x002ae200, Ghidra index: 9705, label: FUN_002ae200
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0038f4d0;
void FUN_002ae200(void)

{
  undefined4 *unaff_ESI;
  
  FUN_00066920();
  unaff_ESI[0x26] = 0;
  unaff_ESI[0x29] = 0;
  unaff_ESI[0x28] = 0;
  unaff_ESI[0x27] = 0;
  *unaff_ESI = &PTR_LAB_0038f4d0;
  unaff_ESI[0x2a] = 1;
  return;
}
