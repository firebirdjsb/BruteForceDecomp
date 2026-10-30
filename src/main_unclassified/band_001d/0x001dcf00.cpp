/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EC07D1D102B2655FD9FEB02335D257DB91B0434B31BE789BD77BE6EB945DB98C
 * Entry: 0x001dcf00, Ghidra index: 6603, label: FUN_001dcf00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dcf00(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  undefined4 *puStack00000004;
  
  if (in_EAX != (undefined4 *)0x0) {
    *in_EAX = *in_ECX;
    in_EAX[1] = in_ECX[1];
    *(undefined1 *)(in_EAX + 2) = *(undefined1 *)(in_ECX + 2);
    puStack00000004 = in_EAX + 3;
    FUN_001e0dd0();
    return;
  }
  return;
}
