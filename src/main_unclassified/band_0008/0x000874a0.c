/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C34513654AF7C7B6FA302184D833EBC64461B12CB3D7625F50E52EF96042A6CA
 * Entry: 0x000874a0, Ghidra index: 1615, label: FUN_000874a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000874a0(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  int in_EAX;
  undefined4 uVar3;
  int *piVar4;
  undefined1 local_5;
  undefined4 local_4;
  
  if (in_EAX != param_1) {
    local_5 = 0;
    piVar4 = (int *)(in_EAX + 0x20);
    do {
      if (*piVar4 != 0) {
        iVar1 = piVar4[1];
        uVar2 = FUN_0024a840(&param_1,&param_1);
        /* 0x000874DA mov [esp+0x1c],al; 0x000874DE mov edx,[esp+0x1c].
         * The high 24 bits are not initialized by this instruction.
         * Preserve the original byte store; ABI_UNVERIFIED for the callee. */
        ((unsigned char *)&local_4)[0] = uVar2;
        FUN_00087630(iVar1,piVar4 + -1,local_4);
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(*piVar4);
      }
      *piVar4 = 0;
      piVar4[1] = 0;
      piVar4[2] = 0;
      if (0xf < (uint)piVar4[-2]) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(piVar4[-7]);
      }
      piVar4[-2] = 0xf;
      piVar4[-3] = 0;
      uVar3 = FUN_0001f4d0(&local_5);
      FUN_0001f4e0(uVar3);
      in_EAX = in_EAX + 0x2c;
      piVar4 = piVar4 + 0xb;
    } while (in_EAX != param_1);
  }
  return;
}
