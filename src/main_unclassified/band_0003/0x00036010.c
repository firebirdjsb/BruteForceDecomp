/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7921503F2444546E0D1A8822ABF357D475DD6EEE6A79EF85915A01EB2A53AA11
 * Entry: 0x00036010, Ghidra index: 355, label: FUN_00036010
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_00036010(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  int iStack_3c;
  
  piVar3 = (int *)(**(code **)(*(int *)(in_ECX + -0x40) + 0x24))();
  if ((*(int *)(in_ECX + 0x8f4) != 0) &&
     ((*(int *)(in_ECX + 0x8f8) - *(int *)(in_ECX + 0x8f4)) / 0x18 != 0)) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x8f4) + 0x14 + *(int *)(in_ECX + 0x900) * 0x18);
    cVar2 = FUN_00026d80(in_ECX + -0x40,in_ECX + 0x8f0,in_ECX + 0x438,0,0x40000000);
    if (cVar2 == '\0') {
      if (iVar1 != 0) {
        iVar4 = (**(code **)(*(int *)(iVar1 + 0xc) + 4))();
        if (iVar4 != 0) {
          piVar3 = (int *)(**(code **)(*(int *)(iVar1 + 0xc) + 4))();
          (**(code **)(*piVar3 + 8))();
          FUN_0001fdd0();
          FUN_000198e0(0x41a00000);
        }
      }
      if (*(int **)(in_ECX + 0x45c) == (int *)0x0) {
        return 1;
      }
      (**(code **)(**(int **)(in_ECX + 0x45c) + 4))(in_ECX + 0x45c);
      *(undefined4 *)(iStack_3c + 0x45c) = 0;
      return 1;
    }
  }
  (**(code **)(*piVar3 + 0x38))();
  FUN_000255d0(param_1,0);
  FUN_0004d970(in_ECX + -0x40,param_1,0,1,1);
  return 1;
}
