/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 472A9A805386FD5425B7E36320D76B91196A4637EFB41DB5D89444ADC2B5CED7
 * Entry: 0x00174350, Ghidra index: 4905, label: FUN_00174350
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00174350(void)

{
  uint *puVar1;
  int in_EAX;
  uint *puVar2;
  int in_ECX;
  uint local_10 [2];
  uint local_8 [2];
  
  puVar1 = (uint *)(in_EAX + 0x78);
  local_10[0] = FUN_000a2840(puVar1);
  local_8[0] = *(uint *)(in_ECX + 4);
  if ((local_10[0] == local_8[0]) || (*puVar1 < *(uint *)(local_10[0] + 0xc))) {
    puVar2 = local_8;
  }
  else {
    puVar2 = local_10;
  }
  if ((*puVar2 == local_8[0]) || (*(int *)(*puVar2 + 0x10) == 0)) {
    local_8[0] = *puVar1;
    FUN_00135410(local_8);
  }
  return;
}
