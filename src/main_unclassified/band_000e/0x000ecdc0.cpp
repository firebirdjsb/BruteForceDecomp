/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D7726414B1BB55CE05EEA7396D7D80E56A6231CC5B3957AA1BF2CE1BE4A1F4FA
 * Entry: 0x000ecdc0, Ghidra index: 2943, label: FUN_000ecdc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_x86_word_lanes.h"
char FUN_000ecdc0(undefined4 param_1,int *param_2,ushort *param_3)

{
  int iVar1;
  int *piVar2;
  ushort *puVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int in_ECX;
  uint uVar8;
  /* The original guest second-argument DWORD is a writable AL flag slot.
   * EBX retains the independent pointer to the input field descriptor.
   * Do not modify an eight-byte host pointer to simulate a four-byte guest word. */
  uint32_t guest_arg2_word = (uint32_t)(uintptr_t)param_2;
  
  puVar3 = param_3;
  piVar2 = param_2;
  cVar4 = '\0';
  if (*param_2 == -0x1fd00968) {
    if ((char)param_1 == '\0') {
      *(undefined4 *)(in_ECX + 4) = *(undefined4 *)param_3;
    }
    else {
      *(undefined4 *)param_3 = *(undefined4 *)(in_ECX + 4);
    }
    cVar4 = '\x01';
  }
  if (cVar4 == '\0') {
    iVar1 = *param_2;
    iVar6 = *(int *)(in_ECX + 0x24) << 0x14;
    uVar7 = iVar6 >> 0x14;
    guest_arg2_word = bf_x86_word_replace_lo8(guest_arg2_word,UINT8_C(0));
    if (iVar1 == -0xc2298b0) {
      if ((char)param_1 == '\0') {
        uVar7 = (uint)*param_3;
      }
      else {
        *param_3 = (ushort)(iVar6 >> 0x14);
      }
      guest_arg2_word = bf_x86_word_replace_lo8(guest_arg2_word,UINT8_C(1));
      if ((char)param_1 == '\0') {
        *(uint *)(in_ECX + 0x24) =
             *(uint *)(in_ECX + 0x24) ^ (uVar7 ^ *(uint *)(in_ECX + 0x24)) & 0xfff;
      }
    }
    param_3 = (ushort *)0xfaa0fdf6;
    FUN_000ee450(param_1,&param_3,piVar2);
    if (((char)(uint8_t)guest_arg2_word == '\0') && (*piVar2 == -0x19a9b176)) {
      if ((char)param_1 == '\0') {
        *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)puVar3;
      }
      else {
        *(undefined4 *)puVar3 = *(undefined4 *)(in_ECX + 0x20);
      }
      guest_arg2_word = bf_x86_word_replace_lo8(guest_arg2_word,UINT8_C(1));
      if ((((char)param_1 == '\0') && (0.0 <= *(float *)(in_ECX + 0x20))) &&
         (*(float *)(in_ECX + 0x20) < 0.25)) {
        *(undefined4 *)(in_ECX + 0x20) = 0x3e99999a;
      }
    }
    uVar7 = (*(uint *)(in_ECX + 0x24) & 0x4000) >> 0xe;
    if (((char)(uint8_t)guest_arg2_word == '\0') && (*piVar2 == 0xbb771a2)) {
      if ((char)param_1 == '\0') {
        uVar7 = (uint)(byte)*puVar3;
      }
      else {
        *(byte *)puVar3 = (byte)uVar7;
      }
      guest_arg2_word = bf_x86_word_replace_lo8(guest_arg2_word,UINT8_C(1));
    }
    uVar8 = *(uint *)(in_ECX + 0x24) ^ (uVar7 << 0xe ^ *(uint *)(in_ECX + 0x24)) & 0x4000;
    uVar7 = (uVar8 & 0x2000) >> 0xd;
    *(uint *)(in_ECX + 0x24) = uVar8;
    if (((char)(uint8_t)guest_arg2_word == '\0') && (*piVar2 == 0x9aeb0fa)) {
      if ((char)param_1 == '\0') {
        uVar7 = (uint)(byte)*puVar3;
      }
      else {
        *(byte *)puVar3 = (byte)uVar7;
      }
      guest_arg2_word = bf_x86_word_replace_lo8(guest_arg2_word,UINT8_C(1));
    }
    uVar8 = *(uint *)(in_ECX + 0x24) ^ (uVar7 << 0xd ^ *(uint *)(in_ECX + 0x24)) & 0x2000;
    uVar7 = (uVar8 & 0x8000) >> 0xf;
    *(uint *)(in_ECX + 0x24) = uVar8;
    if (((char)(uint8_t)guest_arg2_word == '\0') && (*piVar2 == 0x1346678f)) {
      if ((char)param_1 == '\0') {
        uVar7 = (uint)(byte)*puVar3;
      }
      else {
        *(byte *)puVar3 = (byte)uVar7;
      }
      guest_arg2_word = bf_x86_word_replace_lo8(guest_arg2_word,UINT8_C(1));
    }
    *(uint *)(in_ECX + 0x24) =
         *(uint *)(in_ECX + 0x24) ^ (uVar7 << 0xf ^ *(uint *)(in_ECX + 0x24)) & 0x8000;
    param_3 = (ushort *)0xe3439383;
    FUN_0020d220(*(undefined4 *)(in_ECX + 0x10),param_1,&param_3,in_ECX + 0x2c,piVar2,(char *)&guest_arg2_word,2);
    cVar4 = (char)(uint8_t)guest_arg2_word;
    if ((((*piVar2 == -0x12958b70) && ((char)param_1 == '\0')) && (puVar3 != (ushort *)0x0)) &&
       (cVar5 = FUN_0001bb00(), cVar4 = (char)(uint8_t)guest_arg2_word, cVar5 == '\0')) {
      *(uint *)(in_ECX + 0x28) = *(uint *)(in_ECX + 0x28) | 0x10;
    }
  }
  return cVar4;
}
