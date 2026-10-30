/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 54CEDDE40B46B1A8D0CED9CF00FFBE5EC4A76D46DE91448F135262A01E9E36E8
 * Entry: 0x0031aa8e, Ghidra index: 12271, label: FUN_0031aa8e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00386ad4;
void FUN_0031aa8e(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_00386ad4;
  if (in_ECX[5] != 0) {
    FUN_00314937(in_ECX[5]);
    in_ECX[5] = 0;
  }
  *(undefined4 *)in_ECX[7] = 0;
  return;
}
