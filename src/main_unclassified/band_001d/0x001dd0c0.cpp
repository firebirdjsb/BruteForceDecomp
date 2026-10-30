/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 870C586E80918517892431875CF963B01DB3C0C9BA0357187C79B79E297EBB84
 * Entry: 0x001dd0c0, Ghidra index: 6611, label: FUN_001dd0c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dd0c0(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  if (in_EAX != (undefined4 *)0x0) {
    *in_EAX = *in_ECX;
    in_EAX[1] = in_ECX[1];
    in_EAX[2] = in_ECX[2];
    in_EAX[3] = in_ECX[3];
    in_EAX[4] = in_ECX[4];
  }
  return;
}
