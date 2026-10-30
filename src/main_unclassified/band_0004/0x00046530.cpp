/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9F6F3C3B9C47EE5136273F955A6D349081A72E57DA9118936E2C7578520821AC
 * Entry: 0x00046530, Ghidra index: 549, label: FUN_00046530
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern int FUN_0005bca0(void);
extern undefined4 FUN_00026d80(int *param_1,int param_2,float *param_3,undefined4 param_4,float param_5);
extern undefined4 FUN_00055aa0(void);
extern undefined4 FUN_000255d0(undefined4 param_1,byte param_2);
extern int FUN_0004d970(int *param_1,float *param_2,int param_3,char param_4,char param_5);
extern float10 FUN_00039460(void);
extern float10 FUN_00045230(void);
extern undefined4 FUN_000464d0(void);
extern void FUN_0001c5d0(void);

undefined4 FUN_00046530(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  undefined4 uVar5;
  float10 fVar6;
  float10 fVar7;
  
  piVar2 = (int *)FUN_000120f0();
  iVar3 = FUN_000120f0();
  if ((((iVar3 != 0) && (*(int *)(iVar3 + 0x59c) != 0)) &&
      (piVar4 = (int *)FUN_0005bca0(), piVar4 != (int *)0x0)) && (piVar2 != piVar4)) {
    if ((in_ECX[0x23d] == 0) || ((in_ECX[0x23e] - in_ECX[0x23d]) / 0x18 == 0)) {
      iVar3 = (**(code **)(*in_ECX + 0x4a8))();
      if (iVar3 == 0) {
        return 0;
      }
    }
    else {
      cVar1 = FUN_00026d80(in_ECX + -0x10,in_ECX + 0x23c,in_ECX + 0x10e,0,0x40000000);
      if (cVar1 == '\0') {
        iVar3 = FUN_00055aa0();
        *(uint *)(iVar3 + 0x88) = *(uint *)(iVar3 + 0x88) | 2;
        (**(code **)(*in_ECX + 8))();
        return 1;
      }
      FUN_000255d0(param_1,0);
      FUN_0004d970(in_ECX + -0x10,param_1,4,1,1);
    }
    (**(code **)(*piVar4 + 0x40))();
    (**(code **)(*piVar2 + 0x40))();
    fVar6 = (float10)FUN_00039460();
    iVar3 = FUN_000120f0();
    iVar3 = (**(code **)(*(int *)(iVar3 + 0x1b4) + 8))();
    fVar7 = (float10)*(float *)(iVar3 + 0x38) * (float10)0.5;
    if (in_ECX[6] == 1) {
      fVar7 = (float10)FUN_00045230();
      fVar7 = fVar7 * (float10)0.9;
    }
    uVar5 = 1;
    if ((float10)(float)fVar6 < fVar7 * fVar7) {
      piVar2 = *(int **)(in_ECX[0xc6] + 4);
      piVar4 = (int *)*piVar2;
      while( true ) {
        if (piVar4 == piVar2) {
          uVar5 = FUN_000464d0();
          return uVar5;
        }
        if ((piVar4[0x1c] == 1) && (((uint)piVar4[0x23] >> 3 & 1) != 0)) break;
        FUN_0001c5d0();
      }
      uVar5 = 2;
    }
    return uVar5;
  }
  return 0;
}
