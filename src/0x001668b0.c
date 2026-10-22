/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3AE92D47B09394E10D8180815B90689B858BD22A1E63CC411D73B35D45D693E2
 * Entry: 0x001668b0, Ghidra index: 4721, label: FUN_001668b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001668b0(void)

{
  int in_EAX;
  int in_ECX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)(in_ECX + 8);
  puVar1 = (undefined4 *)(in_EAX + 0xc);
  iVar3 = 6;
  do {
    puVar1[-3] = puVar2[-2];
    puVar1[-2] = puVar2[-1];
    puVar1[-1] = *puVar2;
    *puVar1 = *(undefined4 *)((in_ECX - in_EAX) + (int)puVar1);
    puVar1[1] = puVar2[2];
    puVar2 = puVar2 + 5;
    puVar1 = puVar1 + 5;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}
