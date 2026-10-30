/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 631A542D6404D1CBA5A567C3CBCD72BF81E95944BA4ADEAF5EBC1300C43A0DC9
 * Entry: 0x001667c0, Ghidra index: 4719, label: FUN_001667c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001667c0(void)

{
  int in_EAX;
  int in_ECX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)(in_ECX + 0xc);
  puVar1 = (undefined4 *)(in_EAX + 0x10);
  iVar3 = 0x1b;
  do {
    puVar1[-4] = puVar2[-3];
    puVar1[-3] = puVar2[-2];
    puVar1[-2] = puVar2[-1];
    puVar1[-1] = *puVar2;
    *puVar1 = *(undefined4 *)((in_ECX - in_EAX) + (int)puVar1);
    puVar1[1] = puVar2[2];
    puVar2 = puVar2 + 6;
    puVar1 = puVar1 + 6;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}
