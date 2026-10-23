/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CB4830B3F5D9DC68B119B4963A3B8EE40802FDC61F0665BD043A5C073C29F0F8
 * Entry: 0x0034e109, Ghidra index: 13016, label: FUN_0034e109
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0034e109(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 local_10c [64];
  int *local_c;
  int local_8;
  
  local_10c[0]._0_1_ = 0;
  iVar2 = FUN_0034db96(param_1);
  if (iVar2 == 0) {
    uVar3 = 0x271e;
  }
  else {
    uVar4 = FUN_0034dcf3();
    puVar5 = (undefined4 *)FUN_0034c68a(uVar4 + 0x48,0x7454454e);
    if (puVar5 == (undefined4 *)0x0) {
      uVar3 = 0x2747;
    }
    else {
      if (param_2 != 0) {
        iVar2 = ObReferenceObjectByHandle(param_2,ExEventObjectType_exref,&local_c);
        uVar6 = ~-(uint)(iVar2 != 0) & (uint)local_c;
        puVar5[7] = uVar6;
        if (uVar6 == 0) {
          FUN_0034c6bc(puVar5);
          return 0x277b;
        }
      }
      puVar7 = local_10c;
      puVar8 = puVar5 + 0x12;
      for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      local_c = (int *)(local_8 + 0x8b0);
      iVar2 = *local_c;
      *local_c = *local_c + 1;
      puVar5[5] = puVar5 + 0x12;
      *(ushort *)((int)puVar5 + 0x1a) = CONCAT11((char)(iVar2 + 1),(char)((uint)(iVar2 + 1) >> 8));
      puVar5[1] = 0;
      puVar5[3] = 0xffffffff;
      puVar5[4] = &LAB_0034e0e1;
      *(undefined1 *)((int)puVar5 + 0x19) = 1;
      puVar5[8] = 0x2734;
      *param_3 = puVar5 + 8;
      uVar1 = KeRaiseIrqlToDpcLevel();
      local_c = (int *)CONCAT31(local_c._1_3_,uVar1);
      *puVar5 = *(undefined4 *)(local_8 + 0xa88);
      *(undefined4 **)(local_8 + 0xa88) = puVar5;
      FUN_0034ddfb(puVar5);
      KfLowerIrql();
      uVar3 = 0;
    }
  }
  return uVar3;
}
