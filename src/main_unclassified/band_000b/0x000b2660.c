/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 328B99EEE133AF33A6338B30DA31C9D74FEF7AFE40B504981E62519BC2C03CED
 * Entry: 0x000b2660, Ghidra index: 2147, label: FUN_000b2660
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000b2660(void)

{
  int *piVar1;
  int in_EAX;
  int *piVar2;
  undefined4 *unaff_ESI;
  
  piVar1 = *(int **)(in_EAX + 0x18);
  piVar2 = (int *)0x0;
  if (*(undefined4 **)(in_EAX + 0x18) != (undefined4 *)0x0) {
    piVar2 = (int *)**(undefined4 **)(in_EAX + 0x18);
  }
  if (piVar2 != piVar1) {
    do {
      if ((undefined4 *)piVar2[2] == unaff_ESI) break;
      piVar2 = (int *)*piVar2;
    } while (piVar2 != piVar1);
    if (piVar2 != piVar1) {
      FUN_000e0860(&stack0xfffffffc);
      if (unaff_ESI != (undefined4 *)0x0) {
        (**(code **)*unaff_ESI)(1);
      }
    }
  }
  return;
}
