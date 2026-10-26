/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A9BB04FF684DF913B8D6F81E92E4D06B88773586B58567CF41746BE7570BEA45
 * Entry: 0x00052120, Ghidra index: 753, label: FUN_00052120
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE: sub esp,0x28; four x87 m32fp reads at [esp+0x2c]; ret 4.
 * One caller stack float recovered; EBX, EDI, ESI, virtual ABI unverified. */
uint FUN_00052120(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *unaff_EBX;
  int *unaff_ESI;
  int *unaff_EDI;
  ushort uVar5;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 local_28 [8];
  float fStack_20;
  float guest_first_x;
  float guest_first_y;
  float guest_second_x;
  float guest_second_y;
  undefined1 local_18 [20];
  float fStack_14;
  
  puStack_30 = local_28;
  puStack_2c = local_18;
  (**(code **)(*unaff_ESI + 0x20))();
  (**(code **)(*unaff_ESI + 0x20))();
  iVar4 = (**(code **)(*unaff_EBX + 0x40))();
  /* FLD [ESP+0x14] reads a 32-bit float from the first output region. */
  memcpy(&guest_first_y, local_18 + 4, sizeof guest_first_y);
  memcpy(&guest_first_x, local_28, sizeof guest_first_x);
  fVar1 = guest_first_y + *(float *)(iVar4 + 0x28);
  fVar2 = (fVar1 - guest_first_x) - param_1;
  fVar1 = fVar1 + guest_first_x + param_1;
  iVar4 = (**(code **)(*unaff_EDI + 0x40))();
  /* FLD [ESP+0x20] and FLD [ESP+0x04]. Original indirect-call
   * output ABI is not yet represented by these unverified C call stubs. */
  memcpy(&guest_second_y, local_18 + 16, sizeof guest_second_y);
  memcpy(&guest_second_x, local_28 + 4, sizeof guest_second_x);
  fStack_20 = guest_second_y + *(float *)(iVar4 + 0x28);
  fVar3 = guest_second_x + fStack_20 + param_1;
  uVar5 = (ushort)(fVar3 < fVar2) << 8 | (ushort)(isnan(fVar3) || isnan(fVar2)) << 10 |
          (ushort)(fVar3 == fVar2) << 0xe;
  if (fVar3 >= fVar2) {
    fStack_14 = (fStack_20 - guest_second_x) - param_1;
    uVar5 = (ushort)(fVar1 < fStack_14) << 8 | (ushort)(isnan(fVar1) || isnan(fStack_14)) << 10 |
            (ushort)(fVar1 == fStack_14) << 0xe;
    if (fVar1 >= fStack_14) {
      return CONCAT31((uint3)(byte)(uVar5 >> 8),1);
    }
  }
  return (uint)uVar5;
}
