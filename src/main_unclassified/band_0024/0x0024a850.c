/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 14C3A6D4424A1EEF7884B76739A940D2F9A9322A3412B82BCABDBB33214207C7
 * Entry: 0x0024a850, Ghidra index: 8219, label: FUN_0024a850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0024a850(int param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  int *piVar3;
  
  if (param_1 != param_2) {
    piVar3 = (int *)(param_1 + 0x20);
    do {
      iVar1 = *piVar3;
      if (iVar1 != 0) {
        uVar2 = FUN_0024a840(&param_2,&param_2);
        FUN_00050b40(iVar1,piVar3[1],piVar3 + -1,uVar2);
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(*piVar3);
      }
      *piVar3 = 0;
      piVar3[1] = 0;
      piVar3[2] = 0;
      if (piVar3[-4] != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(piVar3[-4]);
      }
      piVar3[-4] = 0;
      piVar3[-3] = 0;
      piVar3[-2] = 0;
      param_1 = param_1 + 0x2c;
      piVar3 = piVar3 + 0xb;
    } while (param_1 != param_2);
  }
  return;
}
