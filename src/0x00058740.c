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
  float unaff_EBX;
  undefined4 *unaff_EDI;
  float fStack_20;
  float afStack_1c [2];
  float fStack_14;
  undefined1 local_c [12];
  
  (**(code **)(*(int *)(unaff_EDI[2] + 0x1b4) + 0x34))(local_c);
  FUN_0004c530(afStack_1c);
  (**(code **)(*(int *)unaff_EDI[2] + 0x40))();
  FUN_0004c480(&stack0xffffffd8);
  fVar1 = unaff_EBX * afStack_1c[0] + fStack_20 * fStack_14;
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
