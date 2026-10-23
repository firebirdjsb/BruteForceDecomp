/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9321FBA8EFDDB0663E11C87DF8C1893F437312BF56BAC122D4F9BA184D029B36
 * Entry: 0x002c16a0, Ghidra index: 10033, label: FUN_002c16a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00443de8;
extern uint32_t _DAT_00000000;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_002c16a0(void)

{
  uint uVar1;
  int iVar2;
  int *unaff_ESI;
  
  iVar2 = *(int *)(*(int *)(unaff_ESI[10] + 0x14) + 0x120);
  if (unaff_ESI[0x1c] == iVar2) {
    return 4;
  }
  unaff_ESI[0x1c] = iVar2;
  iVar2 = (*(code *)(&DAT_00443de8)
                    [(int)*(short *)(((unaff_ESI[5] ^ 0x100U) >> 8 & 3) * 0x1c + 0x32 +
                                    (int)unaff_ESI) +
                     *(short *)(((uint)unaff_ESI[5] >> 8 & 3) * 0x1c + 0x32 + (int)unaff_ESI) * 4])
                    (&stack0xfffff7e4);
  while( true ) {
    if (iVar2 == 1) {
      unaff_ESI[5] = unaff_ESI[5] & 0xffff3fff;
      return 1;
    }
    unaff_ESI[5] = unaff_ESI[5] & 0xffff7fffU | 0x4000;
    if (iVar2 == 2) break;
    if (iVar2 == 3) {
      FUN_002c1650();
      uVar1 = unaff_ESI[5];
      if (((uVar1 & 0x3c0000) != 0x100000) &&
         (((uVar1 & 0x3000) != 0x1000 || ((uVar1 & 0xc00) == 0)))) {
        iVar2 = FUN_002c1510();
        if (iVar2 == 1) {
          unaff_ESI[5] = unaff_ESI[5] & 0xffff3fff;
        }
        else if (iVar2 == 3) {
          FUN_002c1650();
        }
      }
      break;
    }
    _DAT_00000000 = 0;
    iVar2 = (*(code *)(&DAT_00443de8)
                      [(int)*(short *)(((unaff_ESI[5] ^ 0x100U) >> 8 & 3) * 0x1c + 0x32 +
                                      (int)unaff_ESI) +
                       *(short *)(((uint)unaff_ESI[5] >> 8 & 3) * 0x1c + 0x32 + (int)unaff_ESI) * 4]
            )(&stack0xfffff7e4);
  }
  if (((unaff_ESI[5] & 0x3000U) != 0x1000) && ((unaff_ESI[5] & 0x3c0000U) != 0x100000)) {
    (**(code **)(*unaff_ESI + 0x14))();
  }
  return iVar2;
}
