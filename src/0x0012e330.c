/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1FDA0F21C2DB60AA9175DDCECA1F8628919DD08F44B3E076617D842DF4787ED4
 * Entry: 0x0012e330, Ghidra index: 3811, label: FUN_0012e330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched declaration of FUN_00050b40; callback ABI and behavior remain
 * ABI_UNVERIFIED. This only resolves name lookup in the C11 draft. */
extern void FUN_00050b40(void);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004699dc;
extern uint32_t PTR_FUN_0039db9c;
extern uint32_t PTR_FUN_003bc654;
extern uint32_t PTR_LAB_0039db70;
extern uint32_t PTR_LAB_0039db98;
void FUN_0012e330(void)

{
  int iVar1;
  undefined4 *in_ECX;
  int iVar2;
  undefined1 local_4 [4];
  
  iVar2 = DAT_004699dc;
  *in_ECX = &PTR_FUN_0039db9c;
  in_ECX[6] = &PTR_LAB_0039db98;
  if (0 < iVar2) {
    DAT_004699dc = iVar2 + -1;
  }
  if (in_ECX[200] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[200]);
  }
  iVar2 = in_ECX[0xad];
  in_ECX[0xac] = 0;
  if (iVar2 != 0) {
    FUN_0001fe00(iVar2,0x584,*(undefined4 *)(iVar2 + -4),FUN_00050b40);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar2 + -4);
  }
  iVar2 = in_ECX[0x6b];
  if (iVar2 != 0) {
    FUN_00142d80();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar2);
  }
  iVar2 = in_ECX[0xb3];
  if (iVar2 != 0) {
    FUN_0001fe00(iVar2,0x4c,*(undefined4 *)(iVar2 + -4),FUN_00050b40);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar2 + -4);
  }
  if (in_ECX[0x1c2] != 0) {
    (*(code *)PTR_FUN_003bc654)(*(undefined4 *)(in_ECX[0x1c2] + -4));
    return;
  }
  if (in_ECX[0x1c3] != 0) {
    (*(code *)PTR_FUN_003bc654)(*(undefined4 *)(in_ECX[0x1c3] + -4));
    return;
  }
  iVar2 = in_ECX[0xa0];
  if (iVar2 == 0) {
    in_ECX[0xa0] = 0;
    in_ECX[0xa1] = 0;
    in_ECX[0xa2] = 0;
    in_ECX[0x7d] = &PTR_LAB_0039db70;
    FUN_00135360();
    FUN_00135510(local_4,*(undefined4 *)in_ECX[0x7f],(undefined4 *)in_ECX[0x7f]);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x7f]);
  }
  iVar1 = in_ECX[0xa1];
  for (; iVar2 != iVar1; iVar2 = iVar2 + 4) {
    FUN_000e35e0(0);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(in_ECX[0xa0]);
}
