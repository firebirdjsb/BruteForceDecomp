/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 63B6C494221906EF84D23F4B57A1ED8D40E496C205A19ECA0AA72353377880FC
 * Entry: 0x00165b40, Ghidra index: 4706, label: FUN_00165b40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00165b40(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int local_8;
  int local_4;
  
  iVar2 = param_2 - param_1;
  iVar1 = -(iVar2 >> 0x1f);
  do {
    iVar2 = iVar2 / 0x520;
    if (iVar2 < 0x21) {
LAB_00165c1a:
      if (1 < iVar2) {
        iVar1 = FUN_00166100(param_2,param_4);
      }
      return iVar1;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (1 < (param_2 - param_1) / 0x520) {
          FUN_00166230(param_1,param_4,0,0);
        }
        iVar1 = FUN_00166030(param_1,param_4);
        return iVar1;
      }
      goto LAB_00165c1a;
    }
    FUN_00165c80(&local_8,param_1,param_2,param_4);
    iVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((local_8 - param_1) / 0x520 < (param_2 - local_4) / 0x520) {
      FUN_00165b40(param_1,local_8,param_3,param_4);
      param_1 = iVar1;
    }
    else {
      FUN_00165b40(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar2 = param_2 - param_1;
    iVar1 = iVar2 * 0x63e7063f;
  } while( true );
}
