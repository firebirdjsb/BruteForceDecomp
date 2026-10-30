/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 81EB77DB62E0E36AD1B0D7E61C0BC92949629DD924AB4F2835AD35B08C366F6A
 * Entry: 0x00115d50, Ghidra index: 3583, label: FUN_00115d50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003c05f8;
extern uint32_t DAT_00469b58;
extern uint32_t DAT_0046cfd8;
extern uint32_t DAT_0046d064;
undefined4 FUN_00115d50(void)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  int in_EAX;
  int *piVar4;
  int *in_ECX;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  
  if ((*(byte *)(in_ECX + 0x1c) & 1) != 0) {
    return 0;
  }
  (**(code **)(*in_ECX + 0x144))(1);
  *(byte *)(in_ECX + 0x1f6) = *(byte *)(in_ECX + 0x1f6) & 0x7f;
  *(byte *)(in_ECX + 0x1c) = *(byte *)(in_ECX + 0x1c) & 0xf7;
  *(byte *)((int)in_ECX + 0x71) = *(byte *)((int)in_ECX + 0x71) & 0xef;
  in_ECX[0x1f7] = 0;
  if ((float)in_ECX[0x6a] == 0.0) {
    piVar4 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
    if (*piVar4 == 0x17506391) {
      in_ECX[0x6a] = 0x41a00000;
    }
    else {
      in_ECX[0x6a] = 0x40400000;
    }
  }
  FUN_0011fcd0();
  FUN_0011fd20();
  FUN_0010e3e0();
  if ((in_ECX[0x167] != 0) && ((*(byte *)(in_ECX[2] + 0xc50) & 0x10) == 0)) {
    piVar4 = (int *)(in_ECX[0x167] + 0x20);
    *piVar4 = *piVar4 + 1;
  }
  if ((DAT_003c05f8 != '\0') && ((*(byte *)(in_ECX[3] + 0x34c) & 1) != 0)) {
    if ((in_EAX != 0) && ((float)in_ECX[0x1f5] < 1.0)) {
      *(undefined4 *)(in_EAX + 0x20) = 0;
    }
    FUN_000dfff0(in_ECX);
    if ((in_EAX != 0) && (*(int *)(in_EAX + 0x20) == 0)) {
      *(int *)(in_EAX + 0x20) = in_ECX[0x140];
    }
  }
  if (((*(int *)(in_ECX[3] + 0x350) != DAT_0046d064) && (in_EAX != 0)) &&
     (*(int *)(in_EAX + 4) != 3)) {
    uVar6 = 0x3f800000;
    (**(code **)(*in_ECX + 0x40))(0x3f800000);
    FUN_000def50(uVar6);
  }
  DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
  iVar5 = 9;
  fVar3 = ((float)(DAT_0046cfd8 >> 9 | 0x3f800000) - 1.0) * 4.0 + 1.0;
  *(byte *)(in_ECX + 0x1d2) = *(byte *)(in_ECX + 0x1d2) & 0xf7;
  fVar7 = fVar3;
  do {
    iVar2 = in_ECX[3];
    uVar1 = iVar5 - 9;
    if (3 < uVar1) {
      FUN_001297e0(iVar2 + 0x338);
    }
    if ((*(uint *)(iVar2 + 0x338 + (uVar1 >> 5) * 4) & 1 << ((byte)uVar1 & 0x1f)) != 0) {
      fVar7 = fVar7 - 1.0;
      if (fVar7 < 0.0 != (fVar7 == 0.0)) {
        FUN_0012eab0(1);
        return 1;
      }
    }
    if (iVar5 == 0xc) {
      if (fVar3 == fVar7) {
        FUN_0012eab0(0);
        return 1;
      }
      iVar5 = 8;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0xd);
  return 1;
}
