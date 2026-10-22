/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4165798DEE8707348BB60E275AB9DA758E2EB6931705F1556591B4D5D8E1C035
 * Entry: 0x001e3140, Ghidra index: 6763, label: FUN_001e3140
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e3140(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_EDX;
  int unaff_ESI;
  
  uVar1 = *(undefined4 *)(unaff_ESI + 4);
  uVar2 = *(undefined4 *)(unaff_ESI + 8);
  uVar3 = *(undefined4 *)(unaff_ESI + 0xc);
  uVar4 = *(undefined4 *)(unaff_ESI + 0x10);
  *(undefined4 *)(unaff_ESI + 4) = *(undefined4 *)(in_EDX + 4);
  *(undefined4 *)(unaff_ESI + 8) = *(undefined4 *)(in_EDX + 8);
  *(undefined4 *)(unaff_ESI + 0xc) = *(undefined4 *)(in_EDX + 0xc);
  *(undefined4 *)(unaff_ESI + 0x10) = *(undefined4 *)(in_EDX + 0x10);
  *(undefined4 *)(in_EDX + 4) = uVar1;
  *(undefined4 *)(in_EDX + 8) = uVar2;
  *(undefined4 *)(in_EDX + 0xc) = uVar3;
  *(undefined4 *)(in_EDX + 0x10) = uVar4;
  uVar1 = *(undefined4 *)(unaff_ESI + 0x14);
  *(undefined4 *)(unaff_ESI + 0x14) = *(undefined4 *)(in_EDX + 0x14);
  *(undefined4 *)(in_EDX + 0x14) = uVar1;
  uVar1 = *(undefined4 *)(unaff_ESI + 0x18);
  *(undefined4 *)(unaff_ESI + 0x18) = *(undefined4 *)(in_EDX + 0x18);
  *(undefined4 *)(in_EDX + 0x18) = uVar1;
  return;
}
