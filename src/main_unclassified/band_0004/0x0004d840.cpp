/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A78B060F74EA6E65B1606010D43FC8E2177E1CAFDF5318C43B8FF40431648BF0
 * Entry: 0x0004d840, Ghidra index: 655, label: FUN_0004d840
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00058610(int param_1,float *param_2);
extern undefined4 FUN_000233a0(void);
extern void FUN_00040fc0(void);
extern undefined1 FUN_000587d0(int *param_1, float *param_2);

int FUN_0004d840(void)

{
  float fVar1;
  undefined4 uVar2;
  char cVar3;
  int in_EAX;
  int iVar4;
  undefined1 auStack_18 [12];
  undefined1 auStack_c [12];
  
  fVar1 = *(float *)(in_EAX + 0x1b4);
  if (1.1920929e-07 <
      *(float *)(in_EAX + 0x1bc) * *(float *)(in_EAX + 0x1bc) +
      *(float *)(in_EAX + 0x1b8) * *(float *)(in_EAX + 0x1b8) + fVar1 * fVar1) {
    iVar4 = FUN_00058610(*(undefined4 *)(in_EAX + 0x1a8),(float *)(in_EAX + 0x1b4));
    return iVar4;
  }
  if (*(int *)(in_EAX + 0x934) != 0) {
    if ((*(int *)(in_EAX + 0x938) - *(int *)(in_EAX + 0x934)) / 0x18 != 0) {
      iVar4 = *(int *)(*(int *)(in_EAX + 0x938) + -4);
      if (iVar4 == 0) {
        iVar4 = *(int *)(in_EAX + 0x938) + -0x14;
      }
      else {
        iVar4 = (**(code **)(*(int *)(iVar4 + 8) + 4))();
      }
      uVar2 = *(undefined4 *)(in_EAX + 0x1a8);
      iVar4 = FUN_00058610(uVar2,iVar4);
      if (iVar4 == 0) {
        cVar3 = FUN_000233a0();
        if (cVar3 != '\0') {
          cVar3 = FUN_000233a0();
          if (cVar3 != '\0') {
            FUN_00040fc0();
            FUN_00040fc0();
            FUN_000587d0(uVar2,auStack_c,auStack_18);
          }
        }
      }
      return iVar4;
    }
  }
  return 0;
}
