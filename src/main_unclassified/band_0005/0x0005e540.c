/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F968C500A0DEE28D329535040D967053BAE21AB6F19BB80CEA65E08A4241E8EE
 * Entry: 0x0005e540, Ghidra index: 986, label: FUN_0005e540
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0005e540(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int unaff_EBX;
  uint uVar3;
  undefined1 local_10 [4];
  int *local_c;
  int *local_8;
  undefined4 local_4;
  
  uVar3 = 0;
  do {
    iVar1 = *(int *)(unaff_EBX + 4);
    if ((iVar1 == 0) || ((uint)(*(int *)(unaff_EBX + 8) - iVar1 >> 3) <= uVar3)) {
      return 0;
    }
    iVar1 = *(int *)(iVar1 + 4 + uVar3 * 8);
    if ((iVar1 != param_2) && (iVar1 != 0)) {
      local_c = (int *)0x0;
      local_8 = (int *)0x0;
      local_4 = 0;
      FUN_0005e310(param_1,iVar1,local_10);
      for (piVar2 = local_c; piVar2 != local_8; piVar2 = piVar2 + 1) {
        if (*piVar2 == param_2) {
          if (piVar2 != local_8) {
            if (local_c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00237ec0(local_c);
            }
            return *(undefined4 *)(*(int *)(unaff_EBX + 4) + 4 + uVar3 * 8);
          }
          break;
        }
      }
      if (local_c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(local_c);
      }
    }
    uVar3 = uVar3 + 1;
  } while( true );
}
