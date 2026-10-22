/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 57F3EB8E87BA9EA962159C7BB44001FA2797C28A8A9B8B87ADD23A6AFB990E49
 * Entry: 0x002b6ed0, Ghidra index: 9837, label: FUN_002b6ed0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b6ed0(void)

{
  undefined4 uVar1;
  undefined4 *in_EAX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar4 = 1;
  puVar6 = in_EAX;
  do {
    puVar6 = puVar6 + 4;
    in_EAX = in_EAX + 1;
    puVar2 = in_EAX;
    puVar3 = puVar6;
    iVar5 = iVar4;
    if (0 < iVar4) {
      do {
        uVar1 = *puVar3;
        *puVar3 = *puVar2;
        *puVar2 = uVar1;
        iVar5 = iVar5 + -1;
        puVar2 = puVar2 + 4;
        puVar3 = puVar3 + 1;
      } while (iVar5 != 0);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  return;
}
