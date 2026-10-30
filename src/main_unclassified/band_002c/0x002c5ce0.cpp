/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 91019CCEF872DCE9626C125B7BD42500EF16D03A39C0A23BCEAD857EB0280DE0
 * Entry: 0x002c5ce0, Ghidra index: 10072, label: FUN_002c5ce0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c5ce0(void)

{
  byte *pbVar1;
  int extraout_EDX;
  int unaff_EDI;
  float10 fVar2;
  float local_8 [2];
  
  FUN_002d4e50(local_8);
  if ((*(int *)((int)local_8[0] + 8) != 0) || (*(int *)((int)local_8[1] + 8) != 0)) {
    *(undefined1 *)(unaff_EDI + 0x34) = 1;
  }
  pbVar1 = *(byte **)(*(int *)(unaff_EDI + 0x10) + 0x90);
  if ((*pbVar1 & 0xc) == 0) {
    if ((**(byte **)(*(int *)(unaff_EDI + 0x24) + 0x90) & 0xc) == 0) {
      do {
        fVar2 = (float10)FUN_002ba320();
        *(float *)((int)local_8 + extraout_EDX) = (float)fVar2;
      } while (extraout_EDX + 4 < 8);
      *(float *)(unaff_EDI + 0x30) = 1.0 / ((local_8[1] * local_8[0]) / (local_8[1] + local_8[0]));
      return;
    }
    fVar2 = (float10)FUN_002ba320(pbVar1);
    *(float *)(unaff_EDI + 0x30) = (float)((float10)1.0 / fVar2);
    return;
  }
  fVar2 = (float10)FUN_002ba320(pbVar1);
  *(float *)(unaff_EDI + 0x30) = (float)((float10)1.0 / fVar2);
  return;
}
