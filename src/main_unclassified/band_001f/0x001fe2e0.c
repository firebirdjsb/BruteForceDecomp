/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FD065ACF7659E766C423D10DFD75787D3CF8CE424B0E37A25C524B4CAF139DEB
 * Entry: 0x001fe2e0, Ghidra index: 7226, label: FUN_001fe2e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001fe2e0(undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int in_EAX;
  undefined4 *puVar3;
  
  puVar1 = *(undefined4 **)(in_EAX + 4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)*puVar1;
  }
  for (; puVar3 != puVar1; puVar3 = (undefined4 *)*puVar3) {
    piVar2 = (int *)puVar3[3];
    if ((piVar2 != (int *)0x0) && (*(char *)((int)piVar2 + 0x3d) < '\0')) {
      (**(code **)(*piVar2 + 0x1c))(param_1);
    }
  }
  return;
}
