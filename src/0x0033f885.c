/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 51BCDAB6C436169F04F070C41264A64BB183FAD40B7AAAB3C2A040F21D9BD183
 * Entry: 0x0033f885, Ghidra index: 12652, label: FUN_0033f885
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0033f885(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 local_18 [16];
  undefined4 local_8;
  
  local_8 = 0;
  puVar4 = *(undefined4 **)(param_1 + 8);
  *(undefined4 **)(param_1 + 8) = puVar4 + 4;
  if (*(undefined4 **)(param_1 + 4) < puVar4 + 4) {
    *(undefined4 **)(param_1 + 8) = puVar4;
    puVar4 = (undefined4 *)0x0;
  }
  if (puVar4 == (undefined4 *)0x0) {
    local_8 = 0xc000009a;
  }
  else {
    iVar5 = *(int *)(param_1 + 8);
    *(undefined4 **)(param_1 + 8) = (undefined4 *)(iVar5 + 0x94U);
    if (*(undefined4 **)(param_1 + 4) < (undefined4 *)(iVar5 + 0x94U)) {
      *(int *)(param_1 + 8) = iVar5;
      iVar5 = 0;
    }
    if (iVar5 == 0) {
      local_8 = 0xc000009a;
    }
    else {
      *(undefined4 *)(param_1 + 0x18 + *(int *)(param_1 + 0x14) * 4) = *(undefined4 *)(param_1 + 8);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      FUN_0033f64f(param_1,param_2,param_3,local_18);
      iVar1 = FUN_0033df31(iVar5 + 0x14,0x80,"Xbox Version=%s Title=0x%08X TitleVersion=%d",
                           "1.00.5233.5",*(undefined4 *)(*(int *)(param_1 + 0x38) + 4),
                           *(undefined4 *)(*(int *)(param_1 + 0x38) + 8));
      if (iVar1 + 1 < 0) {
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
        puVar4 = *(undefined4 **)(param_1 + 0x18 + *(int *)(param_1 + 0x14) * 4);
        uVar2 = *(int *)(param_1 + 8) - (int)puVar4;
        *(undefined4 **)(param_1 + 8) = puVar4;
        for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        local_8 = 0xc000009a;
        for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined1 *)puVar4 = 0;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        }
      }
      else {
        XcHMAC(local_18,0x10,iVar5 + 0x14,iVar1 + 1,0,0,iVar5);
        puVar4[3] = iVar5;
        puVar4[2] = iVar1 + 0x15;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
        puVar6 = *(undefined4 **)(param_1 + 0x18 + *(int *)(param_1 + 0x14) * 4);
        uVar2 = *(int *)(param_1 + 8) - (int)puVar6;
        *(undefined4 **)(param_1 + 8) = puVar6;
        for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined1 *)puVar6 = 0;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        puVar4[1] = 0xce;
        *puVar4 = *param_4;
        *param_4 = puVar4;
      }
    }
  }
  return local_8;
}
