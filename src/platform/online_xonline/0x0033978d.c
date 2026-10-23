/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 45E3B562CC5594DEB91A51AFBD69E8EA06D2C3684DC01CC1D8C1A5BC16DA299A
 * Entry: 0x0033978d, Ghidra index: 12491, label: FUN_0033978d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_0033978d(undefined4 param_1,int param_2,byte *param_3)

{
  undefined4 uVar1;
  byte *pbVar2;
  int iVar3;
  bool bVar4;
  
  uVar1 = param_1;
  iVar3 = param_2;
  if (param_2 == 0) {
    iVar3 = 0x10;
  }
  iVar3 = FUN_003449ff(param_1,iVar3,&param_1);
  if ((iVar3 == 0) ||
     (iVar3 = FUN_003449ff(uVar1,0x80000000,&param_2), pbVar2 = param_3, iVar3 == 0)) {
    bVar4 = false;
  }
  else {
    iVar3 = FUN_00344812(uVar1,1,param_3[2]);
    if (((iVar3 == 0) || (iVar3 = FUN_00344a56(uVar1,param_2), iVar3 == 0)) ||
       (((*pbVar2 & 0x80) != 0 && (iVar3 = FUN_00338c50(pbVar2 + 4), iVar3 == 0)))) {
      bVar4 = false;
    }
    else {
      iVar3 = FUN_00344a56(uVar1,param_1);
      bVar4 = iVar3 != 0;
    }
  }
  return bVar4;
}
