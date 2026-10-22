/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F5A878DF7EF9CAE70422F7330E48AA05C09E6F6DE3E1DD0E60942D21C49C2DD3
 * Entry: 0x002e19f0, Ghidra index: 10373, label: FUN_002e19f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002e19f0(void)

{
  undefined1 uVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  bool bVar8;
  undefined1 local_32;
  undefined1 local_31;
  int local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  undefined1 local_20 [16];
  undefined1 local_10 [16];
  
  local_2c = 0;
  iVar2 = FUN_002e3010(local_10,&local_2c);
  if ((-1 < iVar2) && (iVar2 != 1)) {
    FUN_002e3540(local_10);
    iVar2 = FUN_002e0890(local_20,&local_24);
    if (-1 < iVar2) {
      iVar4 = local_24;
      if (local_24 == 0) {
        uVar1 = *(undefined1 *)(in_ECX + 0xc2);
        *(undefined1 *)(in_ECX + 0xc2) = 0;
        iVar2 = FUN_002e14b0(local_20,&local_24);
        if (iVar2 < 0) {
          return iVar2;
        }
        *(undefined1 *)(in_ECX + 0xc2) = uVar1;
        iVar4 = local_24;
      }
      local_30 = 0;
      switch(*(undefined4 *)(iVar4 + 0x38)) {
      case 0:
        FUN_002e2fb0(local_2c);
        local_32 = 0;
        do {
          local_30 = 1;
          iVar2 = FUN_002e3260(&local_32,&local_30);
          if (iVar2 < 0) break;
        } while (local_30 == 0);
        FUN_002e2fd0();
        FUN_002e3460();
        return iVar2;
      case 1:
      case 3:
        FUN_002e33a0(local_2c);
        local_32 = 1;
        do {
          local_30 = 1;
          iVar2 = FUN_002e3260(&local_32,&local_30);
          if (iVar2 < 0) break;
        } while (local_30 == 0);
        FUN_002e0b90(iVar4,0);
        return 0;
      case 2:
        if (*(char *)(in_ECX + 0x9d) == '\0') {
          do {
            iVar2 = FUN_0034506e(in_ECX + 0x9e);
            *(bool *)(in_ECX + 0x9d) = iVar2 != 0;
          } while (iVar2 == 0);
        }
        iVar3 = 6;
        bVar7 = false;
        iVar2 = 0;
        bVar8 = true;
        pbVar5 = (byte *)(in_ECX + 0xa8);
        pbVar6 = (byte *)(iVar4 + 10);
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar7 = *pbVar5 < *pbVar6;
          bVar8 = *pbVar5 == *pbVar6;
          pbVar5 = pbVar5 + 1;
          pbVar6 = pbVar6 + 1;
        } while (bVar8);
        if (!bVar8) {
          iVar2 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        }
        if (iVar2 < 0) {
          FUN_002e3360(1);
          do {
            local_28 = 1;
            FUN_002e3180(&local_31,&local_28);
          } while (local_28 != 0);
          FUN_002e2fd0();
          FUN_002e33a0(local_2c);
          *(undefined1 *)(iVar4 + 0x3d) = 0;
          local_32 = 1;
          do {
            local_30 = 1;
            iVar2 = FUN_002e3260(&local_32,&local_30);
            if (iVar2 < 0) break;
          } while (local_30 == 0);
          FUN_002e0b90(iVar4,0);
          return 0;
        }
        FUN_002e2fb0(local_2c);
        local_32 = 0;
        do {
          local_30 = 1;
          iVar2 = FUN_002e3260(&local_32,&local_30);
          if (iVar2 < 0) break;
        } while (local_30 == 0);
        FUN_002e3360(1);
        do {
          local_28 = 1;
          FUN_002e3180(&local_31,&local_28);
          if (iVar2 < 0) break;
        } while (local_28 != 0);
        FUN_002e2fd0();
        FUN_002e3460();
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}
