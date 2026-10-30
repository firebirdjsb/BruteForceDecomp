/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 24F5DC494C2D256E1F4388A90AF32574A432E071CA89E82C80371B98726E1E1E
 * Entry: 0x0034a806, Ghidra index: 12936, label: FUN_0034a806
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Address-tied callee source: FUN_0034a458; callback ABI remains ABI_UNVERIFIED.
 * Provisional C11 declaration only; not a verified link/runtime contract. */
extern void FUN_0034a458(int param_1);
byte * FUN_0034a806(void)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  bool bVar6;
  
  uVar2 = (uint)*(byte *)(in_ECX + 0xe);
  pbVar3 = *(byte **)(in_ECX + 0xac4);
  bVar6 = uVar2 == 0;
  uVar4 = uVar2;
  pbVar5 = pbVar3;
  if (!bVar6) {
    do {
      if (pbVar5[2] == 0) break;
      pbVar5 = pbVar5 + 0x130;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    bVar6 = uVar4 == 0;
  }
  if (bVar6) {
    pbVar5 = (byte *)0x0;
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      if (((pbVar3[2] == 1) && ((*pbVar3 & 3) != 0)) &&
         ((pbVar5 == (byte *)0x0 || (*(uint *)(pbVar3 + 0x18) < *(uint *)(pbVar5 + 0x18))))) {
        pbVar5 = pbVar3;
      }
      pbVar3 = pbVar3 + 0x130;
    }
    if (pbVar5 == (byte *)0x0) {
      return (byte *)0x0;
    }
    FUN_00349730(pbVar5,0);
  }
  pbVar5[0x34] = 0;
  pbVar5[0x35] = 0;
  pbVar5[0x36] = 0;
  pbVar5[0x37] = 0;
  pbVar5[0x3c] = 0xff;
  pbVar5[0x3d] = 0xff;
  pbVar5[0x3e] = 0xff;
  pbVar5[0x3f] = 0xff;
  *(code **)(pbVar5 + 0x40) = FUN_0034a458;
  *(short *)(in_ECX + 0xace) = *(short *)(in_ECX + 0xace) + 1;
  if (*(short *)(in_ECX + 0xace) == 0) {
    *(undefined2 *)(in_ECX + 0xace) = 1;
  }
  iVar1 = *(int *)(in_ECX + 0xac4);
  uVar2 = (uint)*(ushort *)(in_ECX + 0xace) << 8;
  pbVar5[2] = 2;
  *(uint *)(pbVar5 + 4) =
       (uVar2 & 0xff0000) >> 8 |
       (uVar2 & 0xff00 | (((int)pbVar5 - iVar1) / 0x130 & 0xffU) << 0x10) << 8;
  FUN_003484af(pbVar5);
  return pbVar5;
}
