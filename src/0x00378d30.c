/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 515AEFEF7840E6C8AE7700555D3A84523123C6AF8930D47EC23DA9D6BC2C6802
 * Entry: 0x00378d30, Ghidra index: 13474, label: FUN_00378d30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00378d30(void)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *unaff_ESI;
  
  iVar5 = *unaff_ESI;
  piVar1 = (int *)(iVar5 + 0x200);
  iVar4 = *piVar1;
  unaff_ESI[0x55] = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  unaff_ESI[0x56] = *(int *)(iVar5 + 0x140);
  *piVar1 = -1;
  uVar6 = *(uint *)(iVar5 + 0x680504) & 0xff;
  bVar2 = *(byte *)(iVar5 + 0x680505);
  uVar3 = *(uint *)(iVar5 + 0x680504);
  unaff_ESI[0x34] = uVar6;
  uVar3 = uVar3 >> 0x10 & 7;
  unaff_ESI[0x35] = (uint)bVar2;
  unaff_ESI[0x36] = 1;
  unaff_ESI[0x37] = uVar3;
  if (uVar6 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (int)(((ulonglong)(unaff_ESI[0x2f] * (uint)bVar2) / (ulonglong)(uint)(1 << (sbyte)uVar3)
                  ) / (ulonglong)uVar6);
  }
  unaff_ESI[0x31] = iVar4;
  uVar6 = *(uint *)(iVar5 + 0x680508) & 0xff;
  bVar2 = *(byte *)(iVar5 + 0x680509);
  uVar3 = *(uint *)(iVar5 + 0x680508) >> 0x10 & 7;
  unaff_ESI[0x38] = uVar6;
  unaff_ESI[0x39] = (uint)bVar2;
  unaff_ESI[0x3a] = 1;
  unaff_ESI[0x3b] = uVar3;
  if (uVar6 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (int)(((ulonglong)(unaff_ESI[0x2f] * (uint)bVar2) / (ulonglong)(uint)(1 << (sbyte)uVar3)
                  ) / (ulonglong)uVar6);
  }
  unaff_ESI[0x32] = iVar4;
  bVar2 = *(byte *)(iVar5 + 0x680501);
  uVar6 = *(uint *)(iVar5 + 0x680500) & 0xff;
  uVar3 = *(uint *)(iVar5 + 0x680500) >> 0x10 & 7;
  unaff_ESI[0x3c] = uVar6;
  unaff_ESI[0x3d] = (uint)bVar2;
  unaff_ESI[0x3e] = 1;
  unaff_ESI[0x3f] = uVar3;
  if (uVar6 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = (int)(((ulonglong)(unaff_ESI[0x2f] * (uint)bVar2) / (ulonglong)(uint)(1 << (sbyte)uVar3)
                  ) / (ulonglong)uVar6);
  }
  unaff_ESI[0x33] = iVar5;
  return;
}
