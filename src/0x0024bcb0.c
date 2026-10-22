/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2BC9C4226EBE0888583AE5C4465FBF9E159A6CE509DC258AD0E5D144F09E5C8D
 * Entry: 0x0024bcb0, Ghidra index: 8273, label: FUN_0024bcb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0024bcb0(void)

{
  undefined4 *in_EAX;
  undefined4 *unaff_EDI;
  
  if (in_EAX != (undefined4 *)0x0) {
    *in_EAX = *unaff_EDI;
    in_EAX[1] = unaff_EDI[1];
    *(undefined1 *)(in_EAX + 2) = *(undefined1 *)(unaff_EDI + 2);
    FUN_00248830(in_EAX + 3);
    FUN_001e0dd0(in_EAX + 7);
  }
  return;
}
