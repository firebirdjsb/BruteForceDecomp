/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CD2FEF9C6A4BC8105666E5A65A2C8C0C754B5532266D47B8988806E6E8E28019
 * Entry: 0x0014f3a0, Ghidra index: 4394, label: FUN_0014f3a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_003c0284;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0014f3a0(undefined4 param_1)

{
  float fVar1;
  byte bVar2;
  char cVar3;
  int *unaff_ESI;
  float10 fVar4;
  
  bVar2 = *(byte *)(unaff_ESI + 0x25);
  *(byte *)(unaff_ESI + 0x25) = bVar2 & 0xf7 | 0x10;
  if (*(int *)(unaff_ESI[3] + 0x2c) == 1) {
    if ((bVar2 & 0x40) != 0) {
      if ((bVar2 & 0x20) == 0) {
        fVar1 = _DAT_003c0284 * (float)unaff_ESI[0x23];
      }
      else {
        fVar1 = (float)unaff_ESI[0x23];
      }
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        fVar4 = (float10)FUN_0009ea50(unaff_ESI);
        if ((fVar4 != (float10)0.0) &&
           ((((float)unaff_ESI[0x3c] != 0.0 || ((float)unaff_ESI[0x3d] != 0.0)) ||
            ((float)unaff_ESI[0x3e] != 0.0)))) {
          cVar3 = (**(code **)(*unaff_ESI + 0x118))(param_1);
          *(byte *)(unaff_ESI + 0x25) =
               *(byte *)(unaff_ESI + 0x25) ^ (cVar3 << 4 ^ *(byte *)(unaff_ESI + 0x25)) & 0x10;
          goto LAB_0014f463;
        }
      }
    }
    *(byte *)(unaff_ESI + 0x25) = *(byte *)(unaff_ESI + 0x25) | 8;
  }
LAB_0014f463:
  if (((*(byte *)(unaff_ESI + 0x25) & 8) != 0) && ((*(byte *)(unaff_ESI + 0x25) & 0x10) == 0)) {
    return 1;
  }
  return 0;
}
