/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2FDAE162322A3D4F513E482E36DEBEFF0A5124E1C1907283C07F1FDAE92B5F16
 * Entry: 0x0009ffd0, Ghidra index: 1893, label: FUN_0009ffd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0009ffd0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int local_8;
  int local_4;
  
  iVar2 = param_2 - param_1;
  iVar1 = -(iVar2 >> 0x1f);
  do {
    iVar2 = iVar2 / 0xc;
    if (iVar2 < 0x21) {
LAB_000a00a6:
      if (1 < iVar2) {
        iVar1 = FUN_000a0640(param_1,param_2,param_4);
      }
      return iVar1;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (1 < (param_2 - param_1) / 0xc) {
          FUN_000a07f0(param_1,param_4,0,0);
        }
        iVar1 = FUN_000a05a0(param_4);
        return iVar1;
      }
      goto LAB_000a00a6;
    }
    FUN_000a0110(&local_8,param_1,param_2,param_4);
    iVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((local_8 - param_1) / 0xc < (param_2 - local_4) / 0xc) {
      FUN_0009ffd0(param_1,local_8,param_3,param_4);
      param_1 = iVar1;
    }
    else {
      FUN_0009ffd0(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar2 = param_2 - param_1;
    iVar1 = iVar2 * 0x2aaaaaab;
  } while( true );
}
