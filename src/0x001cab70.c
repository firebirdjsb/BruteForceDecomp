/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 66591BD5DE4B892765E11C40C5DB32EF4F03A28ADA9BA8BE6655AA2525C480DF
 * Entry: 0x001cab70, Ghidra index: 5853, label: FUN_001cab70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001cab70(void)

{
  int in_EAX;
  int in_ECX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)(in_ECX + 8);
  puVar2 = (undefined4 *)(in_EAX + 0xc);
  iVar3 = 8;
  do {
    puVar2[-3] = puVar1[-2];
    puVar2[-2] = puVar1[-1];
    *(undefined4 *)((in_EAX - in_ECX) + (int)puVar1) = *puVar1;
    *puVar2 = puVar1[1];
    puVar1 = puVar1 + 4;
    puVar2 = puVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}
