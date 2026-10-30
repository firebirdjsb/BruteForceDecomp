/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 01073E2C5D577B5A311EDAABE7A589D8FD8AEA637F9878D659E04349B02E91A3
 * Entry: 0x00032110, Ghidra index: 324, label: FUN_00032110
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_00026d80(int *param_1,int param_2,float *param_3,undefined4 param_4,float param_5);
extern undefined4 FUN_00055aa0(void);
extern undefined4 FUN_000255d0(undefined4 param_1,byte param_2);
extern int FUN_0004d970(int *param_1,float *param_2,int param_3,char param_4,char param_5);

undefined4 FUN_00032110(void)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  float *unaff_EBX;
  int *unaff_ESI;
  
  piVar4 = (int *)(**(code **)(*unaff_ESI + 0x24))();
  if (unaff_ESI[0x24d] != 0) {
    if ((unaff_ESI[0x24e] - unaff_ESI[0x24d]) / 0x18 != 0) {
      cVar3 = FUN_00026d80(unaff_ESI,unaff_ESI + 0x24c,unaff_ESI + 0x11e,0,0x40000000);
      if (cVar3 == '\0') {
        iVar5 = FUN_00055aa0();
        *(uint *)(iVar5 + 0x88) = *(uint *)(iVar5 + 0x88) | 2;
        return 1;
      }
      FUN_000255d0(unaff_EBX,0);
      FUN_0004d970(unaff_ESI,unaff_EBX,3,1,1);
      return 1;
    }
  }
  iVar5 = (**(code **)(*piVar4 + 0x28))();
  fVar1 = *(float *)(iVar5 + 0x20);
  fVar2 = *(float *)(iVar5 + 0x14);
  *unaff_EBX = -*(float *)(iVar5 + 8);
  unaff_EBX[1] = -fVar2;
  unaff_EBX[2] = -fVar1;
  FUN_0004d970(unaff_ESI,unaff_EBX,1,1,1);
  return 1;
}
