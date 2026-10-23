/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CBB2A23832D1B3C9F305DEB78FF7D109560656D338DCEA96627DE3797544A8F0
 * Entry: 0x000d1940, Ghidra index: 2603, label: FUN_000d1940
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000d1940(void)

{
  int in_ECX;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(in_ECX + 0xc);
  iVar2 = 3;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  return;
}
