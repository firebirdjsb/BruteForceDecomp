/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 359E1582D7831D0971C12394B647BDD8F232C4862CE6D8B9EC023DDB79A9A0CE
 * Entry: 0x003837e7, Ghidra index: 13622, label: FUN_003837e7
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003837e7(void)

{
  int iVar1;
  int in_ECX;
  int in_EDX;
  int iVar2;
  
  iVar1 = *(int *)(in_ECX + 0x28);
  iVar2 = 0;
  if (iVar1 != in_EDX) {
    do {
      iVar2 = iVar1;
      iVar1 = *(int *)(iVar2 + 0x24);
    } while (iVar1 != in_EDX);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(iVar1 + 0x24);
      goto LAB_0038380c;
    }
  }
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(iVar1 + 0x24);
LAB_0038380c:
  if (in_EDX == *(int *)(in_ECX + 0x2c)) {
    *(int *)(in_ECX + 0x2c) = iVar2;
  }
  return;
}
