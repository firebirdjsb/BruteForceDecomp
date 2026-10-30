/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D65A8B63A475227C351693B02B50243FDCDCDA1AC8255BC6F29C6A7537791D5A
 * Entry: 0x000347b0, Ghidra index: 344, label: FUN_000347b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern float10 FUN_000235d0(int *param_1,int param_2);
extern undefined4 FUN_00026d80(int *param_1,int param_2,float *param_3,undefined4 param_4,float param_5);
extern void FUN_0004e8f0(void);
extern undefined4 FUN_000255d0(undefined4 param_1,byte param_2);
extern int FUN_0004d970(int *param_1,float *param_2,int param_3,char param_4,char param_5);

undefined4 FUN_000347b0(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  float10 fVar4;
  undefined4 local_20;
  
  *(undefined4 *)(in_ECX + 0x450) = 0;
  *(undefined4 *)(in_ECX + 0x44c) = 0;
  *(undefined4 *)(in_ECX + 0x448) = 0;
  local_20 = 1;
  piVar2 = (int *)FUN_000120f0();
  iVar3 = (**(code **)(*piVar2 + 0x40))();
  fVar4 = (float10)FUN_000235d0(in_ECX + 0x1ac,iVar3 + 0x24);
  if ((float10)7.0 < fVar4) {
    return 2;
  }
  if (*(int *)(in_ECX + 0x8f4) != 0) {
    if ((*(int *)(in_ECX + 0x8f8) - *(int *)(in_ECX + 0x8f4)) / 0x18 != 0) {
      cVar1 = FUN_00026d80(in_ECX + -0x40,in_ECX + 0x8f0,in_ECX + 0x438,0,0x40000000);
      if (cVar1 == '\0') {
        FUN_0004e8f0();
        local_20 = 2;
      }
      FUN_000255d0(param_1,0);
      FUN_0004d970(in_ECX + -0x40,param_1,3,1,1);
    }
  }
  return local_20;
}
