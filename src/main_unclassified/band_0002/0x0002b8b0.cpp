/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D5CDAB3151F5EF0347BF1019835EF5C8AC8D467E47563B51BC31F0EB1E551FD8
 * Entry: 0x0002b8b0, Ghidra index: 292, label: FUN_0002b8b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_00026d80(int *param_1,int param_2,float *param_3,undefined4 param_4,float param_5);
extern undefined4 FUN_000255d0(undefined4 param_1,byte param_2);
extern int FUN_0004d970(int *param_1,float *param_2,int param_3,char param_4,char param_5);
extern void FUN_0004e8f0(void);
extern void FUN_0003a4a0(void);
extern undefined4 FUN_00055aa0(void);
extern float10 FUN_00023900(float param_1,float param_2);
extern void FUN_000124f0(float param_1, int32_t in_ECX);
extern undefined4 FUN_00049ca0(void);
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern undefined4 FUN_00057280(void);
extern int FUN_00049c60(void);
extern uint FUN_00054950(float param_1,undefined4 param_2,uint param_3,uint param_4,byte param_5);
extern void FUN_000239d0(undefined4 param_1);
extern int FUN_0004ad00(int param_1);
extern int FUN_000388b0(int param_1);
extern void FUN_00022e50(void);
extern undefined4 FUN_000456c0(void);
extern float10 FUN_00039460(void);
extern float10 FUN_00045230(void);

int * FUN_0002b8b0(undefined4 param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  byte bVar6;
  int *in_ECX;
  float10 fVar7;
  int *local_154;
  /* The original [esp+0x14] slot is reused as x87 float storage only
   * on the separate 0x0002ba23..0x0002ba3e path. Keep the pointer
   * lifetime above distinct; host pointer width is not Xbox's ABI. */
  float fStack_154;
  int *local_150;
  
  iVar3 = in_ECX[0x155];
  local_150 = (int *)0x1;
  if (iVar3 == 0) {
    if ((in_ECX[0x23d] != 0) && ((in_ECX[0x23e] - in_ECX[0x23d]) / 0x18 != 0)) {
      cVar2 = FUN_00026d80(in_ECX + -0x10,in_ECX + 0x23c,in_ECX + 0x10e,0,0x3ecccccd);
      FUN_000255d0(param_1,0);
      FUN_0004d970(in_ECX + -0x10,param_1,4,1,1);
      if (cVar2 != '\0') {
        return (int *)0x1;
      }
    }
    FUN_0004e8f0();
    FUN_0003a4a0();
    (**(code **)(*in_ECX + 8))();
    iVar3 = FUN_00055aa0();
    if ((*(uint *)(iVar3 + 0x88) >> 0xd & 1) != 0) {
      iVar3 = FUN_00055aa0();
      *(uint *)(iVar3 + 0x88) = *(uint *)(iVar3 + 0x88) | 2;
      in_ECX[0x155] = 2;
      return (int *)0x1;
    }
    fVar7 = (float10)FUN_00023900(0x41a00000,0x42180000);
    FUN_000124f0((float)fVar7);
    in_ECX[0x155] = 1;
    iVar3 = FUN_00049ca0();
    if (iVar3 == 0) {
      return (int *)0x1;
    }
    iVar3 = FUN_000120f0();
    cVar2 = FUN_00057280();
    if (cVar2 == '\0') {
      return (int *)0x1;
    }
    iVar4 = FUN_00049c60();
    if (iVar4 == 0) {
      return (int *)0x1;
    }
    *(uint *)(iVar3 + 0x250) = *(uint *)(iVar3 + 0x250) | 1;
    /* 0x0002bc5c: mov ecx,[esp+0x14]; 0x0002bc60: movzx ecx,byte [ecx+0x14];
     * 0x0002bc64: and ecx,0xffffff01. local_154 is that stack pointer. */
    bVar6 = *((byte *)local_154 + 0x14) & 1;
    FUN_00054950(0,*(undefined4 *)(iVar3 + 0x24c),bVar6,bVar6,bVar6);
    return (int *)0x1;
  }
  if (iVar3 != 1) {
    if (iVar3 != 2) {
      return (int *)0x1;
    }
    (**(code **)(*in_ECX + 0x10))(param_1);
    return local_154;
  }
  local_154 = (int *)FUN_000120f0();
  bVar1 = true;
  (**(code **)in_ECX[0x156])(in_ECX[0x100]);
  if ((char)in_ECX[0x15a] == '\0') goto LAB_0002ba4f;
  FUN_000239d0(local_154);
  FUN_0004ad00(in_ECX + -0x10);
  iVar3 = FUN_000388b0(in_ECX[0xc6]);
  iVar4 = FUN_00055aa0();
  if (((((*(uint *)(iVar4 + 0x88) & 0x2000) != 0) && (*(char *)(iVar4 + 0x19) == '\0')) ||
      (iVar4 == -0x1c)) ||
     ((*(int *)(iVar4 + 0x28) != 0 && ((*(byte *)(*(int *)(iVar4 + 0x28) + 0x70) & 1) == 0)))) {
    if ((iVar3 != 0) &&
       (((*(uint *)(iVar3 + 0x80) >> 3 & 1) != 0 && (0.7 < *(float *)(iVar3 + 0x14))))) {
      FUN_00055aa0();
      FUN_00022e50();
      local_150 = (int *)(**(code **)(*in_ECX + 0xb0))(param_1);
      bVar1 = false;
      if (local_150 != (int *)0x1) goto LAB_0002ba4f;
    }
    if (((in_ECX[0xe1] & 0x100U) == 0) ||
       (((in_ECX[6] != 1 && (in_ECX[6] != 4)) ||
        (piVar5 = (int *)FUN_000456c0(), piVar5 == (int *)0x0)))) goto LAB_0002ba4f;
    (**(code **)(*piVar5 + 0x40))();
    (**(code **)(*local_154 + 0x40))();
    fVar7 = (float10)FUN_00039460();
    /* 0x0002ba23: fstp dword [esp+0x14] (not a pointer cast). */
    fStack_154 = (float)fVar7;
    fVar7 = (float10)FUN_00045230();
    /* 0x0002ba38: fld dword [esp+0x14] (same float lifetime). */
    if ((float10)fStack_154 <= fVar7 * (float10)3.5 * fVar7 * (float10)3.5) goto LAB_0002ba4f;
  }
  local_150 = (int *)0x2;
LAB_0002ba4f:
  if (((*(byte *)(in_ECX + 0x158) & 1) != 0) &&
     ((float)in_ECX[0x157] < 0.0 == ((float)in_ECX[0x157] == 0.0))) {
    if (!bVar1) {
      return local_150;
    }
    (**(code **)(*in_ECX + 0x10))(param_1);
    return local_154;
  }
  return (int *)0x2;
}
