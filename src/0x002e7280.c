/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F5A6A640507DEAA02A8B647F57620FEEBFCCDB8E5B06FCC76E6C0FA8599DA224
 * Entry: 0x002e7280, Ghidra index: 10504, label: FUN_002e7280
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0038684c;
undefined4 FUN_002e7280(void)

{
  uint uVar1;
  int in_ECX;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  undefined4 local_4;
  
  local_4 = 0;
  if (*(char *)(in_ECX + 0x34) != '\0') {
    iVar2 = 2;
    bVar7 = true;
    piVar3 = (int *)(in_ECX + 0x4878);
    piVar5 = &DAT_0038684c;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar7 = *piVar3 == *piVar5;
      piVar3 = piVar3 + 1;
      piVar5 = piVar5 + 1;
    } while (bVar7);
    if (!bVar7) {
      FUN_00345054((int *)(in_ECX + 0x4878),0,0,0x1000,0x10);
    }
  }
  *(undefined4 *)(in_ECX + 0x4898) = 0;
  *(undefined1 *)(in_ECX + 0x34) = 0;
  uVar4 = 0;
  if (*(int *)(*(int *)(in_ECX + 0x24) + 8) != 0) {
    do {
      if (uVar4 != 0) {
        uVar1 = uVar4;
        if (uVar4 == 0xfffffffa) {
          uVar1 = *(uint *)(*(int *)(in_ECX + 0x24) + 8);
        }
        if ((-1 < (int)uVar1) &&
           (*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x24) + uVar1 * 4) != 0)) {
          FUN_002e7a40(uVar4);
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(*(int *)(in_ECX + 0x24) + 8));
  }
  piVar3 = (int *)(in_ECX + 0x4878);
  iVar2 = 2;
  bVar7 = true;
  *(undefined4 *)(in_ECX + 0x4950) = 0xffffffff;
  *(undefined1 *)(in_ECX + 0x18) = 0xff;
  piVar5 = piVar3;
  piVar6 = &DAT_0038684c;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar7 = *piVar5 == *piVar6;
    piVar5 = piVar5 + 1;
    piVar6 = piVar6 + 1;
  } while (bVar7);
  if (!bVar7) {
    iVar2 = FUN_00345010(piVar3);
    if (iVar2 != 0) {
      local_4 = 0x80004005;
    }
    *piVar3 = 0;
    *(undefined4 *)(in_ECX + 0x487c) = 0;
    *(undefined4 *)(in_ECX + 0x4880) = 0;
    *(undefined4 *)(in_ECX + 0x4884) = 0;
    *(undefined4 *)(in_ECX + 0x4888) = 0;
    *(undefined4 *)(in_ECX + 0x488c) = 0;
  }
  FUN_002e5890();
  return local_4;
}
