/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0659BDA2FB70745E2D0BA69180A83EFA9EB17374833A90D6DB6EA4800A8E442B
 * Entry: 0x0016dbe0, Ghidra index: 4803, label: FUN_0016dbe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0016dbe0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int local_8;
  int local_4;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 / 0x14;
    if (iVar1 < 0x21) {
LAB_0016dcbf:
      if (1 < iVar1) {
        FUN_0016e170(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        FUN_0016e0d0(param_1,param_2);
        FUN_0016e110(param_1,param_2);
        return;
      }
      goto LAB_0016dcbf;
    }
    FUN_0016df70(&local_8,param_1,param_2);
    iVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((local_8 - param_1) / 0x14 < (param_2 - local_4) / 0x14) {
      FUN_0016dbe0(param_1,local_8,param_3);
      param_1 = iVar1;
    }
    else {
      FUN_0016dbe0(local_4,param_2,param_3);
      param_2 = local_8;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}
