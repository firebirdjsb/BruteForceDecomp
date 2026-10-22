/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 33894DDE8F9E1A7BA28151A9B2136D7243A8A9E429D1BA64116C913FEB1F4A8F
 * Entry: 0x0028a460, Ghidra index: 9160, label: FUN_0028a460
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469888;
extern char s_Lua2C___C2Lua_overflow_00404aec[];
extern char s_stack_size_overflow_00404ad8[];
void FUN_0028a460(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int in_EDX;
  int iVar6;
  
  piVar3 = DAT_00469888;
  iVar5 = *DAT_00469888;
  if (DAT_00469888[2] - iVar5 >> 4 <= in_EDX) {
    iVar2 = DAT_00469888[1];
    iVar1 = (DAT_00469888[2] - iVar2 >> 4) + 0x80 + in_EDX;
    iVar6 = iVar1 * 0x10;
    iVar4 = FUN_00294b90(iVar2,iVar6);
    piVar3[1] = iVar4;
    piVar3[2] = iVar6 + -0x10 + iVar4;
    *piVar3 = (iVar5 - iVar2 >> 4) * 0x10 + iVar4;
    if (5999 < iVar1) {
      iVar5 = FUN_0028a050();
      if (iVar5 == 0) {
        FUN_0028ab50(s_Lua2C___C2Lua_overflow_00404aec);
        return;
      }
      FUN_0028ab50(s_stack_size_overflow_00404ad8);
    }
  }
  return;
}
