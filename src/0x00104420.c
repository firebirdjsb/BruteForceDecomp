/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2150127C355EBC69F71DD6BDD9085043A066ECD461A08123D6BF16C0621909BC
 * Entry: 0x00104420, Ghidra index: 3316, label: FUN_00104420
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00104420(void)

{
  int *piVar1;
  int in_EAX;
  
  piVar1 = *(int **)(in_EAX + 0x118);
  *(byte *)(in_EAX + 0x114) = *(byte *)(in_EAX + 0x114) & 0xfd | 9;
  *(undefined4 *)(in_EAX + 0x110) = 0;
  *(undefined4 *)(in_EAX + 0x104) = 0xffffffff;
  *(undefined4 *)(in_EAX + 0x108) = 0xffffffff;
  if ((piVar1 != (int *)0x0) && ((*(byte *)(piVar1 + 10) & 4) != 0)) {
    *(byte *)(piVar1 + 10) = *(byte *)(piVar1 + 10) & 0xfb;
    (**(code **)(*piVar1 + 0x28))();
  }
  FUN_00104bd0();
  FUN_001045a0(in_EAX,0);
  FUN_001046c0(in_EAX,0);
  FUN_00104800(in_EAX,0);
  return;
}
