/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6C5EDE006D5427E3CD1DFEF43F264786E95B420C31D6C0A679A8DD8072DEE6BB
 * Entry: 0x00350db4, Ghidra index: 13058, label: FUN_00350db4
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t switchD_00350e23_caseD_1[];
extern uint32_t switchD_00350f0b_caseD_5[];
void FUN_00350db4(char param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int in_ECX;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
LAB_00350dc4:
  cVar1 = *(char *)(in_ECX + 0x8c0);
  *(char *)(in_ECX + 0x8c0) = param_1;
  *(int *)(in_ECX + 0xa74) = *(int *)(in_ECX + 0xa74) + (uint)(param_1 != cVar1);
  if (param_2 == 0) {
    *(undefined1 *)(in_ECX + 0x8c1) = 0;
  }
  else if (*(char *)(in_ECX + 0x8c1) != -1) {
    *(char *)(in_ECX + 0x8c1) = *(char *)(in_ECX + 0x8c1) + '\x01';
  }
  FUN_003561a3(0,0);
  switch(*(undefined1 *)(in_ECX + 0x8c0)) {
  case 2:
  case 7:
  case 0xb:
    uVar9 = *(undefined4 *)(in_ECX + 0x8e8);
    uVar8 = *(undefined4 *)(in_ECX + 0x8e8);
    goto LAB_00350e9b;
  case 3:
    uVar9 = *(undefined4 *)(in_ECX + 0x900);
    uVar8 = *(undefined4 *)(in_ECX + 0x8e8);
LAB_00350e9b:
    FUN_003561a3(uVar8,uVar9);
    break;
  case 9:
    if ((*(char *)(in_ECX + 0x8c1) == '\0') &&
       (bVar2 = *(byte *)(in_ECX + 0x8c2), *(byte *)(in_ECX + 0x8c2) = bVar2 + 1,
       *(byte *)(in_ECX + 0x18) <= bVar2)) goto code_r0x00350e45;
  case 4:
  case 8:
  case 10:
  case 0xd:
  case 0xe:
  case 0xf:
    FUN_00350307();
    break;
  case 0xc:
    if ((*(byte *)(in_ECX + 0xa71) & 8) == 0) {
      *(byte *)(in_ECX + 0x8c4) = *(byte *)(in_ECX + 0x8c4) | 8;
      if (*(int *)(in_ECX + 0xaec) != 0) {
        KeSetEvent(*(int *)(in_ECX + 0xaec),1,0);
      }
    }
  case 0:
  case 5:
  case 0x16:
    FUN_0035005f();
    break;
  case 0x11:
    if ((*(char *)(in_ECX + 0x8c1) == '\0') &&
       (bVar2 = *(byte *)(in_ECX + 0x8c2), *(byte *)(in_ECX + 0x8c2) = bVar2 + 1,
       *(byte *)(in_ECX + 0x25) <= bVar2)) {
      FUN_00351884(0xc0000000);
      return;
    }
  case 0x12:
    FUN_003505eb();
    break;
  case 0x13:
  case 0x15:
    FUN_00350cd7();
    break;
  case 0x14:
    FUN_00350bc6();
  }
  goto switchD_00350e23_caseD_1;
code_r0x00350e45:
  *(uint *)(in_ECX + 0xa70) = *(uint *)(in_ECX + 0xa70) | 0xc0000000;
  param_2 = 0;
  param_1 = '\0';
  goto LAB_00350dc4;
switchD_00350e23_caseD_1:
  uVar5 = 0xffffffff;
  switch(*(char *)(in_ECX + 0x8c0)) {
  case '\x01':
  case '\x06':
  case '\x10':
    uVar5 = *(uint *)(in_ECX + 0x1d8);
    goto switchD_00350f0b_caseD_5;
  case '\x02':
  case '\x03':
  case '\a':
  case '\v':
    uVar5 = (uint)*(byte *)(in_ECX + 0x12);
    break;
  case '\x04':
  case '\b':
  case '\t':
  case '\n':
    uVar5 = (uint)*(byte *)(in_ECX + 0x1d);
    break;
  default:
    goto switchD_00350f0b_caseD_5;
  case '\f':
    uVar5 = *(int *)(in_ECX + 0x91c) * 5 + *(int *)(in_ECX + 0x918);
    goto switchD_00350f0b_caseD_5;
  case '\r':
  case '\x0e':
    uVar3 = *(uint *)(in_ECX + 0x1d8);
    if (*(char *)(in_ECX + 0x8c0) == '\r') {
      iVar6 = *(int *)(in_ECX + 0x920);
    }
    else {
      iVar6 = *(int *)(in_ECX + 0x924);
    }
    uVar7 = iVar6 * 5 + *(int *)(in_ECX + 0x918);
    uVar5 = uVar3;
    if (uVar3 < uVar7) {
      uVar5 = uVar7 - uVar3 >> 1;
      uVar4 = (uint)*(byte *)(in_ECX + 0x1f) * 5;
      if (uVar4 <= uVar5) {
        uVar4 = uVar5;
      }
      uVar5 = uVar3 + uVar4;
      if (uVar7 < uVar3 + uVar4) {
        uVar5 = uVar7;
      }
    }
    goto switchD_00350f0b_caseD_5;
  case '\x0f':
    uVar5 = (uint)*(byte *)(in_ECX + 0x24);
    break;
  case '\x11':
  case '\x12':
  case '\x13':
  case '\x14':
  case '\x15':
    uVar5 = (uint)*(byte *)(in_ECX + 0x2a);
  }
  uVar5 = uVar5 * 5 + *(int *)(in_ECX + 0x1d8);
switchD_00350f0b_caseD_5:
  if (uVar5 < *(uint *)(in_ECX + 0x1d8)) {
    uVar5 = *(uint *)(in_ECX + 0x1d8);
  }
  FUN_0034c35a(in_ECX + 0xa60,uVar5);
  return;
}
