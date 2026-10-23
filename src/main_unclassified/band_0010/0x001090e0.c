/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D6585F7E4D2523B818B5067E481DBBA37EEF427CA931F3594A8D27912CE07B9A
 * Entry: 0x001090e0, Ghidra index: 3398, label: FUN_001090e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d170;
void FUN_001090e0(float param_1)

{
  byte bVar1;
  int *piVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  int unaff_ESI;
  
  if (*(float *)(unaff_ESI + 8) < 2.0 != (*(float *)(unaff_ESI + 8) == 2.0)) {
    iVar5 = 0;
    *(float *)(unaff_ESI + 8) = param_1 + *(float *)(unaff_ESI + 8);
    piVar4 = (int *)(unaff_ESI + 0x2c);
    do {
      piVar2 = (int *)*piVar4;
      if (((piVar2 != (int *)0x0) &&
          (fVar3 = (float)(iVar5 + 1) * 0.5,
          fVar3 < *(float *)(unaff_ESI + 8) != (fVar3 == *(float *)(unaff_ESI + 8)))) &&
         (bVar1 = *(byte *)(piVar2 + 10), (bVar1 & 4) == 0)) {
        if ((bVar1 & 4) == 0) {
          *(byte *)(piVar2 + 10) = bVar1 | 4;
          (**(code **)(*piVar2 + 0x28))();
        }
        FUN_0017c020(&DAT_0046d170);
      }
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar5 < 4);
    if (2.0 <= *(float *)(unaff_ESI + 8)) {
      *(undefined4 *)(unaff_ESI + 8) = 0x40800000;
    }
  }
  if (*(float *)(unaff_ESI + 0xc) < 10.0 != (*(float *)(unaff_ESI + 0xc) == 10.0)) {
    *(float *)(unaff_ESI + 0xc) = param_1 + *(float *)(unaff_ESI + 0xc);
    FUN_00107f60(unaff_ESI,*(undefined4 *)(unaff_ESI + 0x3c));
    FUN_001081f0(*(undefined4 *)(unaff_ESI + 0x40));
    FUN_001082a0(unaff_ESI,*(undefined4 *)(unaff_ESI + 0x44));
    if (10.0 <= *(float *)(unaff_ESI + 0xc)) {
      fVar3 = *(float *)(unaff_ESI + 0xc) * 10.0;
      *(float *)(unaff_ESI + 0xc) = fVar3 + fVar3;
    }
  }
  return;
}
