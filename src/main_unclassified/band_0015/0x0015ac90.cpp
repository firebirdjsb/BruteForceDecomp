/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 522ABF36D43234F8F347B56B96D6445409448D02D97A23FCE636B6ED10B14B59
 * Entry: 0x0015ac90, Ghidra index: 4518, label: FUN_0015ac90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE: two guest DWORDs, EAX result, RET 8; implicit ECX/EDX remain unresolved. */
extern uint32_t FUN_00160da0(uint32_t guest_word0, uint32_t guest_word1);
void FUN_0015ac90(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int unaff_retaddr;
  
  iVar1 = param_1[2];
  piVar3 = (int *)FUN_00160da0(0xffffffff,1);
  if (piVar3 != (int *)0x0) {
    piVar3 = (int *)(**(code **)(*piVar3 + 8))(iVar1);
    if (piVar3 != (int *)0x0) {
      FUN_000da880(iVar1,piVar3,1);
      FUN_000da8f0(iVar1);
      if (piVar3 != (int *)0x0) {
        iVar1 = *piVar3;
        uVar4 = (**(code **)(*param_1 + 0x40))();
        (**(code **)(iVar1 + 0x50))(uVar4);
        FUN_00156300(param_1);
        piVar5 = (int *)(-(uint)((*(byte *)((int)piVar3 + 0x26) & 0x40) != 0) & (uint)piVar3);
        if (piVar5 != (int *)0x0) {
          if (*(char *)(unaff_retaddr + 4) != '\0') {
            (**(code **)(*piVar5 + 0xbc))();
            piVar5[0x6b] = piVar5[0x6b] & 0xfffffffdU | 1;
            iVar1 = param_1[0x3c];
            iVar2 = param_1[0x3b];
            piVar5[0x3a] = param_1[0x3a];
            piVar5[0x3b] = iVar2;
            piVar5[0x3c] = iVar1;
            iVar1 = param_1[0x3f];
            iVar2 = param_1[0x3d];
            piVar5[0x3e] = param_1[0x3e];
            piVar5[0x3d] = iVar2;
            piVar5[0x3f] = iVar1;
            piVar5[0x40] = param_1[0x40];
            piVar5[0x11] = param_1[0x11];
            uVar4 = (**(code **)(*piVar5 + 0x34))(0);
            FUN_0015a7e0(uVar4);
            if ((*(byte *)((int)piVar5 + 0x71) & 2) == 0) {
              FUN_000db3e0(piVar3);
              return;
            }
            (**(code **)(*piVar5 + 0xb8))(0x3f800000);
            FUN_0010f830(piVar5 + 0x12,piVar5[0x14]);
            return;
          }
          piVar5[0x6b] = piVar5[0x6b] & 0xfffffffeU | 2;
        }
      }
    }
  }
  return;
}
