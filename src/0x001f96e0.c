/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 33B71C51F497158601F79BC49A9DDA1B09A00FB765E32AB47F7D2A1218B442D7
 * Entry: 0x001f96e0, Ghidra index: 7075, label: FUN_001f96e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001f96e0(int param_1)

{
  int in_ECX;
  
  FUN_001ff4c0(param_1);
  *(undefined1 *)(in_ECX + 0x80) = *(undefined1 *)(param_1 + 0x80);
  *(undefined1 *)(in_ECX + 0x81) = *(undefined1 *)(param_1 + 0x81);
  *(undefined1 *)(in_ECX + 0x82) = *(undefined1 *)(param_1 + 0x82);
  *(undefined1 *)(in_ECX + 0x83) = *(undefined1 *)(param_1 + 0x83);
  *(undefined1 *)(in_ECX + 0x84) = *(undefined1 *)(param_1 + 0x84);
  *(undefined4 *)(in_ECX + 0x88) = *(undefined4 *)(param_1 + 0x88);
  FUN_0010bc40();
  FUN_0010bc40();
  FUN_0003d730(in_ECX + 0xac,param_1 + 0xac);
  *(undefined1 *)(in_ECX + 0xf4) = *(undefined1 *)(param_1 + 0xf4);
  return;
}
