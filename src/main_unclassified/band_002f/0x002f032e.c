/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7CFFF4A51CBF35382301290463697B441DAABEDEBD24F53612C4252096317ACA
 * Entry: 0x002f032e, Ghidra index: 10738, label: FUN_002f032e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_003b7232;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined5 FUN_002f032e(void)

{
  undefined4 uVar1;
  undefined4 in_EAX;
  undefined1 extraout_DL;
  undefined1 in_DL;
  int unaff_EBP;
  float10 in_ST0;
  float10 fVar2;
  float10 fVar3;
  undefined4 unaff_retaddr;
  
  fVar2 = ABS(in_ST0);
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)(_DAT_003b7232 < fVar2) << 8 | (ushort)(isnan(_DAT_003b7232) || isnan(fVar2)) << 10 |
       (ushort)(_DAT_003b7232 == fVar2) << 0xe;
  if ((*(byte *)(unaff_EBP + -0x9f) & 0x41) == 0) {
    fVar3 = ROUND(in_ST0);
    fVar2 = (float10)0;
    *(ushort *)(unaff_EBP + -0xa0) =
         (ushort)(fVar3 < fVar2) << 8 | (ushort)(isnan(fVar3) || isnan(fVar2)) << 10 |
         (ushort)(fVar3 == fVar2) << 0xe;
    fVar3 = in_ST0 - fVar3;
    fVar2 = (float10)0;
    *(ushort *)(unaff_EBP + -0xa0) =
         (ushort)(fVar3 < fVar2) << 8 | (ushort)(isnan(fVar3) || isnan(fVar2)) << 10 |
         (ushort)(fVar3 == fVar2) << 0xe;
    f2xm1(ABS(fVar3));
    return CONCAT14(*(undefined1 *)(unaff_EBP + -0x9f),in_EAX);
  }
  fVar2 = (float10)0;
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)(in_ST0 < fVar2) << 8 | (ushort)(isnan(in_ST0) || isnan(fVar2)) << 10 |
       (ushort)(in_ST0 == fVar2) << 0xe;
  if ((*(byte *)(unaff_EBP + -0x9f) & 1) == 0) {
    return CONCAT14(in_DL,unaff_retaddr);
  }
  *(undefined1 *)(unaff_EBP + -0x90) = 4;
  uVar1 = FUN_002f04de();
  return CONCAT14(extraout_DL,uVar1);
}
