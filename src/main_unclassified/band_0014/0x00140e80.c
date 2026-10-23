/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ABC5E14C136234814FFA5F7769DE6AE621A1D9080BCD044CFE986AE074B6E14A
 * Entry: 0x00140e80, Ghidra index: 4092, label: FUN_00140e80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00140e80(void)

{
  undefined4 *puVar1;
  int unaff_EBX;
  int *piVar2;
  undefined1 auStack_4 [4];
  
  *(undefined4 *)(unaff_EBX + 8) = 0;
  if (*(undefined4 **)(unaff_EBX + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(unaff_EBX + 4))(1);
    *(undefined4 *)(unaff_EBX + 4) = 0;
  }
  if (*(undefined4 **)(unaff_EBX + 0x10) == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)**(undefined4 **)(unaff_EBX + 0x10);
  }
  if (piVar2 != *(int **)(unaff_EBX + 0x10)) {
    do {
      if ((undefined4 *)piVar2[2] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar2[2])(1);
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)(unaff_EBX + 0x10));
  }
  puVar1 = *(undefined4 **)(unaff_EBX + 0x10);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_001298b0(auStack_4,0,0);
    return;
  }
  FUN_001298b0(auStack_4,*puVar1,puVar1);
  return;
}
