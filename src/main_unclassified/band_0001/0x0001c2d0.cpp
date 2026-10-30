/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9FFEA5F074B30629FAD2209F3FAB3FBD0E32FEC5B3E950C24778941A4794C619
 * Entry: 0x0001c2d0, Ghidra index: 104, label: FUN_0001c2d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint FUN_0008f690(void);
extern void FUN_0001fe80(void);
extern void FUN_0008f6e0(std::uint32_t guest_edx);

extern uint32_t DAT_00414da0;
extern uint32_t PTR_FUN_003a4f64;
extern uint32_t PTR_FUN_003a4f68;
void FUN_0001c2d0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int unaff_EBX;
  
  iVar2 = *(int *)(unaff_EBX + 0x10);
  do {
    if (iVar2 == 0) {
      if (*(int *)(unaff_EBX + 8) != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(*(undefined4 *)
                            (*(int *)(unaff_EBX + 4) + -4 + *(int *)(unaff_EBX + 8) * 4));
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(undefined4 *)(unaff_EBX + 4));
    }
    if (*(int *)(unaff_EBX + 0x10) != 0) {
      uVar5 = *(int *)(unaff_EBX + 0x10) + -1 + *(int *)(unaff_EBX + 0xc);
      if (*(uint *)(unaff_EBX + 8) <= uVar5) {
        uVar5 = uVar5 - *(uint *)(unaff_EBX + 8);
      }
      puVar3 = *(undefined4 **)(*(int *)(unaff_EBX + 4) + uVar5 * 4);
      if ((puVar3[0x16] != 0) && ((puVar3[0x16] & 1) == 0)) {
        iVar6 = FUN_0008f690();
        puVar3[0x16] = 0;
        iVar2 = *(int *)(&DAT_00414da0 + iVar6 * 4);
        piVar1 = (int *)(&DAT_00414da0 + iVar6 * 4);
        while (iVar2 != 0) {
          piVar4 = (int *)*piVar1;
          if (piVar4 == puVar3 + 0x15) {
            *piVar1 = *(int *)*piVar1;
            break;
          }
          piVar1 = piVar4;
          iVar2 = *piVar4;
        }
      }
      puVar3[7] = &PTR_FUN_003a4f64;
      FUN_0001fe80();
      FUN_0001fe80();
      *puVar3 = &PTR_FUN_003a4f68;
      if (puVar3[5] != 0) {
        FUN_0008f6e0();
      }
      piVar1 = (int *)(unaff_EBX + 0x10);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *(undefined4 *)(unaff_EBX + 0xc) = 0;
      }
    }
    iVar2 = *(int *)(unaff_EBX + 0x10);
  } while( true );
}
