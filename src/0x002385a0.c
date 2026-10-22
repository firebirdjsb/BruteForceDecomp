/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CA9E3FCD6887144B320F75F6458D03459D6C61E5A6E52AAD3D797228E2D00892
 * Entry: 0x002385a0, Ghidra index: 7876, label: FUN_002385a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00394140;
undefined4 FUN_002385a0(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(int *)(in_EAX + 0x58) != 0) {
    iVar1 = *(int *)(*(int *)(in_EAX + 0x38) + 0x10);
    if (iVar1 != 0) {
      iVar2 = iVar1 + 0x14;
      while( true ) {
        if (iVar2 == *(int *)(in_EAX + 0x38)) {
          *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) & 0xfffffffe;
          *(int *)(in_EAX + 0x38) = iVar1;
          return CONCAT31((int3)((uint)iVar2 >> 8),1);
        }
        if ((*(byte *)(iVar2 + 0xc) & 1) != 0) break;
        iVar2 = iVar2 + *(int *)(*(int *)(iVar2 + 4) + 8);
      }
    }
    FUN_00238740();
  }
  iVar1 = *(int *)(in_EAX + 0x54);
  iVar2 = *(int *)(in_EAX + 0x38);
  puVar3 = (undefined4 *)(iVar1 + -0x14);
  *(undefined4 **)(in_EAX + 0x54) = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    *(undefined4 *)(in_EAX + 0x38) = 0;
    return 1;
  }
  *(int *)(iVar1 + -0x10) = in_EAX + 0x34;
  *(int *)(iVar1 + -0xc) = iVar2;
  *(undefined4 *)(iVar1 + -8) = 0;
  *puVar3 = &PTR_FUN_00394140;
  *(undefined4 *)(iVar1 + -4) = 0;
  if (iVar2 != 0) {
    *(undefined4 **)(iVar2 + 0x10) = puVar3;
  }
  *(undefined4 *)(iVar1 + -8) = 2;
  *(undefined4 **)(in_EAX + 0x38) = puVar3;
  return CONCAT31((int3)((uint)puVar3 >> 8),1);
}
