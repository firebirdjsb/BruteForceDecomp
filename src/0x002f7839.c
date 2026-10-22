/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E1909F945CB633D5F0E3335932A9E42D2EA3D11872E602FAA1264F5DC43FA912
 * Entry: 0x002f7839, Ghidra index: 10928, label: GetSystemTimeAsFileTime
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void XAPILIB__GetSystemTimeAsFileTime(void)

{
                    /* WARNING: Could not recover jumptable at 0x002f7839. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  KeQuerySystemTime();
  return;
}
