/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3786F6BBF63A789FF670D6C327661D5BB2F7506E7A7B3A5936EEA4FF64A1FE26
 * Entry: 0x00058740, Ghidra index: 873, label: FUN_00058740
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00058740(void)

{
  float fVar1;
  undefined2 extraout_var;
  undefined4 *unaff_EDI;
  /* Original entry-ESP-relative locations, after SUB ESP,0x24 and PUSH EBX:
   * [ESP+0x04] = entry ESP-0x24: normalised difference from FUN_0004c480.
   * [ESP+0x10] = entry ESP-0x18: normalised copy from FUN_0004c530.
   * [ESP+0x1c] = entry ESP-0x0c: first virtual method's 12-byte output.
   * The regions are DISJOINT. Each helper writes exactly three F32 words;
   * its implicit EAX/ESI register inputs still require ABI reconstruction. */
  float relative_direction[3];
  float reference_direction[3];
  undefined1 local_c[12];

  (**(code **)(*(int *)(unaff_EDI[2] + 0x1b4) + 0x34))(local_c);
  /* 0x58759 passes reference_direction; EAX points at local_c on entry. */
  FUN_0004c530(reference_direction);
  (**(code **)(*(int *)unaff_EDI[2] + 0x40))();
  /* 0x58772 passes relative_direction, not local_c. Original 0x4c480
   * writes [ECX+0], [ECX+4], [ECX+8] and normalises X/Z. */
  FUN_0004c480(relative_direction);
  /* 0x5877F: relative[2]*reference[2]; 0x5878A: relative[0]*reference[0].
   * Both helpers set Y=0. No incoming guest EBX float is used. */
  fVar1 = relative_direction[2] * reference_direction[2] +
          relative_direction[0] * reference_direction[0];
  if (fVar1 < 0.25) {
    unaff_EDI[0xd] = 0x3fc00000;
    unaff_EDI[0xb] = 0x3fc00000;
    *(byte *)(unaff_EDI + 0xc) = *(byte *)(unaff_EDI + 0xc) & 0xf9 | 1;
    *unaff_EDI = 2;
    return 0x3fc00001;
  }
  return CONCAT22(extraout_var,
                  (ushort)(fVar1 < 0.25) << 8 | (ushort)isnan(fVar1) << 10 |
                  (ushort)(fVar1 == 0.25) << 0xe);
}
