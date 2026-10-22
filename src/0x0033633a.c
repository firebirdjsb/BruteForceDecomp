/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8031C59D4A791345BC0368FD87717D49F69CD0B605B0FF8A814C51F7452835EB
 * Entry: 0x0033633a, Ghidra index: 12451, label: FUN_0033633a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0033633a(uint param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_84 [29];
  uint local_10;
  int local_c;
  
  if (param_1 != 0) {
    local_c = param_1 + 0x30;
    if (local_c != 0) {
      uVar3 = (uint)*(ushort *)(param_1 + 0xc);
      local_10 = uVar3;
      if (param_2 < uVar3) {
        puVar1 = (undefined4 *)(param_2 * 0x74 + local_c);
        puVar5 = puVar1;
        puVar4 = local_84;
        for (iVar2 = 0x1d; param_1 = param_2, iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar4 = puVar4 + 1;
        }
        while (param_1 != 0) {
          puVar5 = puVar1 + -0x1d;
          iVar2 = FUN_00336122(local_84,puVar5);
          uVar3 = local_10;
          if (-1 < iVar2) break;
          param_1 = param_1 - 1;
          puVar4 = puVar5;
          puVar6 = puVar1;
          for (iVar2 = 0x1d; puVar1 = puVar5, iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar6 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar6 = puVar6 + 1;
          }
        }
        if (param_1 < uVar3 - 1) {
          puVar1 = (undefined4 *)((param_1 + 1) * 0x74 + local_c);
          do {
            iVar2 = FUN_00336122(local_84,puVar1);
            if (iVar2 < 1) break;
            param_1 = param_1 + 1;
            puVar5 = puVar1;
            puVar4 = puVar1 + -0x1d;
            for (iVar2 = 0x1d; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar4 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar4 = puVar4 + 1;
            }
            puVar1 = puVar1 + 0x1d;
          } while (param_1 < uVar3 - 1);
        }
        puVar1 = local_84;
        puVar5 = (undefined4 *)(param_1 * 0x74 + local_c);
        for (iVar2 = 0x1d; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = *puVar1;
          puVar1 = puVar1 + 1;
          puVar5 = puVar5 + 1;
        }
      }
    }
  }
  return 0;
}
