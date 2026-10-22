/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8F3C5D6E319159A13D19B3B077DF1DD2FEDD9A266AA1C082A49885499C79173B
 * Entry: 0x0033621e, Ghidra index: 12450, label: FUN_0033621e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0033621e(uint param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 local_8c [29];
  undefined4 *local_18;
  uint local_14;
  undefined4 *local_10;
  uint local_c;
  
  if ((((param_1 != 0) && (local_10 = (undefined4 *)(param_1 + 0x30), local_10 != (undefined4 *)0x0)
       ) && (uVar1 = *(ushort *)(param_1 + 0xc), uVar1 != 0)) && (uVar1 < 0x65)) {
    uVar6 = (uint)uVar1;
    param_1 = uVar6 - 1;
    local_14 = uVar6;
    if (param_1 != 0) {
      puVar3 = local_10 + param_1 * 0x1d;
      do {
        iVar2 = FUN_00336122(puVar3 + -0x1d,puVar3);
        if (0 < iVar2) {
          puVar4 = puVar3 + -0x1d;
          puVar5 = local_8c;
          for (iVar2 = 0x1d; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
          puVar4 = puVar3;
          puVar5 = puVar3 + -0x1d;
          for (iVar2 = 0x1d; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
          puVar4 = local_8c;
          puVar5 = puVar3;
          for (iVar2 = 0x1d; uVar6 = local_14, iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
        }
        puVar3 = puVar3 + -0x1d;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
    param_1 = 2;
    puVar3 = local_10;
    if (2 < uVar6) {
      do {
        puVar4 = puVar3 + 0x1d;
        local_c = param_1;
        puVar5 = puVar3 + 0x3a;
        puVar7 = local_8c;
        local_18 = puVar4;
        for (iVar2 = 0x1d; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        iVar2 = FUN_00336122(local_8c,puVar4);
        if (iVar2 < 0) {
          puVar5 = puVar4;
          puVar3 = puVar3 + 0x3a;
          do {
            puVar7 = puVar5;
            local_c = local_c - 1;
            puVar4 = puVar7;
            for (iVar2 = 0x1d; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar3 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar3 = puVar3 + 1;
            }
            iVar2 = FUN_00336122(local_8c,puVar7 + -0x1d);
            puVar4 = local_18;
            puVar5 = puVar7 + -0x1d;
            puVar3 = puVar7;
          } while (iVar2 < 0);
        }
        param_1 = param_1 + 1;
        puVar3 = local_8c;
        puVar5 = local_10 + local_c * 0x1d;
        for (iVar2 = 0x1d; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar5 = puVar5 + 1;
        }
        puVar3 = puVar4;
      } while (param_1 < local_14);
    }
  }
  return 0;
}
