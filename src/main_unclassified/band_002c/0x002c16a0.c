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
  /* Xbox 0x002C16AF SUB ESP,0x81C reserves a caller-owned
   * command packet. 0x002C16C8/0x002C16D0/0x002C16D4/0x002C16DF
   * write only the original four DWORD fields at offsets 0x14,
   * 0, 0x818 and 4; the remaining bytes are not initialized
   * and must not be silently zeroed. 0x002C171C LEA [ESP]
   * passes the packet start to the indirect dispatch.
   * ECX/ESI register calling conventions and guest pointer
   * translation remain ABI_UNVERIFIED for native targets. */
  uint32_t guest_command_words[0x207];
  _Static_assert(sizeof(guest_command_words)==0x81c,
                 "original 0x81c-byte Xbox command packet");
  
  iVar2 = *(int *)(*(int *)(unaff_ESI[10] + 0x14) + 0x120);
  if (unaff_ESI[0x1c] == iVar2) {
    return 4;
  }
  unaff_ESI[0x1c] = iVar2;
  guest_command_words[0] = (uint32_t)(uintptr_t)unaff_ESI;
  guest_command_words[1] = 0;
  guest_command_words[5] = 0;
  guest_command_words[0x206] = 0;
  iVar2 = (*(code *)(&DAT_00443de8)
                    [(int)*(short *)(((unaff_ESI[5] ^ 0x100U) >> 8 & 3) * 0x1c + 0x32 +
                                    (int)unaff_ESI) +
                     *(short *)(((uint)unaff_ESI[5] >> 8 & 3) * 0x1c + 0x32 + (int)unaff_ESI) * 4])
                    (guest_command_words);
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
            )(guest_command_words);
  }
  if (((unaff_ESI[5] & 0x3000U) != 0x1000) && ((unaff_ESI[5] & 0x3c0000U) != 0x100000)) {
    (**(code **)(*unaff_ESI + 0x14))();
  }
  return iVar2;
}
