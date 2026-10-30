/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 57F40D91EBDD637F116F073A423AD4C93AD68D6FE70C7AB3E5B4566390E86904
 * Entry: 0x00057360, Ghidra index: 849, label: FUN_00057360
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE 0x0005739d: fcomp m32fp [0x003c05fc], a four-byte float.
 * Original file bits 0x40800000 (4.0f); symbol linkage remains ABI_UNVERIFIED. */
extern int FUN_0014d2e0(void);
extern void FUN_00232180(int param_1);
extern void FUN_00056d20(void);
extern undefined4 FUN_00039360(void);
extern float10 FUN_000394b0(void);
extern char FUN_0004cd10(undefined4 param_1,float param_2);
extern uint FUN_00022bc0(int *param_1);

extern float DAT_003c05fc;
char FUN_00057360(undefined4 param_1,int param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uVar4;
  undefined1 local_11c [8];
  int aiStack_114 [64];
  int local_14;
  
  if (((*(byte *)(param_2 + 0x70) & 1) == 0) && ((*(byte *)(param_3 + 0x1c) & 1) == 0)) {
    cVar1 = '\0';
    if (*(float *)(param_2 + 0x7dc) < DAT_003c05fc == (*(float *)(param_2 + 0x7dc) == DAT_003c05fc))
    {
      return '\x01';
    }
    iVar2 = FUN_0014d2e0();
    if (iVar2 != 0) {
      uVar4 = 0;
      FUN_0014d2e0(0);
      FUN_00232180(uVar4);
      FUN_00056d20();
      aiStack_114[local_14] = param_2;
      local_14 = local_14 + 1;
      aiStack_114[local_14] = (int)param_3;
      local_14 = local_14 + 1;
      if (*(int *)(param_3[3] + 4) == 3) {
        (**(code **)(*param_3 + 0x40))();
        FUN_00039360();
        fVar3 = (float10)FUN_000394b0();
        cVar1 = FUN_0004cd10(*(undefined4 *)(param_2 + 8),(float)(fVar3 + (float10)0.05));
        if (cVar1 != '\0') {
          return cVar1;
        }
      }
      if ((*(int *)(param_3[3] + 4) == 3) || (cVar1 = FUN_00022bc0(local_11c), cVar1 == '\0')) {
        (**(code **)(*param_3 + 0x40))();
      }
      fVar3 = (float10)FUN_000394b0();
      cVar1 = FUN_0004cd10(*(undefined4 *)(param_2 + 8),(float)(fVar3 + (float10)0.01));
    }
    return cVar1;
  }
  return '\0';
}
