/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ECAA3E1ECE0C7E72666E6B1F3D0E115DED9DF92400046B48E1356A922CB2748E
 * Entry: 0x00166ad0, Ghidra index: 4724, label: FUN_00166ad0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0041f4f4;
extern uint32_t DAT_0041f4fc;
extern uint32_t DAT_0041f500;
uint FUN_00166ad0(void)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  uint in_EDX;
  
  iVar4 = 0;
  do {
    uVar3 = 1 << ((byte)iVar4 & 0x1f);
    if ((uVar3 & (DAT_0041f4f4 | DAT_0041f4fc)) != 0) {
      if ((in_EDX & uVar3) == 0) {
        iVar1 = iVar4 + (uVar3 | in_EDX) * 4;
        fVar2 = *(float *)(&DAT_0041f500 + iVar1 * 4);
        uVar3 = CONCAT22((short)((uint)iVar1 >> 0x10),
                         (ushort)(fVar2 < 0.0) << 8 | (ushort)isnan(fVar2) << 10 |
                         (ushort)(fVar2 == 0.0) << 0xe);
        if (fVar2 >= 0.0 && (fVar2 == 0.0) == 0) {
          return uVar3;
        }
      }
      else {
        iVar1 = iVar4 + in_EDX * 4;
        fVar2 = *(float *)(&DAT_0041f500 + iVar1 * 4);
        uVar3 = CONCAT22((short)((uint)iVar1 >> 0x10),
                         (ushort)(fVar2 < 0.0) << 8 | (ushort)isnan(fVar2) << 10 |
                         (ushort)(fVar2 == 0.0) << 0xe);
        if (fVar2 < 0.0 != (fVar2 == 0.0)) {
          return uVar3;
        }
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  return CONCAT31((int3)(uVar3 >> 8),1);
}
