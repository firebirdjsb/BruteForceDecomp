/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3F82F9194919B065521A61FFB4404F57620601EEEB3724F7F9F52B971068972A
 * Entry: 0x0003eee0, Ghidra index: 466, label: FUN_0003eee0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0003eee0(void)

{
  undefined4 in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  int local_4;
  
  iVar1 = FUN_00038b70(in_EAX);
  iVar2 = FUN_0003ef40(in_EAX);
  iVar3 = 0;
  local_4 = iVar1;
  while (local_4 != iVar2) {
    iVar3 = iVar3 + 1;
    FUN_0001c5d0();
  }
  FUN_0001c120(&local_4,iVar1,iVar2);
  return iVar3;
}
