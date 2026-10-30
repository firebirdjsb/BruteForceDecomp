/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 93D328A3D342B4BA23252DE4155B70190EAC953F496EBA64C0E490F9F09A9B45
 * Entry: 0x000313e0, Ghidra index: 318, label: FUN_000313e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_00048030(void);
extern float10 FUN_00012520(uint32_t incoming_eax_bits);
extern float10 FUN_00023900(float param_1,float param_2);
extern void FUN_000124f0(float param_1, int32_t in_ECX);
extern undefined4 FUN_0002f270(int param_1,undefined4 param_2,undefined4 param_3);

extern uint32_t switchD_00031414_caseD_f[];
extern uint32_t switchD_00031465_caseD_3[];
undefined4 FUN_000313e0(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  float10 fVar4;
  
  iVar3 = *(int *)(in_ECX + 0x4d8);
  uVar2 = 0;
  bVar1 = false;
  if ((6 < iVar3) && (iVar3 < 9)) {
    bVar1 = true;
  }
  switch(*(undefined4 *)(param_1 + 0x14)) {
  case 0xd:
    if (iVar3 == 2) {
      iVar3 = *(int *)(in_ECX + 0x4f8) + 1;
      *(int *)(in_ECX + 0x4f8) = iVar3;
      if (2 < iVar3) {
        *(uint *)(in_ECX + 0x4f4) = *(uint *)(in_ECX + 0x4f4) | 1;
        FUN_00048030();
        return 0;
      }
    }
    else if ((bVar1) && (fVar4 = (float10)FUN_00012520(), (float10)1.0 < fVar4)) {
      fVar4 = (float10)FUN_00023900(0x3f000000,0x3f800000);
      FUN_000124f0((float)fVar4);
    }
switchD_00031465_caseD_3:
    return 0;
  case 0xe:
  case 0x55:
    break;
  default:
    goto switchD_00031414_caseD_f;
  case 0x10:
    iVar3 = FUN_0002f270(in_ECX + -0x40,*(undefined4 *)(in_ECX + 0x504),
                         *(undefined4 *)(in_ECX + 0x508),0);
    if (iVar3 == 0) {
      *(uint *)(in_ECX + 0x4f4) = *(uint *)(in_ECX + 0x4f4) | 1;
    }
    break;
  case 0x12:
    uVar2 = 1;
    switch(iVar3) {
    case 3:
    case 4:
    case 7:
    case 8:
      goto switchD_00031465_caseD_3;
    default:
      goto switchD_00031414_caseD_f;
    }
  case 0x18:
    if (bVar1) {
      fVar4 = (float10)FUN_00012520();
      if ((float10)2.0 < fVar4) {
        fVar4 = (float10)FUN_00023900(0x3f800000,0x40000000);
        FUN_000124f0((float)fVar4);
        return 1;
      }
    }
    else if ((iVar3 == 2) && (*(float *)(in_ECX + 0x4d4) < 1.5)) {
      *(undefined4 *)(in_ECX + 0x4d4) = 0x3fc00000;
      return 1;
    }
    break;
  case 0x21:
  case 0x22:
    FUN_000124f0(0x3e99999a);
    *(undefined4 *)(in_ECX + 0x364) = 0;
    *(undefined4 *)(in_ECX + 0x35c) = 0;
    *(byte *)(in_ECX + 0x360) = *(byte *)(in_ECX + 0x360) & 0xfa | 2;
    return 1;
  }
  uVar2 = 1;
switchD_00031414_caseD_f:
  return uVar2;
}
