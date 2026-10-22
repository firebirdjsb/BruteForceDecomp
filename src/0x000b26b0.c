/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E539687DADAADC477CF2343DCB3A72447881C97E87103FC4BB2AACD138782317
 * Entry: 0x000b26b0, Ghidra index: 2148, label: FUN_000b26b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000b26b0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int unaff_EBX;
  undefined4 *local_4;
  
  iVar3 = *(int *)(unaff_EBX + 0x1c);
  do {
    if (iVar3 == 0) {
      return;
    }
    iVar3 = 0;
    if (*(int **)(unaff_EBX + 0x18) != (int *)0x0) {
      iVar3 = **(int **)(unaff_EBX + 0x18);
    }
    puVar1 = *(undefined4 **)(iVar3 + 8);
    piVar2 = *(int **)(unaff_EBX + 0x18);
    piVar4 = (int *)0x0;
    if (*(undefined4 **)(unaff_EBX + 0x18) != (undefined4 *)0x0) {
      piVar4 = (int *)**(undefined4 **)(unaff_EBX + 0x18);
    }
    if (piVar4 != piVar2) {
      do {
        if ((undefined4 *)piVar4[2] == puVar1) break;
        piVar4 = (int *)*piVar4;
      } while (piVar4 != piVar2);
      if ((piVar4 != piVar2) &&
         (local_4 = puVar1, FUN_000e0860(&local_4), puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    iVar3 = *(int *)(unaff_EBX + 0x1c);
  } while( true );
}
