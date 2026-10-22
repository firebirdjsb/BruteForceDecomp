/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2955888B9C811A0B7C24CB44B3BC2C78E64B7F35532937264B1619D2CAD7B21B
 * Entry: 0x001fcf00, Ghidra index: 7180, label: FUN_001fcf00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_001fcf00(void)

{
  int iVar1;
  undefined1 uVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x54);
  uVar2 = 0;
  if ((((iVar1 == 3) || (iVar1 == 2)) || (iVar1 == 4)) || (iVar1 == 5)) {
    uVar2 = 1;
  }
  return uVar2;
}
