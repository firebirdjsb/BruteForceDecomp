/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 062A3F42F4872BA7F448FD7C04EBE89E72C3238E60D9AED1FD144C7EEE4D2F6B
 * Entry: 0x002dfba0, Ghidra index: 10343, label: FUN_002dfba0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_002dfba0(float param_1)

{
  uint uVar1;
  int in_EDX;
  
  uVar1 = *(uint *)(in_EDX + 0x54);
  if (uVar1 == 0) {
    uVar1 = *(uint *)(in_EDX + 8);
  }
  if (*(float *)(uVar1 + 4) <= param_1) {
    for (; (uVar1 < *(int *)(in_EDX + 0xc) - 0x10U && (*(float *)(uVar1 + 4) <= param_1));
        uVar1 = uVar1 + 0x10) {
    }
    uVar1 = uVar1 - 0x10;
  }
  else if (*(uint *)(in_EDX + 8) < uVar1) {
    while (param_1 <= *(float *)(uVar1 + 4)) {
      uVar1 = uVar1 - 0x10;
      if (uVar1 <= *(uint *)(in_EDX + 8)) {
        return uVar1;
      }
    }
  }
  return uVar1;
}
