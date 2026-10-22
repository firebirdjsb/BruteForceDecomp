/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DC58EC0D640767CD2A72DE65792778BFE7580A526AC8C91CCEBC07AFE35C6A77
 * Entry: 0x000fcf20, Ghidra index: 3158, label: FUN_000fcf20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000fcf20(void)

{
  int *piVar1;
  int in_EAX;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_4;
  
  piVar4 = *(int **)(in_EAX + 4);
  piVar1 = *(int **)(in_EAX + 8);
  local_4 = 0;
  if (piVar4 == piVar1) {
    return 0;
  }
  do {
    iVar2 = FUN_002ea01d(0x94);
    if (iVar2 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)FUN_00109bd0();
    }
    iVar2 = piVar4[2];
    piVar3[3] = piVar4[1];
    piVar3[4] = iVar2;
    (**(code **)(*piVar3 + 0x1c))();
    piVar3[5] = piVar4[3];
    (**(code **)(*piVar3 + 0x1c))();
    piVar3[6] = piVar4[4];
    (**(code **)(*piVar3 + 0x1c))();
    piVar3[9] = *piVar4;
    (**(code **)(*piVar3 + 0x2c))();
    iVar2 = FUN_000ff9e0(piVar3);
    if (iVar2 != -1) {
      FUN_000fbd40();
      local_4 = local_4 + 1;
    }
    piVar4 = piVar4 + 10;
  } while (piVar4 != piVar1);
  return local_4;
}
