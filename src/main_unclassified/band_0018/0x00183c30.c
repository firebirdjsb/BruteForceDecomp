/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D8ADC084C7F8E3271A27549AFD46EAB439A4BF0A3716F4D877A347E8A30168A5
 * Entry: 0x00183c30, Ghidra index: 5210, label: FUN_00183c30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00183c30(uint param_1)

{
  uint in_EAX;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *unaff_ESI;
  uint uVar4;
  
  uVar3 = in_EAX & 0xffffff00;
  if ((param_1 != 0) && (unaff_ESI != (undefined4 *)0x0)) {
    *unaff_ESI = 0;
    unaff_ESI[1] = 0;
    unaff_ESI[2] = 0;
    unaff_ESI[3] = 0;
    *(undefined2 *)(unaff_ESI + 4) = 0;
    uVar3 = param_1 >> 2 & 7;
    uVar4 = param_1 >> 5 & 0x3ffffff;
    *(short *)((int)unaff_ESI + 2) = (short)uVar3;
    unaff_ESI[1] = uVar4;
    if (((byte)param_1 & 3) == 1) {
      iVar1 = uVar3 * 0x24;
      *(short *)(unaff_ESI + 3) = (short)iVar1;
      unaff_ESI[2] = (uVar4 >> 6) * iVar1;
      *(undefined2 *)unaff_ESI = 0x69;
      *(undefined2 *)((int)unaff_ESI + 0x12) = 0x40;
      *(undefined2 *)(unaff_ESI + 4) = 2;
      *(undefined2 *)((int)unaff_ESI + 0xe) = 4;
      return CONCAT31((int3)((uint)iVar1 >> 8),1);
    }
    iVar2 = (-(uint)((param_1 & 0x80000000) != 0) & 8) + 8;
    iVar1 = (int)(iVar2 * uVar3) >> 3;
    *(short *)(unaff_ESI + 3) = (short)iVar1;
    iVar1 = iVar1 * uVar4;
    unaff_ESI[2] = iVar1;
    *(undefined2 *)unaff_ESI = 1;
    *(short *)((int)unaff_ESI + 0xe) = (short)iVar2;
    uVar3 = CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  return uVar3;
}
