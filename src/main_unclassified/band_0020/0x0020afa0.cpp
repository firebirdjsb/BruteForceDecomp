/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2269B53B29A8F37198F3B67D89BF4D177552D42F5DA8CAE4C03E3D1E4AC1DA4A
 * Entry: 0x0020afa0, Ghidra index: 7334, label: FUN_0020afa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_0020afa0(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_002ea01d(0x80);
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_001fdaa0();
  }
  (**(code **)(*piVar2 + 0x34))();
  if ((undefined4 *)piVar2[0x1f] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)piVar2[0x1f])(1);
    piVar2[0x1f] = 0;
  }
  if (piVar2[0x10] != 0) {
    iVar1 = FUN_002ea01d(0x38);
    if (iVar1 != 0) {
      iVar1 = FUN_002241d0();
      piVar2[0x1f] = iVar1;
      return piVar2;
    }
    piVar2[0x1f] = 0;
  }
  return piVar2;
}
