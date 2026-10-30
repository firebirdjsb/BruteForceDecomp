/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6A780AFCB28CD570680B75555FC0A684A780220580BABEB63AB9D701413C12EB
 * Entry: 0x00092c50, Ghidra index: 1799, label: FUN_00092c50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Callee source declares FUN_0008f670(void), but uses incoming ECX implicitly.
 * Callback/register ABI is ABI_UNVERIFIED; declaration enables C11 inspection only. */
extern void FUN_0008f670(void);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00443308;
extern uint32_t PTR_FUN_003a15e0;
extern uint32_t PTR_FUN_003a17ac;
extern uint32_t PTR_FUN_003a17d8;
extern uint32_t PTR_FUN_003a1c18;
void FUN_00092c50(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = &PTR_FUN_003a17d8;
  unaff_ESI[3] = &PTR_FUN_003a17ac;
  unaff_ESI[4] = &PTR_FUN_003a15e0;
  (**(code **)(*DAT_00443308 + 0x48))(DAT_00443308);
  iVar1 = unaff_ESI[2];
  if (iVar1 != 0) {
    FUN_0001fe00(iVar1,0xc,*(undefined4 *)(iVar1 + -4),FUN_0008f670);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar1 + -4);
  }
  unaff_ESI[2] = 0;
  piVar2 = (int *)unaff_ESI[0x27];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    unaff_ESI[0x27] = 0;
  }
  piVar2 = (int *)unaff_ESI[0x26];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    unaff_ESI[0x26] = 0;
  }
  piVar2 = (int *)unaff_ESI[6];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    unaff_ESI[6] = 0;
  }
  iVar1 = unaff_ESI[2];
  *unaff_ESI = &PTR_FUN_003a1c18;
  if (iVar1 != 0) {
    FUN_0001fe00(iVar1,0xc,*(undefined4 *)(iVar1 + -4),FUN_0008f670);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar1 + -4);
  }
  unaff_ESI[2] = 0;
  return;
}
