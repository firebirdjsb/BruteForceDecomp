/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FABD24BAD6988C1BB34D665494DF36199BA3C2DA4F7A0A7A6FAA9DCF0626E839
 * Entry: 0x00077cc0, Ghidra index: 1411, label: FUN_00077cc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00396cdc;
extern uint32_t PTR_FUN_003a24e8;
void FUN_00077cc0(void)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *in_ECX;
  
  uVar2 = *(undefined1 *)(in_ECX + 6);
  piVar1 = in_ECX + 5;
  *in_ECX = &PTR_FUN_003a24e8;
  *piVar1 = (int)&PTR_FUN_00396cdc;
  if ((*(char *)(in_ECX + 6) == '\0') && (in_ECX[7] != 0)) {
    iVar3 = (**(code **)(*piVar1 + 0x14))(piVar1,in_ECX[7]);
    if (iVar3 < 0) goto LAB_00077cfa;
  }
  in_ECX[7] = 0;
  *(undefined1 *)(in_ECX + 6) = uVar2;
LAB_00077cfa:
  FUN_00077d50();
  return;
}
