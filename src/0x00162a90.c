/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9DC81B69205EC09817BD1213D3A7837D737F0904893A1F4D9D51721D6C606013
 * Entry: 0x00162a90, Ghidra index: 4653, label: FUN_00162a90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00162a90(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  int in_EAX;
  int *piVar3;
  
  if (in_EAX != param_1) {
    piVar3 = (int *)(in_EAX + 0x184);
    do {
      iVar1 = *piVar3;
      if (iVar1 != 0) {
        uVar2 = FUN_0024a840(&param_1,&param_1);
        FUN_00050b40(iVar1,piVar3[1],piVar3 + -1,uVar2);
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(*piVar3);
      }
      *piVar3 = 0;
      piVar3[1] = 0;
      piVar3[2] = 0;
      iVar1 = piVar3[-5];
      if (iVar1 != 0) {
        uVar2 = FUN_0024a840(&param_1,&param_1);
        FUN_00050b40(iVar1,piVar3[-4],piVar3 + -6,uVar2);
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(piVar3[-5]);
      }
      piVar3[-5] = 0;
      piVar3[-4] = 0;
      piVar3[-3] = 0;
      FUN_00160220();
      in_EAX = in_EAX + 0x1a8;
      piVar3 = piVar3 + 0x6a;
    } while (in_EAX != param_1);
  }
  return;
}
