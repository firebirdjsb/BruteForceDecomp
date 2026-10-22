/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8079FFFAB829C9B9DBFE068DE13E2FBF41BB27F72E70C59528EFD91589DB9C28
 * Entry: 0x002ef41e, Ghidra index: 10711, label: FUN_002ef41e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_DAT_003b70f0;
void FUN_002ef41e(int param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_1c [12];
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  uVar4 = 0;
  uVar2 = FUN_002f1318(local_1c,&local_8,param_1,0,0,0,0);
  if ((uVar2 & 4) == 0) {
    iVar3 = FID_conflict___ld12tod(local_1c,&local_10);
    if (((uVar2 & 2) != 0) || (iVar3 == 1)) {
      uVar4 = 0x80;
    }
    if (((uVar2 & 1) != 0) || (iVar3 == 2)) {
      uVar4 = uVar4 | 0x100;
    }
  }
  else {
    uVar4 = 0x200;
    local_10 = 0;
    local_c = 0;
  }
  puVar1 = PTR_DAT_003b70f0;
  *(uint *)PTR_DAT_003b70f0 = uVar4;
  *(int *)(puVar1 + 4) = local_8 - param_1;
  *(undefined4 *)(puVar1 + 0x10) = local_10;
  *(undefined4 *)(puVar1 + 0x14) = local_c;
  return;
}
