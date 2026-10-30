/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E74307B531638938ED83933D015030811AB50FEF8875E2C72F6310A94B3CA874
 * Entry: 0x0017efb0, Ghidra index: 5116, label: FUN_0017efb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0017efb0(void)

{
  int *piVar1;
  uint in_EAX;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x1a4);
  if ((piVar1 != (int *)0x0) && (in_EAX = 0, piVar1[0xe] != 0)) {
    in_EAX = (**(code **)(*piVar1 + 0x20))();
    if ((char)in_EAX != '\0') {
      return (uint)(*(int *)(*(int *)(in_ECX + 0x1a4) + 0x2c) == 1);
    }
  }
  return in_EAX & 0xffffff00;
}
