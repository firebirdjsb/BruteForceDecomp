/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 31D7EB5D8EB3B19441E7907191C4C2A105F0B2E992A8036BA0E1AEF37278645C
 * Entry: 0x00087dd0, Ghidra index: 1630, label: FUN_00087dd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
extern uint32_t PTR_LAB_003a21bc;
extern uint32_t PTR_LAB_003a21dc;
undefined4 * FUN_00087dd0(void)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 *puVar5;
  int *in_ECX;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  uint *puVar9;
  int unaff_EDI;
  int local_c;
  
  iVar8 = *in_ECX;
  if (iVar8 == 0x120785ef) {
    iVar8 = FUN_002ea01d(0x8c);
    if (iVar8 != 0) {
      puVar5 = (undefined4 *)FUN_00088f70();
      return puVar5;
    }
  }
  else if (iVar8 == 0x17506391) {
    iVar8 = FUN_002ea01d(0x28);
    if (iVar8 != 0) {
      puVar5 = (undefined4 *)FUN_00089a50();
      return puVar5;
    }
  }
  else if ((iVar8 == -0x104e72d8) &&
          (puVar5 = (undefined4 *)FUN_002ea01d(0xb8), puVar5 != (undefined4 *)0x0)) {
    *puVar5 = &PTR_LAB_003a21bc;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[1] = unaff_EDI;
    puVar5[2] = *(undefined4 *)(unaff_EDI + 0xbec);
    *puVar5 = &PTR_LAB_003a21dc;
    puVar5[0x12] = 0;
    puVar5[0x13] = 0;
    puVar6 = puVar5 + 0x16;
    iVar8 = 8;
    do {
      *puVar6 = 0;
      puVar6 = puVar6 + 2;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    puVar5[3] = 0xf2b3b861;
    puVar5[4] = 0x7cc7be5;
    puVar5[5] = 0x62bd076;
    puVar6 = puVar5 + 6;
    *(byte *)(puVar5 + 0x29) = *(byte *)(puVar5 + 0x29) & 0xf8;
    puVar5[0x25] = 0;
    puVar5[0x2b] = 999;
    puVar5[0x2a] = 0xff;
    puVar5[0x14] = 0;
    puVar9 = puVar5 + 0x16;
    puVar7 = puVar5 + 8;
    iVar8 = 2;
    do {
      puVar6[0x26] = 0;
      *puVar6 = 0;
      puVar6[10] = 0;
      local_c = 4;
      do {
        *puVar7 = 0;
        uVar1 = *puVar9;
        if (uVar1 != 0) {
          if ((uVar1 & 1) == 0) {
            *puVar9 = 0;
            uVar2 = *(uint *)(&DAT_00414da0 + (uVar1 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
            puVar4 = (uint *)(&DAT_00414da0 + (uVar1 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
            while (uVar2 != 0) {
              puVar3 = (uint *)*puVar4;
              if (puVar3 == puVar9 + -1) {
                *puVar4 = *(uint *)*puVar4;
                break;
              }
              puVar4 = puVar3;
              uVar2 = *puVar3;
            }
          }
          *puVar9 = 0;
        }
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 2;
        local_c = local_c + -1;
      } while (local_c != 0);
      puVar6 = puVar6 + 1;
      iVar8 = iVar8 + -1;
      if (iVar8 == 0) {
        puVar5[0x28] = 0;
        puVar5[0x26] = 0;
        puVar5[0x27] = 0;
        *(byte *)(puVar5 + 0x29) = *(byte *)(puVar5 + 0x29) & 0xf7;
        return puVar5;
      }
    } while( true );
  }
  return (undefined4 *)0x0;
}
