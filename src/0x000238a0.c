/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A08E63AB033ED19798800030860F353DA5539CCA6D8C145287DF17004364BFB2
 * Entry: 0x000238a0, Ghidra index: 232, label: FUN_000238a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000238a0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_EAX;
  undefined4 *in_ECX;
  
  uVar1 = in_ECX[2];
  uVar2 = in_ECX[1];
  *(undefined4 *)(in_EAX + 0x664) = *in_ECX;
  *(undefined4 *)(in_EAX + 0x668) = uVar2;
  *(undefined4 *)(in_EAX + 0x66c) = uVar1;
  *(undefined1 *)(in_EAX + 0x670) = 1;
  return;
}
