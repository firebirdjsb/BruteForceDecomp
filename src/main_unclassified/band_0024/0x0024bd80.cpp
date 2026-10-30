/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BE0F0B0646DD656F000F5B3D9778E55FBDF5804FF9039867B0231543B3431FCF
 * Entry: 0x0024bd80, Ghidra index: 8275, label: FUN_0024bd80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0024bd80(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  if (in_EAX != (undefined4 *)0x0) {
    *in_EAX = *in_ECX;
    in_EAX[1] = in_ECX[1];
    *(undefined1 *)(in_EAX + 2) = *(undefined1 *)(in_ECX + 2);
    FUN_001cc3b0(in_EAX + 3);
    FUN_00248240(in_EAX + 7);
  }
  return;
}
