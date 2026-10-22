/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C3DAFAC78B286FBB99F1505C238A35ED23A4C65A7F911D670226BF680BB496FD
 * Entry: 0x00163350, Ghidra index: 4667, label: FUN_00163350
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00163350(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int local_8;
  int local_4;
  
  iVar2 = param_2 - param_1;
  iVar1 = -(iVar2 >> 0x1f);
  do {
    iVar2 = iVar2 / 0x18;
    if (iVar2 < 0x21) {
LAB_0016342a:
      if (1 < iVar2) {
        iVar1 = FUN_00163e40(param_2,param_4);
      }
      return iVar1;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (1 < (param_2 - param_1) / 0x18) {
          FUN_001647c0(param_1,param_4,0,0);
        }
        iVar1 = FUN_00163da0(param_1,param_4);
        return iVar1;
      }
      goto LAB_0016342a;
    }
    FUN_001638d0(&local_8,param_1,param_2,param_4);
    iVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((local_8 - param_1) / 0x18 < (param_2 - local_4) / 0x18) {
      FUN_00163350(param_1,local_8,param_3,param_4);
      param_1 = iVar1;
    }
    else {
      FUN_00163350(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar2 = param_2 - param_1;
    iVar1 = iVar2 * 0x2aaaaaab;
  } while( true );
}
