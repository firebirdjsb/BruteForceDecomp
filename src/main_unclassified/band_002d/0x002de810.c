/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0B48DCDA345DC860A3F8C1F6ADCF5FE1D36B617096D170D7120547E4C2E6EAFE
 * Entry: 0x002de810, Ghidra index: 10332, label: FUN_002de810
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002de810(void)

{
  int in_EAX;
  undefined4 *puVar1;
  int iVar2;
  
  *(undefined4 *)(in_EAX + 0xc) = 0;
  *(int *)(in_EAX + 0x1a8) = in_EAX + 0x1b8;
  *(undefined4 *)(in_EAX + 0x1b4) = 4;
  iVar2 = 3;
  *(undefined4 *)(in_EAX + 0x1ac) = 3;
  *(undefined4 *)(in_EAX + 0x1b0) = 3;
  *(int *)(in_EAX + 0x1a0) = in_EAX + 0x80;
  *(int *)(in_EAX + 0x1a4) = in_EAX + 0x110;
  *(undefined4 *)(in_EAX + 0x214) = 0;
  *(undefined4 *)(in_EAX + 0x224) = 0;
  *(undefined4 *)(in_EAX + 0x234) = 0;
  *(undefined4 *)(in_EAX + 0x244) = 0;
  *(undefined4 *)(in_EAX + 0x254) = 0;
  puVar1 = (undefined4 *)(in_EAX + 0x2f4);
  do {
    puVar1[-1] = puVar1 + 3;
    *puVar1 = 1;
    puVar1[1] = 1;
    puVar1[2] = 4;
    puVar1[-3] = puVar1 + -0x1b;
    puVar1[-2] = puVar1 + -0xf;
    puVar1 = puVar1 + 0x36;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}
