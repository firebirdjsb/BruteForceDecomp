/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 56B315A260E682B144B202B28090C97AE23B48234A09069D9A3474ED679E89FD
 * Entry: 0x00235b40, Ghidra index: 7819, label: FUN_00235b40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00443310;
void FUN_00235b40(void)

{
  int *piVar1;
  int in_ECX;
  undefined4 *unaff_ESI;
  int local_4;
  
  local_4 = in_ECX;
  if ((unaff_ESI[4] != 0) && (*(int *)(unaff_ESI[4] + 100) != 0)) {
    FUN_00235e40();
  }
  while ((piVar1 = (int *)unaff_ESI[0x13], piVar1 != (int *)0x0 &&
         (unaff_ESI[0x14] - (int)piVar1 >> 2 != 0))) {
    local_4 = *piVar1;
    if (local_4 != 0) {
      if ((*(uint *)(local_4 + 0x44) >> 3 & 1) == 0) {
        FUN_000d2de0(&local_4);
      }
      else {
        FUN_00235e40();
        *(uint *)(local_4 + 0x44) = *(uint *)(local_4 + 0x44) | 0x10;
      }
    }
  }
  (**(code **)(*DAT_00443310 + 0x74))(DAT_00443310);
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  return;
}
