/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FA849FA6D645B30F36ADB277091E269793CA3D62108F63465432032D8323ECEA
 * Entry: 0x0016b2d0, Ghidra index: 4773, label: FUN_0016b2d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_0016b2d0(void)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int in_EAX;
  undefined4 uVar5;
  int in_ECX;
  float fVar6;
  float fVar7;
  undefined1 local_20 [16];
  undefined1 local_10 [16];
  
  iVar1 = *(int *)(in_EAX + 0x90);
  fVar2 = *(float *)(in_ECX + 4) * 0.5 + *(float *)(iVar1 + 4);
  fVar7 = *(float *)(iVar1 + 300) - *(float *)(in_ECX + 0x30);
  fVar3 = *(float *)(iVar1 + 0x130) - *(float *)(in_ECX + 0x34);
  fVar4 = *(float *)(iVar1 + 0x134) - *(float *)(in_ECX + 0x38);
  fVar6 = fVar3 * fVar3 + fVar4 * fVar4 + fVar7 * fVar7;
  fVar2 = fVar2 * fVar2;
  uVar5 = CONCAT22((short)((uint)local_20 >> 0x10),
                   (ushort)(fVar2 < fVar6) << 8 | (ushort)(isnan(fVar2) || isnan(fVar6)) << 10 |
                   (ushort)(fVar2 == fVar6) << 0xe);
  if (fVar2 < fVar6 == (fVar2 == fVar6)) {
    fVar2 = fVar4 * *(float *)(in_ECX + 0x44) - fVar3 * *(float *)(in_ECX + 0x48);
    fVar4 = fVar7 * *(float *)(in_ECX + 0x48) - fVar4 * *(float *)(in_ECX + 0x40);
    fVar7 = fVar3 * *(float *)(in_ECX + 0x40) - fVar7 * *(float *)(in_ECX + 0x44);
    fVar7 = fVar4 * fVar4 + fVar7 * fVar7 + fVar2 * fVar2;
    fVar2 = *(float *)(iVar1 + 4) * *(float *)(iVar1 + 4);
    uVar5 = CONCAT22((short)((uint)local_10 >> 0x10),
                     (ushort)(fVar7 < fVar2) << 8 | (ushort)(isnan(fVar7) || isnan(fVar2)) << 10 |
                     (ushort)(fVar7 == fVar2) << 0xe);
    if (fVar7 < fVar2) {
      return CONCAT31((int3)((uint)uVar5 >> 8),1);
    }
  }
  return uVar5;
}
