/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A9BB04FF684DF913B8D6F81E92E4D06B88773586B58567CF41746BE7570BEA45
 * Entry: 0x00052120, Ghidra index: 753, label: FUN_00052120
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE: ESP frame is 0x28 bytes; input float at [ESP+0x2c]; RET 4.
 * Vtable +0x20: ECX=ESI; stack args (object, low XYZ, high XYZ).
 * Both calls require callee cleanup of 12 stack bytes. The 0x28-byte
 * frame preserves overlapping low outputs at +0 and +4 and disjoint
 * high outputs at +0x10 and +0x1c. Independent caller 0x52816 reads
 * three high-output floats, supporting >=12 readable bytes per output.
 * Guest register provenance, indirect callee identity, complete output
 * write sizes, x87 rounding, and native guest-memory ABI are unverified. */
#if defined(__i386__) && (defined(__GNUC__) || defined(__clang__))
#define BF_52120_THISCALL __attribute__((thiscall))
#else
#define BF_52120_THISCALL /* syntax-only on non-x86 targets */
#endif
typedef void (BF_52120_THISCALL *bf_52120_bounds_call)(
    int *guest_this, int *object, undefined1 *low_xyz, undefined1 *high_xyz);
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
  bf_52120_bounds_call get_bounds;
  undefined1 guest_frame[0x28];
  float fStack_20;
  float guest_first_x;
  float guest_first_y;
  float guest_second_x;
  float guest_second_y;
  float fStack_14;
  
  /* 0x52123..0x52134: this=ESI in ECX; push high output address,
   * then low output address, then EBX (right-to-left C argument order). */
  get_bounds = (bf_52120_bounds_call)*(code **)(*unaff_ESI + 0x20);
  get_bounds(unaff_ESI, unaff_EBX, guest_frame + 0x00, guest_frame + 0x10);
  /* 0x52135..0x52146: reload vtable, this=ESI, object=EDI.
   * Second low output starts four bytes after first low output. */
  get_bounds = (bf_52120_bounds_call)*(code **)(*unaff_ESI + 0x20);
  get_bounds(unaff_ESI, unaff_EDI, guest_frame + 0x04, guest_frame + 0x1c);
  iVar4 = (**(code **)(*unaff_EBX + 0x40))();
  /* FLD [ESP+0x14] reads a 32-bit float from the first output region. */
  memcpy(&guest_first_y, guest_frame + 0x14, sizeof guest_first_y);
  memcpy(&guest_first_x, guest_frame + 0x00, sizeof guest_first_x);
  fVar1 = guest_first_y + *(float *)(iVar4 + 0x28);
  fVar2 = (fVar1 - guest_first_x) - param_1;
  fVar1 = fVar1 + guest_first_x + param_1;
  iVar4 = (**(code **)(*unaff_EDI + 0x40))();
  /* FLD [ESP+0x20] and FLD [ESP+0x04] consume the second outputs. */
  memcpy(&guest_second_y, guest_frame + 0x20, sizeof guest_second_y);
  memcpy(&guest_second_x, guest_frame + 0x04, sizeof guest_second_x);
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
