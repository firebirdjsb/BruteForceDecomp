/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 37F61700200BE10449DEB63CD786F19214095D1ACCDC1F6EF25D2D3AAF191D2E
 * Entry: 0x0034a4e2, Ghidra index: 12932, label: FUN_0034a4e2
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_external_import_addresses_x86.h"
void FUN_0034a4e2(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  int in_ECX;
  int iVar4;
  
  KeRaiseIrqlToDpcLevel();
  *(undefined4 *)(in_ECX + 0xbc8) = *(undefined4 *)KeTickCount_exref;
  if ((param_3 == 0) ||
     (iVar1 = ObReferenceObjectByHandle(param_3,ExEventObjectType_exref,&param_3), iVar4 = param_3,
     iVar1 != 0)) {
    iVar4 = 0;
  }
  *(int *)(in_ECX + 0xaec) = iVar4;
  if (iVar4 != 0) {
    if (param_1 == 0) {
      *(undefined4 *)(in_ECX + 0xae4) = 6;
    }
    else {
      pbVar2 = (byte *)FUN_00348472(param_1);
      *(byte **)(in_ECX + 0xae8) = pbVar2;
      if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 4) != 0)) {
        if (param_2 != (undefined4 *)0x0) {
          for (puVar3 = (undefined4 *)(in_ECX + 0xaf0); puVar3 < (undefined4 *)(in_ECX + 0xbb0U);
              puVar3 = puVar3 + 0xc) {
            *puVar3 = *param_2;
            puVar3[1] = param_2[1];
            param_2 = param_2 + 2;
          }
        }
        *(undefined4 *)(in_ECX + 0xae4) = 2;
        FUN_0034a3bd(*(undefined4 *)(in_ECX + 0xae8));
        goto LAB_0034a5bb;
      }
      *(undefined4 *)(in_ECX + 0xae8) = 0;
      *(undefined4 *)(in_ECX + 0xae4) = 1;
    }
    KeSetEvent(iVar4,1,0);
  }
LAB_0034a5bb:
  KfLowerIrql();
  return;
}
