/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E75AC64D390319F516FADB269CB9361760E36738EE65C7F7A02DA4B5176DAA08
 * Entry: 0x002fe36e, Ghidra index: 11019, label: ?_GetRangeOfTrysToCheck@@YAPBU_s_TryBlockMapEntry@@PBU_s_FuncInfo@@HHPAI1@Z
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    ?_GetRangeOfTrysToCheck@@YAPBU_s_TryBlockMapEntry@@PBU_s_FuncInfo@@HHPAI1@Z
   
   Library: Visual Studio 2003 Release */

int __GetRangeOfTrysToCheck__YAPBU_s_TryBlockMapEntry__PBU_s_FuncInfo__HHPAI1_Z
              (int param_1,int param_2,int param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 0x10);
  uVar5 = uVar6;
  uVar4 = uVar6;
  while (uVar3 = uVar5, -1 < param_2) {
    if (uVar6 == 0xffffffff) {
      __inconsistency__YAXXZ();
    }
    uVar6 = uVar6 - 1;
    iVar1 = iVar2 + uVar6 * 0x14;
    if (((*(int *)(iVar1 + 4) < param_3) && (param_3 <= *(int *)(iVar1 + 8))) ||
       (uVar5 = uVar3, uVar6 == 0xffffffff)) {
      param_2 = param_2 + -1;
      uVar5 = uVar6;
      uVar4 = uVar3;
    }
  }
  uVar6 = uVar6 + 1;
  *param_4 = uVar6;
  *param_5 = uVar4;
  if ((*(uint *)(param_1 + 0xc) < uVar4) || (uVar4 < uVar6)) {
    __inconsistency__YAXXZ();
  }
  return iVar2 + uVar6 * 0x14;
}
