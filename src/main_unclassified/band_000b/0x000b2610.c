/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2F8A2FB9D9A1E5E2C920CA01198893273D5DE72CA5E89F65C7D52DA6802859A4
 * Entry: 0x000b2610, Ghidra index: 2146, label: FUN_000b2610
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000b2610(void)

{
  undefined4 *puVar1;
  int in_EAX;
  undefined4 *puVar2;
  int in_EDX;
  
  if ((in_EDX != 0) && (1 < *(uint *)(in_EAX + 0x1c))) {
    puVar1 = *(undefined4 **)(in_EAX + 0x18);
    puVar2 = (undefined4 *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)*puVar1;
    }
    if (puVar2 != puVar1) {
      while (puVar2[2] != in_EDX) {
        puVar2 = (undefined4 *)*puVar2;
        if (puVar2 == puVar1) {
          return;
        }
      }
      if ((puVar2 != puVar1) && (puVar1 = (undefined4 *)puVar1[1], puVar2 != puVar1)) {
        puVar2[2] = puVar1[2];
        puVar1[2] = in_EDX;
      }
    }
  }
  return;
}
