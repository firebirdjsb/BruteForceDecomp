/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AF0387BD8BE127E0333A58AB08923D33B7972F902B47A4ED4CD02AEA51372003
 * Entry: 0x0010ab60, Ghidra index: 3433, label: FUN_0010ab60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010ab60(void)

{
  undefined4 *puVar1;
  int in_EAX;
  undefined4 *puVar2;
  int iVar3;
  
  if (*(undefined4 **)(in_EAX + 0x80) == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)**(undefined4 **)(in_EAX + 0x80);
  }
  puVar1 = *(undefined4 **)(in_EAX + 0x80);
  iVar3 = 0;
  for (; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    FUN_0010abb0(iVar3);
    iVar3 = iVar3 + 1;
  }
  return;
}
