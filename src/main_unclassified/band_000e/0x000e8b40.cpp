/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F92EDEABCEEB784AF53EEA4216FC0CBF3E0FD82AE516FCD0A63075D0033BCE24
 * Entry: 0x000e8b40, Ghidra index: 2877, label: FUN_000e8b40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000e8b40(int param_1,int param_2,int param_3,undefined4 param_4)

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
LAB_000e8c16:
      if (1 < iVar2) {
        iVar1 = FUN_000e91e0(param_1,param_2,param_4);
      }
      return iVar1;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (1 < (param_2 - param_1) / 0xc) {
          FUN_000e9390(param_1,param_4,0,0);
        }
        iVar1 = FUN_000e9140(param_4);
        return iVar1;
      }
      goto LAB_000e8c16;
    }
    FUN_000e8c80(&local_8,param_1,param_2,param_4);
    iVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((local_8 - param_1) / 0xc < (param_2 - local_4) / 0xc) {
      FUN_000e8b40(param_1,local_8,param_3,param_4);
      param_1 = iVar1;
    }
    else {
      FUN_000e8b40(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar2 = param_2 - param_1;
    iVar1 = iVar2 * 0x2aaaaaab;
  } while( true );
}
