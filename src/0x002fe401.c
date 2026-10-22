/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ECC913B9CBAD7BF2D299650DE49CB003011D5CBA2B8BDD8439355D467D10C5D4
 * Entry: 0x002fe401, Ghidra index: 11021, label: FUN_002fe401
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414b48;
undefined4 FUN_002fe401(int param_1)

{
  int *piVar1;
  
  piVar1 = DAT_00414b48;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 1;
    }
    if (*piVar1 == param_1) break;
    piVar1 = (int *)piVar1[1];
  }
  return 0;
}
