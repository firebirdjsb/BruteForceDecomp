/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8F4191C46049BC9BF0D129FD1D100F2D17D340C1415AC4E707854187975D04EC
 * Entry: 0x002c3730, Ghidra index: 10047, label: FUN_002c3730
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c3730(void)

{
  int in_EAX;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(in_EAX + 0x18);
  iVar2 = 3;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined4 *)(in_EAX + 0x48);
  iVar2 = 3;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined4 *)(in_EAX + 0x80);
  iVar2 = 3;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined4 *)(in_EAX + 0xb0);
  iVar2 = 3;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined4 *)(in_EAX + 0xe0);
  iVar2 = 3;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(in_EAX + 0x110) = 0;
  return;
}
