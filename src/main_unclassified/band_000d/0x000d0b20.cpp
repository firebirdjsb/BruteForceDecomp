/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FDC77E46F892E854C3542FDBDC446FAA7B9F5E10AD78FF70017B63C3E9B2F573
 * Entry: 0x000d0b20, Ghidra index: 2581, label: FUN_000d0b20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000d0aa0(ushort param_1);

void FUN_000d0b20(void)

{
  undefined4 in_EAX;
  undefined4 *puVar1;
  int in_ECX;
  
  puVar1 = (undefined4 *)FUN_000d0aa0(in_EAX);
  puVar1[1] = 0;
  *puVar1 = *(undefined4 *)(in_ECX + 0x2c);
  if (*(int *)(in_ECX + 0x2c) != 0) {
    *(undefined4 **)(*(int *)(in_ECX + 0x2c) + 4) = puVar1;
  }
  *(undefined4 **)(in_ECX + 0x2c) = puVar1;
  if (*(int *)(in_ECX + 0x30) == 0) {
    *(undefined4 **)(in_ECX + 0x30) = puVar1;
  }
  return;
}
