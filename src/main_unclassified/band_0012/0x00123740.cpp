/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B8362BF84A05C4CA94CD9B890BB01045D331A9D614C3EDEED6D46F23C58CDA42
 * Entry: 0x00123740, Ghidra index: 3674, label: FUN_00123740
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003c0600;
byte FUN_00123740(float param_1)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  int unaff_ESI;
  
  bVar2 = 0;
  bVar3 = *(byte *)(unaff_ESI + 0x77c) & 1;
  if ((bVar3 != 0) || ((*(byte *)(unaff_ESI + 0x77c) & 2) != 0)) {
    if (bVar3 != 0) {
      fVar1 = *(float *)(unaff_ESI + 0x774);
      if (isnan(fVar1) || fVar1 < 0.0 == (fVar1 == 0.0)) {
        *(float *)(unaff_ESI + 0x774) = *(float *)(unaff_ESI + 0x774) - param_1;
      }
      else {
        bVar2 = FUN_00123850(unaff_ESI,unaff_ESI + 0x3f8,DAT_003c0600);
        *(undefined4 *)(unaff_ESI + 0x774) = DAT_003c0600;
      }
    }
    if ((*(byte *)(unaff_ESI + 0x77c) & 2) != 0) {
      fVar1 = *(float *)(unaff_ESI + 0x778);
      if (!isnan(fVar1) && fVar1 < 0.0 != (fVar1 == 0.0)) {
        bVar3 = FUN_00123850(unaff_ESI,unaff_ESI + 0x3fc,DAT_003c0600);
        *(undefined4 *)(unaff_ESI + 0x778) = DAT_003c0600;
        return bVar2 | bVar3;
      }
      *(float *)(unaff_ESI + 0x778) = *(float *)(unaff_ESI + 0x778) - param_1;
    }
  }
  return bVar2;
}
