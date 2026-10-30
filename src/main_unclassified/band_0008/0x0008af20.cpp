/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 57B95795056DCCD1B1F679326AD1864CEB1754D432CB710F5F3551BF3E86E6FD
 * Entry: 0x0008af20, Ghidra index: 1670, label: FUN_0008af20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0005b9a0(uint *param_1,int param_2);
extern void FUN_0005bda0(void);
extern void FUN_00056fe0(int param_1,int param_2,int *param_3);
extern void FUN_00017b60(int32_t* param_1, int32_t param_2);
extern void FUN_00074b20(void);

int * FUN_0008af20(void)

{
  int in_EAX;
  int *piVar1;
  undefined4 uVar2;
  int unaff_ESI;
  undefined4 uVar3;
  
  if ((*(int *)(unaff_ESI + 0x28) != 0) && (in_EAX != 0)) {
    piVar1 = (int *)FUN_0008b300(unaff_ESI);
    if (piVar1 != (int *)0x0) {
      FUN_0005b9a0(*(undefined4 *)(unaff_ESI + 0x28),piVar1);
      FUN_0005bda0();
      if (*(int *)(piVar1[2] + 0x1f8) != 0) {
        FUN_00056fe0(*(int *)(piVar1[2] + 0x1f8),piVar1,0);
      }
      uVar3 = 0;
      uVar2 = (**(code **)(*piVar1 + 0xf4))(0);
      FUN_00017b60(uVar2,uVar3);
      FUN_00074b20();
    }
    return piVar1;
  }
  return (int *)0x0;
}
