/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BCFB54E958E1791882214F37748D4C7F552ACFC5C1E5C1651B0053C02841EF34
 * Entry: 0x001fc8c0, Ghidra index: 7169, label: FUN_001fc8c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001fc8c0(int param_1)

{
  byte bVar1;
  int in_ECX;
  
  FUN_001ff4c0(param_1);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(byte *)(in_ECX + 0x48) =
       *(byte *)(in_ECX + 0x48) ^ (*(byte *)(param_1 + 0x48) ^ *(byte *)(in_ECX + 0x48)) & 1;
  FUN_0020bcf0();
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  if ((in_ECX + 0x60 != param_1 + 0x60) && (*(int *)(in_ECX + 100) != *(int *)(param_1 + 100))) {
    FUN_0008f6a0(*(int *)(param_1 + 100));
  }
  if (*(int *)(in_ECX + 0x6c) != *(int *)(param_1 + 0x6c)) {
    FUN_0008f6a0(*(int *)(param_1 + 0x6c));
  }
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(byte *)(in_ECX + 0x48) =
       *(byte *)(in_ECX + 0x48) ^ (*(byte *)(param_1 + 0x48) ^ *(byte *)(in_ECX + 0x48)) & 4;
  *(byte *)(in_ECX + 0x78) =
       *(byte *)(in_ECX + 0x78) ^ (*(byte *)(param_1 + 0x78) ^ *(byte *)(in_ECX + 0x78)) & 1;
  *(byte *)(in_ECX + 0x48) =
       *(byte *)(in_ECX + 0x48) ^ (*(byte *)(param_1 + 0x48) ^ *(byte *)(in_ECX + 0x48)) & 8;
  *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(byte *)(in_ECX + 0x48) =
       *(byte *)(in_ECX + 0x48) ^ (*(byte *)(param_1 + 0x48) ^ *(byte *)(in_ECX + 0x48)) & 2;
  bVar1 = *(byte *)(in_ECX + 0x80) ^ (*(byte *)(in_ECX + 0x80) ^ *(byte *)(param_1 + 0x80)) & 1;
  *(byte *)(in_ECX + 0x80) = bVar1;
  *(byte *)(in_ECX + 0x80) = (*(byte *)(param_1 + 0x80) ^ bVar1) & 2 ^ bVar1;
  return;
}
