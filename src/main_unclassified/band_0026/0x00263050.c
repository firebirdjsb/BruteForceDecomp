/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1F3128220F315E1E43C25DDB827A30F3848EE08ECEECD5A0003E647740F78E4E
 * Entry: 0x00263050, Ghidra index: 8668, label: FUN_00263050
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00263050(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 auStack_30 [5];
  undefined4 local_14 [5];
  
  local_14[1] = 0;
  local_14[0] = 0;
  local_14[3] = 0x3f800000;
  local_14[2] = 0x3f800000;
  local_14[4] = 0;
  puVar2 = local_14;
  puVar3 = auStack_30;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_001b38d0();
  return;
}
