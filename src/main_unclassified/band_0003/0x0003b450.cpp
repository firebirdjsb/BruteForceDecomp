/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6B91F226549F8B42ED48B3CF3567BD4FA08C44A3417E2E99710AD92351CB734F
 * Entry: 0x0003b450, Ghidra index: 417, label: FUN_0003b450
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x0003b556) */
/* WARNING: Removing unreachable block (ram,0x0003b567) */

undefined1 FUN_0003b450(void)

{
  int in_EAX;
  int iVar1;
  undefined1 uVar2;
  undefined1 local_a0 [25];
  undefined1 local_87;
  int local_44;
  
  FUN_00022dc0();
  uVar2 = 1;
  local_44 = 1;
  local_87 = 1;
  FUN_00055650();
  FUN_00055d30(local_a0);
  *(int *)(in_EAX + 0x44) = local_44;
  if ((((local_44 == 0) || (local_44 < 0)) || (0x86 < local_44)) ||
     (iVar1 = (**(code **)(local_44 * 0x40 + *(int *)(in_EAX + 0x4c)))(), iVar1 != 1)) {
    uVar2 = 0;
  }
  FUN_0001d470();
  return uVar2;
}
