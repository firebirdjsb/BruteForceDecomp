/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 81E3007DC2DD605D775490A91CC1CDBB8514603981BCD317A80C7506E0447E56
 * Entry: 0x001dce30, Ghidra index: 6597, label: FUN_001dce30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dce30(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  if (in_EAX != (undefined4 *)0x0) {
    *in_EAX = *in_ECX;
    in_EAX[1] = in_ECX[1];
    *(undefined1 *)(in_EAX + 2) = *(undefined1 *)(in_ECX + 2);
    *(undefined1 *)((int)in_EAX + 9) = *(undefined1 *)((int)in_ECX + 9);
  }
  return;
}
