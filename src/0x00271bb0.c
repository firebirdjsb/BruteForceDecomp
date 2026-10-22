/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 29957BB892D7618A6351FEEF99CE01E7A76168FB9E91F158F8024D7E0DD8B5AD
 * Entry: 0x00271bb0, Ghidra index: 8822, label: FUN_00271bb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00271bb0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int unaff_ESI;
  undefined1 auStack_4 [4];
  
  piVar1 = *(int **)(unaff_ESI + 0xf8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(unaff_ESI + 0xf8) = 0;
  }
  puVar2 = *(undefined4 **)(unaff_ESI + 0x9c);
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar2;
  }
  FUN_001298b0(auStack_4,uVar3,puVar2);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(unaff_ESI + 0x9c));
}
