/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2A1F2C30E4DAED670E13F4B5BD1B06D217CE7EA2BE250046FAF945F4F501A366
 * Entry: 0x0031c1f1, Ghidra index: 12326, label: FUN_0031c1f1
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_fec0017c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0031c1f1(int param_1)

{
  int *in_ECX;
  
  FUN_003118f0();
  if (*in_ECX == 1) {
    in_ECX[10] = param_1;
    _DAT_fec0017c = param_1;
  }
  FUN_00311923();
  return;
}
