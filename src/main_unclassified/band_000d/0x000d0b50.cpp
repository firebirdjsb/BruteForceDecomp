/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1A33A3C75936399F7CAC5B2427AC875FBD4833EBA7E8F69AFC7B1B80A0EA3362
 * Entry: 0x000d0b50, Ghidra index: 2582, label: FUN_000d0b50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000d0aa0(ushort param_1);

void FUN_000d0b50(void)

{
  undefined4 in_EAX;
  undefined4 *puVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x34) == 0) {
    puVar1 = (undefined4 *)FUN_000d0aa0(in_EAX);
    *(undefined4 **)(in_ECX + 0x34) = puVar1;
    *puVar1 = 0;
    if (*(undefined4 **)(in_ECX + 0x30) != (undefined4 *)0x0) {
      **(undefined4 **)(in_ECX + 0x30) = puVar1;
      puVar1[1] = *(undefined4 *)(in_ECX + 0x30);
      *(undefined4 **)(in_ECX + 0x30) = puVar1;
      return;
    }
  }
  else {
    puVar1 = (undefined4 *)FUN_000d0aa0(in_EAX);
    *puVar1 = 0;
    if (*(undefined4 **)(in_ECX + 0x30) != (undefined4 *)0x0) {
      **(undefined4 **)(in_ECX + 0x30) = puVar1;
      puVar1[1] = *(undefined4 *)(in_ECX + 0x30);
      *(undefined4 **)(in_ECX + 0x30) = puVar1;
      return;
    }
  }
  puVar1[1] = 0;
  *(undefined4 **)(in_ECX + 0x2c) = puVar1;
  *(undefined4 **)(in_ECX + 0x30) = puVar1;
  return;
}
