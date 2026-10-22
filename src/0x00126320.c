/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 70E334E750C3A9DA7DD27C51E7C703686A8965069150FF88C38654CADF9EE1B7
 * Entry: 0x00126320, Ghidra index: 3705, label: FUN_00126320
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00126320(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  int *unaff_ESI;
  undefined4 local_78;
  undefined1 local_6c [16];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 uStack_50;
  undefined4 local_24;
  undefined1 local_20;
  
  if (in_EAX != 0) {
    cVar1 = FUN_00112790();
    if (cVar1 != '\0') {
      FUN_0003f010();
      local_20 = 1;
      local_24 = 0x3f000000;
      iVar2 = (**(code **)(*unaff_ESI + 0x40))();
      local_78 = *(undefined4 *)(iVar2 + 0x28);
      uStack_54 = *(undefined4 *)(iVar2 + 0x2c);
      uStack_5c = *(undefined4 *)(iVar2 + 0x24);
      uStack_50 = 1;
      uStack_58 = local_78;
      FUN_0017c020(local_6c);
      return;
    }
    iVar2 = FUN_0017beb0(&local_78);
    if ((iVar2 != 0) && (unaff_ESI != (int *)0x0)) {
      FUN_00178e50(&stack0xffffff8c);
    }
  }
  return;
}
