/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 41230E0EAE35E23EB14A2A25DFB16EDDA352B023AA9C67E5D4A84483F81388F9
 * Entry: 0x000870c0, Ghidra index: 1607, label: FUN_000870c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined1 FUN_0024a840(void);
extern void FUN_00050b40(void);
extern void FUN_00087460(void);

void FUN_000870c0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int *piVar4;
  
  if (param_1 != param_2) {
    piVar4 = (int *)(param_1 + 0x24);
    do {
      iVar1 = *piVar4;
      if (iVar1 != 0) {
        iVar2 = piVar4[1];
        uVar3 = FUN_0024a840(&param_1,&param_1);
        FUN_00050b40(iVar1,iVar2,piVar4 + -1,uVar3);
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(*piVar4);
      }
      *piVar4 = 0;
      piVar4[1] = 0;
      piVar4[2] = 0;
      if (piVar4[-4] != 0) {
        uVar3 = FUN_0024a840(&param_1,&param_1);
        FUN_00087460(piVar4 + -5,uVar3);
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(piVar4[-4]);
      }
      param_1 = param_1 + 0x30;
      piVar4[-4] = 0;
      piVar4[-3] = 0;
      piVar4[-2] = 0;
      piVar4 = piVar4 + 0xc;
    } while (param_1 != param_2);
  }
  return;
}
