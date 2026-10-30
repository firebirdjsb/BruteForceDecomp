/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 43756B010696131D2C005056DF4968EF0158F4EBA7FB65980D5A09E26A73CF7F
 * Entry: 0x000bd8c0, Ghidra index: 2312, label: FUN_000bd8c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_0008f6e0(std::uint32_t guest_edx);
extern void FUN_000c5040(void);
extern void FUN_001e7880(void);

extern uint32_t DAT_00469948;
extern uint32_t PTR_FUN_0039f7f0;
extern uint32_t PTR_LAB_0039f7dc;
void FUN_000bd8c0(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_ECX;
  
  piVar2 = (int *)in_ECX[0x38];
  *in_ECX = &PTR_FUN_0039f7f0;
  in_ECX[0xb] = &PTR_LAB_0039f7dc;
  if (piVar2 == (int *)0x0) {
    if (in_ECX[0x33] != 0) {
      FUN_0008f6e0();
    }
    FUN_000c5040();
    return;
  }
  iVar3 = *piVar2;
  if ((0 < iVar3) && (iVar3 < 9)) {
    piVar1 = (int *)(DAT_00469948 + 0x34 + iVar3 * 4);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_001e7880();
    }
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(piVar2);
}
