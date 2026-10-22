/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2BD9AA50F7BB5D45879B7BECC50A123CD4C84C5FC87D110C261F265749AF3CA8
 * Entry: 0x00178e50, Ghidra index: 4978, label: FUN_00178e50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469990;
extern uint32_t DAT_00469994;
undefined4 FUN_00178e50(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_EAX;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  byte bVar6;
  
  piVar2 = param_1;
  if ((*param_1 != 0) && (DAT_00469994 != '\0')) {
    puVar3 = (undefined4 *)FUN_002ea01d(0x18);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = 0;
      puVar3[4] = 0;
    }
    *puVar3 = *in_EAX;
    param_1 = puVar3;
    uVar4 = FUN_0017beb0(in_EAX);
    puVar3[1] = uVar4;
    if (puVar3[4] != *piVar2) {
      FUN_0008f6a0(*piVar2);
    }
    bVar6 = *(byte *)(puVar3 + 5) ^ (*(byte *)(piVar2 + 1) >> 1 ^ *(byte *)(puVar3 + 5)) & 1;
    *(byte *)(puVar3 + 5) = bVar6;
    *(byte *)(puVar3 + 5) = ((char)piVar2[1] << 1 ^ bVar6) & 2 ^ bVar6;
    puVar3[2] = 0;
    if ((*(byte *)(puVar3 + 5) & 1) == 0) {
      FUN_00178950();
    }
    else {
      FUN_00178a40();
    }
    iVar1 = *(int *)(DAT_00469990 + 4);
    iVar5 = FUN_000ff730(DAT_00469990,iVar1,*(undefined4 *)(iVar1 + 4),&param_1);
    FUN_000b2a50();
    *(int *)(iVar1 + 4) = iVar5;
    **(int **)(iVar5 + 4) = iVar5;
    return puVar3[2];
  }
  return 0;
}
