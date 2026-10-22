/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4F4FA582A17C51F5A4560773393AD6DA9C4BBF8C23D2A74E33A7F71775CF9218
 * Entry: 0x0022b0f0, Ghidra index: 7684, label: FUN_0022b0f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0022b0f0(int param_1)

{
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  FUN_00145e90(param_1);
  *(undefined4 *)(in_ECX + 0x1d8) = *(undefined4 *)(param_1 + 0x1a8);
  puVar2 = (undefined4 *)(param_1 + 0x1ac);
  puVar3 = (undefined4 *)(in_ECX + 0x1dc);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x1c0);
  puVar3 = (undefined4 *)(in_ECX + 0x1f0);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_001d3420();
  *(undefined4 *)(in_ECX + 0x2a4) = *(undefined4 *)(param_1 + 0x274);
  *(undefined4 *)(in_ECX + 0x2a8) = *(undefined4 *)(param_1 + 0x278);
  *(undefined4 *)(in_ECX + 0x2ac) = *(undefined4 *)(param_1 + 0x27c);
  *(undefined4 *)(in_ECX + 0x2b0) = *(undefined4 *)(param_1 + 0x280);
  *(undefined4 *)(in_ECX + 0x2b4) = *(undefined4 *)(param_1 + 0x284);
  *(undefined4 *)(in_ECX + 0x2b8) = *(undefined4 *)(param_1 + 0x288);
  *(undefined4 *)(in_ECX + 700) = *(undefined4 *)(param_1 + 0x28c);
  *(undefined4 *)(in_ECX + 0x2c0) = *(undefined4 *)(param_1 + 0x290);
  *(undefined4 *)(in_ECX + 0x2c4) = *(undefined4 *)(param_1 + 0x294);
  *(undefined1 *)(in_ECX + 0x2c8) = *(undefined1 *)(param_1 + 0x298);
  FUN_0010bc40();
  *(undefined4 *)(in_ECX + 0x2f0) = *(undefined4 *)(param_1 + 0x2c0);
  *(undefined4 *)(in_ECX + 0x2ec) = *(undefined4 *)(param_1 + 700);
  FUN_0010bc40();
  FUN_0010bc40();
  *(undefined4 *)(in_ECX + 0x304) = *(undefined4 *)(param_1 + 0x2d4);
  *(undefined4 *)(in_ECX + 0x308) = *(undefined4 *)(param_1 + 0x2d8);
  *(undefined4 *)(in_ECX + 0x30c) = *(undefined4 *)(param_1 + 0x2dc);
  *(undefined4 *)(in_ECX + 0x310) = *(undefined4 *)(param_1 + 0x2e0);
  FUN_0010bc40();
  *(undefined4 *)(in_ECX + 0x324) = *(undefined4 *)(param_1 + 0x2f4);
  FUN_0010bc40();
  *(undefined4 *)(in_ECX + 0x338) = *(undefined4 *)(param_1 + 0x308);
  *(undefined4 *)(in_ECX + 0x33c) = *(undefined4 *)(param_1 + 0x30c);
  *(undefined4 *)(in_ECX + 0x340) = *(undefined4 *)(param_1 + 0x310);
  *(undefined4 *)(in_ECX + 0x344) = *(undefined4 *)(param_1 + 0x314);
  *(undefined1 *)(in_ECX + 0x348) = *(undefined1 *)(param_1 + 0x318);
  *(undefined4 *)(in_ECX + 0x34c) = *(undefined4 *)(param_1 + 0x31c);
  *(undefined4 *)(in_ECX + 0x360) = *(undefined4 *)(param_1 + 0x330);
  FUN_001d4120();
  FUN_001d4120();
  FUN_0022b2f0(in_ECX);
  return;
}
