/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8F9F843A2BA1323D3F516AF61992822A5A2078AEB8DBB41139CFB13A1AABA901
 * Entry: 0x0022ece0, Ghidra index: 7728, label: FUN_0022ece0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469b54;
void FUN_0022ece0(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  float10 fVar4;
  undefined1 auStack_1c [12];
  undefined1 auStack_10 [16];
  
  iVar3 = *(int *)(in_EAX + 0x1b0);
  if (iVar3 == 0) {
    return;
  }
  if (*(int *)(iVar3 + 8) == 0) {
    if ((*(int *)(iVar3 + 0x10) == 0) ||
       (iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 0xb0), *(int *)(*(int *)(iVar3 + 0xc) + 4) != 3))
    {
      iVar3 = 0;
    }
  }
  else {
    iVar3 = *(int *)(*(int *)(iVar3 + 8) + 0x1d4);
  }
  iVar2 = (**(code **)(**(int **)(*(int *)(iVar3 + 8) + 0xbec) + 0xc))(iVar3);
  if (((iVar2 != 0) && (*(int *)(iVar2 + 0x24) != 0)) &&
     ((*(byte *)(*(int *)(iVar2 + 0x24) + 0x14) & 2) != 0)) {
    iVar2 = *(int *)(iVar3 + 0x2e8);
    cVar1 = (**(code **)(*(int *)(iVar2 + 0x144) + 0x20))();
    if (((cVar1 == '\0') || (iVar2 = *(int *)(iVar2 + 0x164), iVar2 == 0)) ||
       (*(int *)(*(int *)(iVar2 + 0xc) + 4) != 0x14)) {
      iVar2 = 0;
    }
    if (in_EAX == iVar2) goto LAB_0022ed9f;
  }
  iVar3 = *(int *)(iVar3 + 0x2e8);
  cVar1 = (**(code **)(*(int *)(iVar3 + 0x178) + 0x20))();
  if (cVar1 == '\0') {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar3 + 0x198);
  }
  if (in_EAX != iVar3) {
    return;
  }
LAB_0022ed9f:
  iVar3 = FUN_0006ef00();
  if (iVar3 != 0) {
    if ((*(byte *)(in_EAX + 0x225) & 2) == 0) {
      FUN_002316a0(*(undefined4 *)(in_EAX + 0x1fc));
    }
    else {
      FUN_00232200(*(undefined4 *)(in_EAX + 0x1fc));
    }
    fVar4 = (float10)FUN_00232520();
    iVar2 = (**(code **)(*DAT_00469b54 + 0x48))();
    FUN_000c54d0(*(undefined4 *)(iVar3 + 0xf0),in_EAX,auStack_10,auStack_1c,
                 (float)fVar4 * *(float *)(iVar2 + 0x18c));
  }
  return;
}
