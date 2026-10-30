/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BB0AEA9D7F97CAA4C90BE5E5A651039FA357CF343E4CE6409C2AF41BE9E3AD73
 * Entry: 0x002ff29c, Ghidra index: 11055, label: FUN_002ff29c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
/* XBE 0x002ff2d4 CALL [0x00414b60]; signature/host width ABI_UNVERIFIED. */
extern code *DAT_00414b60;
undefined4 FUN_002ff29c(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) {
    FUN_002ff1ee();
  }
  if ((DAT_00414b60 != (code *)0x0) && (iVar2 = FUN_002ff3de(DAT_00414b60), iVar2 != 0)) {
    uVar3 = (*DAT_00414b60)(param_1);
    return uVar3;
  }
  return 0;
}
