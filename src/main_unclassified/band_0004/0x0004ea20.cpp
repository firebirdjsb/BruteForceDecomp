/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0F62634A3F72A2FBADB35AE6A5BBEA7951305E0D0074AFB3D169917AF3F0E874
 * Entry: 0x0004ea20, Ghidra index: 679, label: FUN_0004ea20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0004eab0(void);

undefined4 * FUN_0004ea20(void)

{
  char cVar1;
  undefined4 *puVar2;
  uint *in_EAX;
  undefined4 *puVar3;
  undefined4 **ppuVar4;
  int in_ECX;
  undefined4 *puVar5;
  undefined4 *local_1c;
  undefined4 *local_18;
  uint local_14;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  ppuVar4 = &local_1c;
  puVar2 = *(undefined4 **)(in_ECX + 4);
  local_14 = *in_EAX;
  cVar1 = *(char *)((int)puVar2[1] + 0x21);
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  local_1c = puVar2;
  puVar5 = (undefined4 *)puVar2[1];
  while (cVar1 == '\0') {
    if ((uint)puVar5[3] < local_14) {
      puVar3 = (undefined4 *)puVar5[2];
      puVar5 = local_1c;
    }
    else {
      puVar3 = (undefined4 *)*puVar5;
    }
    local_1c = puVar5;
    puVar5 = puVar3;
    cVar1 = *(char *)((int)puVar3 + 0x21);
  }
  if ((local_1c == puVar2) || (local_14 < (uint)local_1c[3])) {
    local_18 = puVar2;
    ppuVar4 = &local_18;
  }
  puVar5 = *ppuVar4;
  if (puVar5 != puVar2) {
    FUN_0004eab0();
    return puVar5 + 3;
  }
  FUN_0004eab0();
  return (undefined4 *)0x0;
}
