/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5311711109272CA8392E047A71D41DE68EDB37D229E32F62C894A78409449ECD
 * Entry: 0x0038515a, Ghidra index: 13666, label: FUN_0038515a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a8fc0;
void FUN_0038515a(void)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *in_EDX;
  byte bVar7;
  
  uVar1 = in_EDX[6];
  uVar2 = in_EDX[5];
  bVar3 = true;
  if ((*in_EDX >> 0x1c == 9) && (*(char *)(uVar1 + 0x1d) != '\0')) {
    if (in_EDX[1] == 0) {
      uVar4 = (uint)*(byte *)((int)in_EDX + 0x1d);
    }
    else {
      uVar4 = in_EDX[1] & 0xfff;
      uVar6 = in_EDX[3] & 0xfff;
      if (uVar6 < uVar4) {
        iVar5 = (*(byte *)((int)in_EDX + 0x1d) - uVar6) + -0x1000;
      }
      else {
        iVar5 = *(byte *)((int)in_EDX + 0x1d) - uVar6;
      }
      uVar4 = (iVar5 + uVar4) - 1;
    }
    *(int *)(uVar1 + 0x14) = *(int *)(uVar1 + 0x14) + uVar4;
    *(undefined4 *)(uVar1 + 4) = 0;
    bVar3 = false;
  }
  else {
    if (*in_EDX >> 0x1c == 0xf) {
      *(undefined4 *)(uVar1 + 4) = 0xc000000f;
    }
    *(uint *)(uVar1 + 4) = *in_EDX >> 0x1c | 0xc0000000;
  }
  uVar4 = *(uint *)(uVar2 + 8) & 0xfffffff0;
  do {
    bVar7 = (byte)in_EDX[7] & 2;
    FUN_00384a53(in_EDX);
    FUN_00385128();
    in_EDX = (uint *)(DAT_004a8fc0 + uVar4);
    uVar4 = in_EDX[2];
    if ((*(char *)((int)in_EDX + 0x1e) == '\x02') && (!bVar3)) break;
  } while (bVar7 == 0);
  *(uint *)(uVar2 + 8) = (in_EDX[4] ^ *(uint *)(uVar2 + 8)) & 0xf ^ in_EDX[4];
  if (bVar7 != 0) {
    FUN_003850ac(uVar1);
  }
  if ((*(char *)(uVar2 + 0x11) == '\0') || (!bVar3)) {
    *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) & 0xfffffffe;
  }
  return;
}
