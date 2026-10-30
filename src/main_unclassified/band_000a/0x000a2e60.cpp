/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DCE3870CF36CA4CB888ECB641AF7A0D44E4C643CA8DF66DC7274881A94E92371
 * Entry: 0x000a2e60, Ghidra index: 1936, label: FUN_000a2e60
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
extern uint32_t PTR_FUN_003a0a40;
extern uint32_t PTR_FUN_003a1c18;
void FUN_000a2e60(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = PTR_FUN_003a0a40;
  piVar1 = (int *)unaff_ESI[4];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    unaff_ESI[4] = 0;
  }
  iVar2 = unaff_ESI[2];
  *unaff_ESI = &PTR_FUN_003a1c18;
  if (iVar2 != 0) {
    FUN_0001fe00(iVar2,0xc,*(undefined4 *)(iVar2 + -4),FUN_0008f670);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar2 + -4);
  }
  unaff_ESI[2] = 0;
  return;
}
