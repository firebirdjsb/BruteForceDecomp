/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 79BC452B063F101D5A3A53A121DD69F1C8DB2AC0755C1D002DFDB9A03ECD2F4F
 * Entry: 0x00054920, Ghidra index: 797, label: FUN_00054920
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003c05fc;
uint FUN_00054920(void)

{
  float fVar1;
  int in_EAX;
  uint uVar2;
  
  uVar2 = *(uint *)(in_EAX + 4);
  if ((uVar2 != 0) && (*(int *)(*(int *)(uVar2 + 0xc) + 4) == 3)) {
    fVar1 = *(float *)(uVar2 + 0x7dc);
    uVar2 = CONCAT31((int3)(CONCAT22((short)(uVar2 >> 0x10),
                                     (ushort)(fVar1 < DAT_003c05fc) << 8 |
                                     (ushort)(isnan(fVar1) || isnan(DAT_003c05fc)) << 10 |
                                     (ushort)(fVar1 == DAT_003c05fc) << 0xe) >> 8),1);
    if (fVar1 < DAT_003c05fc != (fVar1 == DAT_003c05fc)) {
      return uVar2;
    }
  }
  return uVar2 & 0xffffff00;
}
