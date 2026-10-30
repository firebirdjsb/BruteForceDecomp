/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DC401CD4D1166B2C4655B3C40D97ADBF636626DA7638115661A2082747EC9389
 * Entry: 0x002d4e50, Ghidra index: 10214, label: FUN_002d4e50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002d4e50(int param_1)

{
  int in_EAX;
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  piVar3 = (int *)(in_EAX + 0x10);
  do {
    uVar1 = (**(code **)**(undefined4 **)(*(int *)(*piVar3 + 0x14) + 0xa4))
                      (*(byte *)((piVar3[2] & 0xfffffff0U) + 3) & 0x1f);
    *(undefined4 *)(param_1 + iVar2 * 4) = uVar1;
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 5;
  } while (iVar2 < 2);
  return;
}
