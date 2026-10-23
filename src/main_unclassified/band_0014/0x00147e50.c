/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5E8F6004DF845CA71AE1BEE3625DE0B5AF154C9CE990835ABA847C1E87D845D7
 * Entry: 0x00147e50, Ghidra index: 4246, label: FUN_00147e50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00147e50(float param_1)

{
  int iVar1;
  float fVar2;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 8);
  if ((0.0 < *(float *)(iVar1 + 0x218)) && ((*(byte *)(iVar1 + 0x224) & 2) != 0)) {
    *(undefined4 *)(unaff_ESI + 0x14) = 0x3f800000;
    return;
  }
  if (0.0 < *(float *)(unaff_ESI + 0x14)) {
    fVar2 = *(float *)(unaff_ESI + 0x14) - param_1 * *(float *)(unaff_ESI + 0x10);
    *(float *)(unaff_ESI + 0x14) = fVar2;
    if (!isnan(fVar2) && fVar2 < 0.0 != (fVar2 == 0.0)) {
      if ((*(byte *)(unaff_ESI + 0xc) & 1) != 0) {
        FUN_000cdbc0(iVar1);
        *(byte *)(unaff_ESI + 0xc) = *(byte *)(unaff_ESI + 0xc) & 0xfe;
      }
      *(undefined4 *)(unaff_ESI + 0x14) = 0;
    }
  }
  return;
}
