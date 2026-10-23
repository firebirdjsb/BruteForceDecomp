/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 36839E6355E2A252326DADEB3252B7CF604B688233D989DF88D5EC38DEAD6AD9
 * Entry: 0x0008fb40, Ghidra index: 1758, label: FUN_0008fb40
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
extern uint32_t PTR_FUN_003a1c18;
extern uint32_t PTR_FUN_003a1d58;
void FUN_0008fb40(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_003a1d58;
  (**(code **)(*DAT_00443308 + 0x48))(DAT_00443308);
  iVar1 = in_ECX[2];
  if (iVar1 != 0) {
    FUN_0001fe00(iVar1,0xc,*(undefined4 *)(iVar1 + -4),FUN_0008f670);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar1 + -4);
  }
  *in_ECX = &PTR_FUN_003a1c18;
  in_ECX[2] = 0;
  return;
}
