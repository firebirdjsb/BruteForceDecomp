/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DAFA78074BD14C113F58CC030EFC25D2ABAE1D7C986BC6E45E14005E7AB64BB2
 * Entry: 0x000a7640, Ghidra index: 1988, label: FUN_000a7640
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0025ae60(void);
extern void FUN_00135410(uint *param_1);
extern void FUN_00076220(void);
extern void FUN_0012aba0(void);

void FUN_000a7640(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int in_ECX;
  int *piVar5;
  int *piVar6;
  int *local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined1 local_14 [4];
  int *local_10;
  undefined4 local_c;
  
  local_10 = (int *)FUN_0025ae60(local_14);
  *(undefined1 *)((int)local_10 + 0x15) = 1;
  local_10[1] = (int)local_10;
  *local_10 = (int)local_10;
  local_10[2] = (int)local_10;
  piVar6 = *(int **)(in_ECX + 0xc);
  piVar5 = *(int **)(in_ECX + 8);
  local_c = 0;
  local_28 = piVar6;
  if (piVar5 != piVar6) {
    do {
      piVar1 = *(int **)(*piVar5 + 0x10c);
      piVar2 = (int *)*piVar1;
      if (piVar2 != piVar1) {
        local_20 = 1;
        do {
          local_24 = piVar2[4];
          FUN_00135410(&local_24);
          FUN_00076220();
          piVar6 = local_28;
        } while (piVar2 != piVar1);
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != piVar6);
  }
  piVar6 = (int *)*local_10;
  local_28 = local_10;
  while (piVar6 != local_28) {
    piVar5 = (int *)piVar6[3];
    puVar3 = (undefined4 *)*param_1;
    uVar4 = (**(code **)(*piVar5 + 0xc))(piVar5,param_2);
    (*(code *)*puVar3)(in_ECX,uVar4);
    FUN_0012aba0();
  }
  FUN_000a8030(&local_28,*local_10,local_10);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(local_10);
}
