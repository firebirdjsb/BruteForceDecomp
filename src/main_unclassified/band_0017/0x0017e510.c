/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 67ED35BC6CBABC973ACE56C077FF5791831DCF7C8C8A5EFA2B1A3AABA7A467E1
 * Entry: 0x0017e510, Ghidra index: 5103, label: FUN_0017e510
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_x86_float_lane.h"
undefined1 FUN_0017e510(float *param_1)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  float *unaff_EBX;
  int iVar6;
  /* 0x17e524 overwrites entry ESP+4 with this binary32 word after the
   * input pointer has been saved in EBP. FCOM at 0x17e573 reads that
   * four-byte float; FSTP at 0x17e57e replaces it. It is no longer a
   * pointer. The draft's x87 intermediate precision/order and comparison
   * edge cases remain unverified; this repair only recovers the slot. */
  float minimum;
  
  pfVar4 = param_1;
  pfVar1 = param_1 + 1;
  iVar6 = 0;
  iVar5 = 0;
  minimum = bf_x86_word_to_f32(UINT32_C(0x4e6e6b28));
  pfVar3 = pfVar4;
  if (*(byte *)pfVar1 != 0) {
    do {
      fVar2 = pfVar3[0xc] - unaff_EBX[1];
      fVar2 = (pfVar3[0xb] - *unaff_EBX) * (pfVar3[0xb] - *unaff_EBX) +
              fVar2 * fVar2 + (pfVar3[0xd] - unaff_EBX[2]) * (pfVar3[0xd] - unaff_EBX[2]);
      if (fVar2 < minimum) {
        iVar6 = iVar5;
        minimum = fVar2;
      }
      iVar5 = iVar5 + 1;
      pfVar3 = pfVar3 + 0xc;
    } while (iVar5 < (int)(uint)*(byte *)pfVar1);
  }
  return *(undefined1 *)(iVar6 + 200 + (int)pfVar4);
}
