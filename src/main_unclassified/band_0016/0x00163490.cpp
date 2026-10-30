/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CA1BF15C1C98263FBA84165A00230A64BE88BF95F53313CACA4548688452F5D0
 * Entry: 0x00163490, Ghidra index: 4668, label: FUN_00163490
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00163490(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int local_8;
  int local_4;
  
  iVar2 = param_2 - param_1;
  iVar1 = -(iVar2 >> 0x1f);
  do {
    iVar2 = iVar2 / 0x14;
    if (iVar2 < 0x21) {
LAB_0016356a:
      if (1 < iVar2) {
        iVar1 = FUN_001643b0(param_2,param_4);
      }
      return iVar1;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (1 < (param_2 - param_1) / 0x14) {
          FUN_001649b0(param_1,param_4,0,0);
        }
        iVar1 = FUN_00164320(param_1,param_4);
        return iVar1;
      }
      goto LAB_0016356a;
    }
    FUN_00163eb0(&local_8,param_1,param_2,param_4);
    iVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((local_8 - param_1) / 0x14 < (param_2 - local_4) / 0x14) {
      FUN_00163490(param_1,local_8,param_3,param_4);
      param_1 = iVar1;
    }
    else {
      FUN_00163490(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar2 = param_2 - param_1;
    iVar1 = iVar2 * 0x66666667;
  } while( true );
}
