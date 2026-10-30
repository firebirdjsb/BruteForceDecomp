/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 742F5788C6CEB41541BB3E45193AEA0F7DD19B64DD261819BF43E8BB26BD39B7
 * Entry: 0x001f7a30, Ghidra index: 7052, label: FUN_001f7a30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001f7a30(int param_1,int param_2,int param_3,undefined4 param_4)

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
LAB_001f7b06:
      if (1 < iVar2) {
        iVar1 = FUN_001f8000(param_1,param_2,param_4);
      }
      return iVar1;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (1 < (param_2 - param_1) / 0xc) {
          FUN_001f8160(param_4,0,0);
        }
        iVar1 = FUN_001f7f60(param_4);
        return iVar1;
      }
      goto LAB_001f7b06;
    }
    FUN_001f7c20(&local_8,param_1,param_2,param_4);
    iVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((local_8 - param_1) / 0xc < (param_2 - local_4) / 0xc) {
      FUN_001f7a30(param_1,local_8,param_3,param_4);
      param_1 = iVar1;
    }
    else {
      FUN_001f7a30(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar2 = param_2 - param_1;
    iVar1 = iVar2 * 0x2aaaaaab;
  } while( true );
}
