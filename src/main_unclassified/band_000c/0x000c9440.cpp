/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5B3ED6018FBCF52BD2CC33F82B683E1C49A3E82621920D5E6B4EC7443E871A0B
 * Entry: 0x000c9440, Ghidra index: 2487, label: FUN_000c9440
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* 0x002ea96c: original cdecl CRT copy, verified 16-bit guest code units. */
extern uint16_t * __cdecl _wcsncpy(uint16_t *,uint16_t *,size_t);
/* 0x002fe931: original 16-bit guest-unit in-place transform. */
extern void FUN_002fe931(uint16_t *);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a5c90;
extern uint32_t DAT_004a5c91;
extern uint32_t DAT_004a5c92;
extern uint32_t DAT_004a5c93;
extern uint32_t _DAT_004a5c94;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c9440(int *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  char cVar5;
  uint16_t *__src;
  /* Original 0x000c9440 SUB ESP,0x200 reserves 512 guest bytes.
   * 0x000c94a9 LEA EDX,[ESP+0x18] addresses its beginning after
   * the saved registers and two outgoing arguments.  0x000c94b3,
   * 0x000c94cc and 0x000c94fd address the same guest buffer.
   * Xbox wide characters are 16-bit, not host wchar_t-sized.
   * ABI_UNVERIFIED: guest pointers, virtual calls and host execution. */
  uint16_t guest_utf16_stack[256];
  int iVar6;
  undefined1 *puVar7;
  size_t __n;
  
  fVar1 = (float)param_1[0x13] / (float)param_1[0x15];
  if (1.0 < fVar1) {
    fVar1 = 1.0;
  }
  fVar1 = 1.0 - fVar1;
  (**(code **)(*param_1 + 0x1c))
            (fVar1 * (float)param_1[0x18] * fVar1 * fVar1 + (float)param_1[0x17]);
  __n = 0x100;
  __src = (uint16_t *)FUN_001e97c0();
  _wcsncpy(guest_utf16_stack,__src,__n);
  FUN_002fe931(guest_utf16_stack);
  cVar5 = FUN_000c9920();
  if (cVar5 != '\0') {
    fVar1 = (float)param_1[6];
    iVar6 = param_1[0xb];
    *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xe7;
    fVar2 = *(float *)(iVar6 + 0x40);
    *(float *)(iVar6 + 0x40) = fVar1;
    if (fVar1 != fVar2) {
      FUN_000c9890(iVar6);
    }
    (**(code **)(*param_1 + 0x30))(guest_utf16_stack);
  }
  *(undefined1 *)(param_1 + 0x19) = 1;
  param_1[0x13] = (int)((float)param_1[0x14] + (float)param_1[0x15]);
  if (param_1[10] == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = param_1[10] + -0x2c;
  }
  if (param_1 == *(int **)(iVar6 + 0x68)) {
    if ((_DAT_004a5c94 & 1) == 0) {
      _DAT_004a5c94 = _DAT_004a5c94 | 1;
      DAT_004a5c90 = 0x3c;
      DAT_004a5c91 = 0x69;
      DAT_004a5c92 = 0xdc;
      DAT_004a5c93 = 0xff;
    }
    uVar4 = DAT_004a5c92;
    uVar3 = DAT_004a5c91;
    iVar6 = param_1[0xb];
    *(undefined1 *)(iVar6 + 0x38) = DAT_004a5c90;
    *(undefined1 *)(iVar6 + 0x3a) = uVar3;
    *(undefined1 *)(iVar6 + 0x39) = uVar4;
    return;
  }
  puVar7 = (undefined1 *)FUN_000b87e0();
  uVar3 = puVar7[2];
  uVar4 = puVar7[1];
  iVar6 = param_1[0xb];
  *(undefined1 *)(iVar6 + 0x38) = *puVar7;
  *(undefined1 *)(iVar6 + 0x3a) = uVar4;
  *(undefined1 *)(iVar6 + 0x39) = uVar3;
  return;
}
