/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FE084C4E2C8F49C03B7FD00EAF1C2D622E8660D9F6F26FD06BB509F16069CB56
 * Entry: 0x000b6f50, Ghidra index: 2199, label: FUN_000b6f50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000b6f50(char param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xa8) = 0x41000000;
  *(undefined4 *)(in_ECX + 0x7c) = 0;
  *(undefined4 *)(in_ECX + 0x78) = 0x41500000;
  *(undefined4 *)(in_ECX + 0x9c) = 0;
  if (param_1 != '\0') {
    *(undefined4 *)(in_ECX + 0xa0) = 0x40400000;
    *(undefined4 *)(in_ECX + 0x94) = 0x42000000;
    *(undefined4 *)(in_ECX + 0x98) = 0x41800000;
    *(undefined4 *)(in_ECX + 0xa4) = 0x41800000;
    *(undefined4 *)(in_ECX + 0x88) = 0x40a00000;
    *(undefined4 *)(in_ECX + 0x8c) = 0x41200000;
    *(undefined4 *)(in_ECX + 0x90) = 0x40c00000;
    *(undefined4 *)(in_ECX + 0x80) = 0x43020000;
    *(undefined4 *)(in_ECX + 0x84) = 0x42e60000;
    *(undefined4 *)(in_ECX + 0xc0) = 0x41a80000;
    *(undefined4 *)(in_ECX + 0xc4) = 0;
    return;
  }
  *(undefined4 *)(in_ECX + 0xa0) = 0x40800000;
  *(undefined4 *)(in_ECX + 0x94) = 0x42800000;
  *(undefined4 *)(in_ECX + 0x98) = 0x42800000;
  *(undefined4 *)(in_ECX + 0xa4) = 0x42000000;
  *(undefined4 *)(in_ECX + 0x88) = 0x41100000;
  *(undefined4 *)(in_ECX + 0x8c) = 0x42280000;
  *(undefined4 *)(in_ECX + 0x90) = 0x41200000;
  *(undefined4 *)(in_ECX + 0x80) = 0x43960000;
  *(undefined4 *)(in_ECX + 0x84) = 0x43790000;
  *(undefined4 *)(in_ECX + 0xc0) = 0x424c0000;
  *(undefined4 *)(in_ECX + 0xc4) = 0x40000000;
  return;
}
