/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4CAA0103EA3AB77C4DC0092D627A336C4A53AB5CC93D57FDA752550BA23AD476
 * Entry: 0x00296e00, Ghidra index: 9338, label: FUN_00296e00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_lua_error____500s_00404380[];
void FUN_00296e00(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_260 [604];
  
  FUN_00289810();
  iVar1 = FUN_00289e20();
  if ((iVar1 == -4) || (iVar1 == -5)) {
    iVar1 = FUN_00289e20();
    if ((iVar1 != -2) && (iVar1 != -1)) {
      FUN_00295240();
    }
    uVar2 = FUN_00289a40();
    FUN_002eaa86(local_260,s_lua_error____500s_00404380,uVar2);
    FUN_00289bc0(local_260);
    FUN_00289680();
  }
  return;
}
