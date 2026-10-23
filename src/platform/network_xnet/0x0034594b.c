/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F05A556A993550FA16472FE411E4AE74E0EBD9260DE6D2497D8B6F534B1A913D
 * Entry: 0x0034594b, Ghidra index: 12818, label: FUN_0034594b
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0034594b(uint *param_1,uint *param_2,int param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  uint local_14;
  int local_10;
  uint *local_c;
  uint *local_8;
  
  if (param_1 == (uint *)0x0) {
    local_14 = 0;
  }
  else {
    local_14 = *param_1 & 0xffff;
  }
  local_10 = 0;
  if (local_14 != 0) {
    puVar4 = param_2 + param_3 * 5 + 2;
    local_c = param_1;
    do {
      local_c = local_c + 1;
      uVar1 = *local_c;
      puVar4[-1] = (uint)param_1;
      *puVar4 = param_4;
      iVar3 = 0;
      puVar4[-2] = uVar1;
      if (0 < param_3) {
        local_8 = param_2;
        do {
          if (*local_8 == uVar1) break;
          local_8 = local_8 + 5;
          iVar3 = iVar3 + 1;
        } while (iVar3 < param_3);
      }
      if (iVar3 == param_3) {
        puVar4[2] = param_4;
        uVar1 = FUN_003454a2(uVar1);
        puVar4[1] = uVar1;
        if (uVar1 == 0) {
          uVar2 = XAPILIB__GetLastError();
          return uVar2;
        }
      }
      else {
        param_2[iVar3 * 5 + 4] = param_2[iVar3 * 5 + 4] | param_4;
        puVar4[2] = 0;
        puVar4[1] = param_2[iVar3 * 5 + 3];
      }
      local_10 = local_10 + 1;
      puVar4 = puVar4 + 5;
      param_3 = param_3 + 1;
    } while (local_10 < (int)local_14);
  }
  return 0;
}
