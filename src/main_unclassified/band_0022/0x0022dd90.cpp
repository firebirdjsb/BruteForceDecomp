/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F5ECCBA652D6093DEDEE52C4669AB9DD48C81F19BC2EC727A188125415A1AD25
 * Entry: 0x0022dd90, Ghidra index: 7718, label: FUN_0022dd90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d100;
void FUN_0022dd90(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int local_c;
  undefined1 local_8 [4];
  byte local_4;
  
  piVar2 = (int *)FUN_00076310();
  local_c = *piVar2;
  if (local_c != 0) {
    cVar1 = FUN_0022dcc0();
    if (cVar1 != '\0') {
      FUN_0017c020(&DAT_0046d100);
      return;
    }
    local_4 = local_4 & 0xfc;
    iVar3 = FUN_0017beb0(&local_c);
    if (iVar3 != 0) {
      FUN_00178e50(local_8);
    }
  }
  return;
}
