/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F018E18B4433B35383D6491CAE09EF2FA054572A04F503FC36FE3A00E966AB73
 * Entry: 0x002c4c50, Ghidra index: 10060, label: FUN_002c4c50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
byte * FUN_002c4c50(void)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  int unaff_EBX;
  byte *pbVar5;
  uint uVar6;
  undefined4 *puVar7;
  byte *local_4;
  
  iVar2 = *(ushort *)(unaff_EBX + 0x26) - 1;
  while (-1 < iVar2) {
    iVar2 = iVar2 + -1;
    *(undefined4 *)(*(int *)(*(int *)(unaff_EBX + 0x28) + 4 + iVar2 * 4) + 0x1c8) = 0;
  }
  uVar6 = (uint)*(ushort *)(unaff_EBX + 0x3e);
  while (uVar6 = uVar6 - 1, -1 < (int)uVar6) {
    iVar2 = *(int *)(*(int *)(unaff_EBX + 0x40) + uVar6 * 4);
    pbVar5 = *(byte **)(iVar2 + 0x2c);
    pbVar1 = *(byte **)(iVar2 + 0x30);
    if (((*pbVar5 & 0xc) == 0) && ((*pbVar1 & 0xc) == 0)) {
      do {
        pbVar4 = pbVar5;
        pbVar5 = *(byte **)(pbVar4 + 0x1c8);
      } while (*(byte **)(pbVar4 + 0x1c8) != (byte *)0x0);
      do {
        pbVar5 = pbVar1;
        pbVar1 = *(byte **)(pbVar5 + 0x1c8);
      } while (*(byte **)(pbVar5 + 0x1c8) != (byte *)0x0);
      if (pbVar4 != pbVar5) {
        *(byte **)(pbVar5 + 0x1c8) = pbVar4;
      }
    }
  }
  uVar6 = (uint)*(ushort *)(unaff_EBX + 0x26);
  pbVar5 = (byte *)0x0;
  iVar2 = uVar6 - 1;
  local_4 = (byte *)0x0;
  if (-1 < iVar2) {
    puVar7 = (undefined4 *)(*(int *)(unaff_EBX + 0x28) + iVar2 * 4);
    uVar3 = uVar6;
    do {
      pbVar1 = (byte *)*puVar7;
      if ((*(byte *)*puVar7 & 0xc) == 0) {
        do {
          pbVar5 = pbVar1;
          pbVar1 = *(byte **)(pbVar5 + 0x1c8);
        } while (*(byte **)(pbVar5 + 0x1c8) != (byte *)0x0);
      }
      puVar7 = puVar7 + -1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (-1 < iVar2) {
    puVar7 = (undefined4 *)(*(int *)(unaff_EBX + 0x28) + iVar2 * 4);
    do {
      pbVar1 = (byte *)*puVar7;
      if ((*(byte *)*puVar7 & 0xc) == 0) {
        do {
          pbVar4 = pbVar1;
          pbVar1 = *(byte **)(pbVar4 + 0x1c8);
        } while (*(byte **)(pbVar4 + 0x1c8) != (byte *)0x0);
        if (pbVar4 != pbVar5) {
          local_4 = pbVar4;
        }
      }
      puVar7 = puVar7 + -1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return local_4;
}
