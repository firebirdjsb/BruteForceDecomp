/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 80021913B3427B80B8BDD82CFC26076E0D0C931862E7D74939AFD2247BE50A1B
 * Entry: 0x0029cc40, Ghidra index: 9451, label: FUN_0029cc40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s__s_is_not_a_Lua_binary_file_00403d48[];
undefined4 FUN_0029cc40(void)

{
  uint uVar1;
  undefined4 uVar2;
  int *unaff_ESI;
  
  *unaff_ESI = *unaff_ESI + -1;
  if (*unaff_ESI < 0) {
    uVar1 = (*(code *)unaff_ESI[2])();
  }
  else {
    uVar1 = (uint)*(byte *)unaff_ESI[1];
    unaff_ESI[1] = (int)((byte *)unaff_ESI[1] + 1);
  }
  if (uVar1 == 0x1b) {
    FUN_0029cb20();
    uVar2 = FUN_0029ca40();
    return uVar2;
  }
  if (uVar1 != 0xffffffff) {
    FUN_00295370(s__s_is_not_a_Lua_binary_file_00403d48,unaff_ESI[4]);
  }
  return 0;
}
