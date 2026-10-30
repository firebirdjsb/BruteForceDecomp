/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0EA31BC2DDD0ACFD796D5DDC0405D0A020CA12059A5A0EEF3E99CB8F3FD22A8D
 * Entry: 0x000a8be0, Ghidra index: 2016, label: FUN_000a8be0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Callee source declares FUN_0008f670(void), but uses incoming ECX implicitly.
 * Callback/register ABI is ABI_UNVERIFIED; declaration enables C11 inspection only. */
extern void FUN_0001fe00(undefined4 param_1,undefined4 param_2,int param_3,code *param_4);

extern void FUN_0008f670(void);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00443308;
extern uint32_t PTR_FUN_003a03a0;
extern uint32_t PTR_FUN_003a1c18;
void FUN_000a8be0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *unaff_ESI;
  
  iVar1 = unaff_ESI[2];
  *unaff_ESI = PTR_FUN_003a03a0;
  if (iVar1 != 0) {
    FUN_0001fe00(iVar1,0xc,*(undefined4 *)(iVar1 + -4),FUN_0008f670);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar1 + -4);
  }
  unaff_ESI[2] = 0;
  (**(code **)(*DAT_00443308 + 0x48))(DAT_00443308);
  piVar2 = (int *)unaff_ESI[4];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    unaff_ESI[4] = 0;
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
