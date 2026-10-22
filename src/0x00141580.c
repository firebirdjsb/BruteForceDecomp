/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DFBDB96D1E6584BEE5569F946DFDAA305CEC9A0DC0D801D0CC157C10F235E476
 * Entry: 0x00141580, Ghidra index: 4102, label: FUN_00141580
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00141580(void)

{
  char cVar1;
  uint in_EAX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 **ppuVar4;
  int in_ECX;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint unaff_EBX;
  undefined4 *local_8;
  undefined4 *local_4;
  
  local_4 = *(undefined4 **)(in_ECX + 0x2c);
  cVar1 = *(char *)((int)local_4[1] + 0x1d);
  local_8 = local_4;
  puVar5 = (undefined4 *)local_4[1];
  while (cVar1 == '\0') {
    if ((uint)puVar5[3] < in_EAX) {
      puVar2 = (undefined4 *)puVar5[2];
      puVar5 = local_8;
    }
    else {
      puVar2 = (undefined4 *)*puVar5;
    }
    local_8 = puVar5;
    puVar5 = puVar2;
    cVar1 = *(char *)((int)puVar2 + 0x1d);
  }
  if ((local_8 == local_4) || (in_EAX < (uint)local_8[3])) {
    ppuVar4 = &local_4;
  }
  else {
    ppuVar4 = &local_8;
  }
  puVar5 = *ppuVar4;
  if (puVar5 != *(undefined4 **)(in_ECX + 0x2c)) {
    puVar2 = (undefined4 *)puVar5[5];
    cVar1 = *(char *)((int)puVar2[1] + 0x1d);
    local_4 = puVar2;
    puVar6 = (undefined4 *)puVar2[1];
    while (cVar1 == '\0') {
      if ((uint)puVar6[3] < unaff_EBX) {
        puVar3 = (undefined4 *)puVar6[2];
        puVar6 = local_4;
      }
      else {
        puVar3 = (undefined4 *)*puVar6;
      }
      local_4 = puVar6;
      puVar6 = puVar3;
      cVar1 = *(char *)((int)puVar3 + 0x1d);
    }
    if ((local_4 == puVar2) || (unaff_EBX < (uint)local_4[3])) {
      local_8 = puVar2;
      ppuVar4 = &local_8;
    }
    else {
      ppuVar4 = &local_4;
    }
    if (*ppuVar4 != (undefined4 *)puVar5[5]) {
      FUN_001417c0(puVar5 + 4,&local_4,*ppuVar4);
    }
  }
  return;
}
