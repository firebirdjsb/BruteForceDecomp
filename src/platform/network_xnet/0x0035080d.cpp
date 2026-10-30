/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FA754CDAFB2296E99DF36C6931F5D6536EC67A9A9A8ADD6B14E29F66510BA429
 * Entry: 0x0035080d, Ghidra index: 13053, label: FUN_0035080d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0035080d(char *param_1,short param_2,char param_3,undefined4 *param_4,int param_5)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ushort uVar7;
  undefined4 uVar8;
  int iVar9;
  int in_ECX;
  undefined1 *puVar10;
  byte bVar11;
  undefined4 *puVar12;
  
  bVar1 = param_1[1];
  cVar2 = *param_1;
  if (param_4 == (undefined4 *)0x0) {
    puVar10 = (undefined1 *)0x0;
  }
  else {
    puVar10 = (undefined1 *)*param_4;
  }
  if (param_2 != 0x21c0) {
    if (param_3 == '\x01') {
      if (cVar2 != '\x03') {
        return 1;
      }
      if (bVar1 == 6) {
        return 3;
      }
    }
    else {
      if (cVar2 == '\x03') {
        puVar12 = (undefined4 *)(in_ECX + 0x8e8);
        bVar11 = 0x10;
      }
      else {
        if ((cVar2 != -0x7f) && (cVar2 != -0x7d)) {
          return 1;
        }
        bVar11 = ((cVar2 != -0x7f) - 1U & 0xe0) + 0x40;
        puVar12 = (undefined4 *)(in_ECX + 0x8f0 + (uint)(cVar2 != -0x7f) * 4);
      }
      if (bVar1 == 6) {
        if (param_5 == 0) {
          return 3;
        }
        uVar8 = *(undefined4 *)(param_1 + 2);
        if (param_3 == '\x02') {
          return 3;
        }
        if ((param_3 != '\x04') && (iVar9 = FUN_0034cc6e(), iVar9 != 0)) {
          *puVar12 = uVar8;
          return 3;
        }
        *(byte *)(in_ECX + 0xa31) = *(byte *)(in_ECX + 0xa31) | bVar11;
        return 3;
      }
    }
    return 0;
  }
  if (cVar2 == '\x01') {
    if (bVar1 != 4) {
      return 0;
    }
    uVar7 = CONCAT11((char)*(undefined2 *)(param_1 + 2),
                     (char)((ushort)*(undefined2 *)(param_1 + 2) >> 8));
    if (param_3 != '\x01') {
      if (param_5 == 0) {
        return 3;
      }
      if (param_3 == '\x02') {
        return 3;
      }
      if ((param_3 != '\x04') && (uVar7 < 0x5d5)) {
        *(ushort *)(in_ECX + 0xa36) = uVar7;
        return 3;
      }
      *(byte *)(in_ECX + 0xa31) = *(byte *)(in_ECX + 0xa31) | 2;
      return 3;
    }
    if (param_5 == 0) {
      return 3;
    }
    if (puVar10 != (undefined1 *)0x0) {
      return 3;
    }
    *(ushort *)(in_ECX + 0xa38) = uVar7;
    return 3;
  }
  if (cVar2 == '\x05') {
    if (bVar1 != 6) {
      return 0;
    }
    uVar3 = *(uint *)(param_1 + 2);
    if (param_3 != '\x01') {
      if (param_5 == 0) {
        return 3;
      }
      if (param_3 == '\x02') {
        return 3;
      }
      if (param_3 == '\x04') {
        *(byte *)(in_ECX + 0xa31) = *(byte *)(in_ECX + 0xa31) | 1;
        return 3;
      }
      uVar8 = FUN_0034c812();
      *(undefined4 *)(in_ECX + 0xa3c) = uVar8;
      return 3;
    }
    if (uVar3 != *(uint *)(in_ECX + 0xa3c)) {
      if (param_5 == 0) {
        return 3;
      }
      if (puVar10 != (undefined1 *)0x0) {
        return 3;
      }
      *(uint *)(in_ECX + 0xa40) = uVar3;
      return 3;
    }
    if (puVar10 == (undefined1 *)0x0) {
      return 2;
    }
    *puVar10 = 5;
    puVar10[1] = 6;
    *(uint *)(puVar10 + 2) = ~uVar3;
    puVar10 = puVar10 + 6;
  }
  else {
    if (param_3 != '\x01') {
      return 1;
    }
    if (cVar2 != '\x03') {
      return 1;
    }
    if (bVar1 < 4) {
      return 0;
    }
    if ((bVar1 == 4) && (*(short *)(param_1 + 2) == 0x23c0)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
      if ((bVar1 == 5) && ((*(short *)(param_1 + 2) == 0x23c2 && (param_1[4] == '\x05')))) {
        bVar6 = true;
        bVar5 = bVar4;
        goto LAB_003509ad;
      }
    }
    bVar6 = false;
    bVar5 = true;
    if (bVar4) {
LAB_003509ad:
      if ((param_5 != 0) && (puVar10 == (undefined1 *)0x0)) {
        *(byte *)(in_ECX + 0xa31) =
             !bVar6 - 1U & 8 | !bVar5 - 1U & 4 | *(byte *)(in_ECX + 0xa31) & 0xc;
      }
      return 3;
    }
    if (puVar10 == (undefined1 *)0x0) {
      return 2;
    }
    *puVar10 = 3;
    puVar10[1] = 5;
    *(undefined2 *)(puVar10 + 2) = 0x23c2;
    puVar10[4] = 5;
    puVar10 = puVar10 + 5;
  }
  *param_4 = puVar10;
  return 2;
}
