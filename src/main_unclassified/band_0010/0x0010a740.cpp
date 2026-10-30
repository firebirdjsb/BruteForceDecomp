/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F2996704BCB9366C69A14755E8FAEFAE3D5599BC8B276D86A6AB199555EF5F95
 * Entry: 0x0010a740, Ghidra index: 3428, label: FUN_0010a740
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010a740(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 local_4 [4];
  
  if (*(undefined4 **)(param_1 + 0x80) == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)**(undefined4 **)(param_1 + 0x80);
  }
  while( true ) {
    if (puVar3 == *(undefined4 **)(param_1 + 0x80)) {
      puVar3 = *(undefined4 **)(param_1 + 0x80);
      if (puVar3 == (undefined4 *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *puVar3;
      }
      FUN_001298b0(local_4,uVar2,puVar3);
      *(undefined4 *)(param_1 + 0xe8) = 0;
      return;
    }
    iVar1 = puVar3[2];
    if (iVar1 != 0) break;
    puVar3 = (undefined4 *)*puVar3;
  }
  if (7 < *(uint *)(iVar1 + 0x24)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(iVar1 + 0x10));
  }
  *(undefined4 *)(iVar1 + 0x24) = 7;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined2 *)(iVar1 + 0x10) = 0;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(iVar1);
}
