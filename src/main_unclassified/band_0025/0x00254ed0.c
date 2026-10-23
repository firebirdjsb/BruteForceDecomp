/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E6EB10CDF096227CED44786B44789BAFF8237970AB4F215F6EFBEB77E9843F51
 * Entry: 0x00254ed0, Ghidra index: 8419, label: FUN_00254ed0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00254ed0(void)

{
  int iVar1;
  int *unaff_ESI;
  int *unaff_EDI;
  undefined1 local_108 [264];
  
  *unaff_EDI = 0;
  (**(code **)(*unaff_ESI + 0xc))();
  if (((uint)local_108 & 0x10) != 0) {
    *unaff_EDI = 0;
    iVar1 = (**(code **)(*unaff_ESI + 0x1c))();
    if ((iVar1 < 0) || (*unaff_EDI == 0)) {
      (**(code **)(*unaff_ESI + 0x10))();
      (**(code **)(*unaff_ESI + 0x34))(unaff_ESI,&stack0xfffffee4,0x200,0,0);
      if (unaff_ESI != (int *)0x0) {
        (**(code **)(*unaff_ESI + 8))(unaff_ESI);
      }
      return 0x80004005;
    }
  }
  return 0;
}
