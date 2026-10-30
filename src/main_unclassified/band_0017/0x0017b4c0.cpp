/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4D9F11DD7A0EA8293E48B4FF530C2E4557C3640DF891DEB79202C20A0C6C8A5F
 * Entry: 0x0017b4c0, Ghidra index: 5027, label: FUN_0017b4c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_0017b4c0(int *param_1)

{
  int *piVar1;
  undefined4 *in_ECX;
  int unaff_ESI;
  
  FUN_0017d780(*(undefined4 *)(unaff_ESI + 0x128),*(undefined4 *)(unaff_ESI + 300),*param_1,0);
  if ((in_ECX == *(undefined4 **)(unaff_ESI + 300)) ||
     (piVar1 = (int *)*in_ECX, *piVar1 != *param_1)) {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}
