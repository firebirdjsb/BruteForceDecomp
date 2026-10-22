/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A03BDC42067883DAAEF654B838B111F052848C28A8FCAF253C6CF103B1A61C73
 * Entry: 0x0013b660, Ghidra index: 3986, label: FUN_0013b660
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0013b660(void)

{
  int in_ECX;
  
  if (((*(byte *)(in_ECX + 0x1c) & 1) != 0) && (*(int *)(in_ECX + 0x18) != 0)) {
    FUN_0010e3e0();
    *(undefined4 *)(in_ECX + 0x3c) = 0;
    return 0;
  }
  if (*(float *)(in_ECX + 4) <= *(float *)(*(int *)(in_ECX + 0x18) + 0x490)) {
    FUN_0013e410(0);
    FUN_001258d0(*(int *)(in_ECX + 0x18),
                 *(float *)(*(int *)(in_ECX + 0x18) + 0x490) - *(float *)(in_ECX + 4));
    *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(in_ECX + 0x40);
    FUN_0010e470();
  }
  return 0;
}
