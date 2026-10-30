/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 561576C8CC425B3658FFEDBC0EB95F4C098C3AD1E10FF9813BD3336EFBEF08A6
 * Entry: 0x00290810, Ghidra index: 9229, label: FUN_00290810
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
FUN_00290810(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)

{
  char in_AL;
  int iVar1;
  undefined4 uVar2;
  undefined4 in_ECX;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  
  if ((char)in_ECX != '\x01') {
    if ((char)in_ECX != '\0') {
      return 0;
    }
    if (in_AL == '\x01') {
      if (param_2 == 0x6677bcb) {
        iVar1 = FUN_002ea01d(0x14);
        if (iVar1 != 0) {
          uVar2 = FUN_00290f80(param_3,param_4,unaff_EBX,unaff_EDI,unaff_ESI,in_ECX);
          *param_5 = uVar2;
          return 1;
        }
        goto LAB_00290bd4;
      }
LAB_0029099b:
      if (param_2 != 0x6901441) {
        return 0;
      }
      iVar1 = FUN_002ea01d(0x14);
      if (iVar1 != 0) {
        uVar2 = FUN_00291750(param_3,param_4,unaff_EBX,unaff_EDI,unaff_ESI,in_ECX);
        *param_5 = uVar2;
        return 1;
      }
    }
    else {
      if (in_AL == '\0') {
        if (param_2 == 0x6677bcb) {
          iVar1 = FUN_002ea01d(0x14);
          if (iVar1 != 0) {
            uVar2 = FUN_002913d0(param_3,param_4,unaff_EBX,unaff_EDI,unaff_ESI,in_ECX);
            *param_5 = uVar2;
            return 1;
          }
          goto LAB_00290bd4;
        }
      }
      else {
        if (in_AL == '\x01') goto LAB_0029099b;
        if (in_AL != '\0') {
          return 0;
        }
      }
      if (param_2 == 0x6901441) {
        iVar1 = FUN_002ea01d(0x14);
        if (iVar1 != 0) {
          uVar2 = FUN_00291a90(param_3,param_4,unaff_EBX,unaff_EDI,unaff_ESI,in_ECX);
          *param_5 = uVar2;
          return 1;
        }
      }
      else if (param_2 == -0xc9277f0) {
        iVar1 = FUN_002ea01d(0x14);
        if (iVar1 != 0) {
          uVar2 = FUN_00291de0(param_3,param_4,unaff_EBX,unaff_EDI,unaff_ESI,in_ECX);
          *param_5 = uVar2;
          return 1;
        }
      }
      else if (param_2 == -0x1f4a9af5) {
        iVar1 = FUN_002ea01d(0x14);
        if (iVar1 != 0) {
          uVar2 = FUN_002920d0(param_3,param_4,unaff_EBX,unaff_EDI,unaff_ESI,in_ECX);
          *param_5 = uVar2;
          return 1;
        }
      }
      else {
        if (param_2 != -0x12663f7) {
          return 0;
        }
        iVar1 = FUN_002ea01d(0x14);
        if (iVar1 != 0) {
          uVar2 = FUN_00292290(param_3,param_4,unaff_EBX,unaff_EDI,unaff_ESI,in_ECX);
          *param_5 = uVar2;
          return 1;
        }
      }
    }
LAB_00290bd4:
    *param_5 = 0;
    return 1;
  }
  if (in_AL == '\x01') {
    if (param_2 == 0x6677bcb) {
      iVar1 = FUN_002ea01d(0x14);
      if (iVar1 != 0) {
        uVar2 = FUN_00290d10(param_3,param_4,unaff_EBX,unaff_EDI,unaff_ESI,in_ECX);
        *param_5 = uVar2;
        return 1;
      }
      goto LAB_00290b8f;
    }
LAB_00290953:
    if (param_2 != 0x6901441) {
      return 0;
    }
    iVar1 = FUN_002ea01d(0x14);
    if (iVar1 != 0) {
      uVar2 = FUN_00291530(param_3,param_4,unaff_EBX,unaff_EDI,unaff_ESI,in_ECX);
      *param_5 = uVar2;
      return 1;
    }
  }
  else {
    if (in_AL == '\0') {
      if (param_2 == 0x6677bcb) {
        iVar1 = FUN_002ea01d(0x14);
        if (iVar1 != 0) {
          uVar2 = FUN_00291190(param_3,param_4,unaff_EBX,unaff_EDI,unaff_ESI,in_ECX);
          *param_5 = uVar2;
          return 1;
        }
        goto LAB_00290b8f;
      }
    }
    else {
      if (in_AL == '\x01') goto LAB_00290953;
      if (in_AL != '\0') {
        return 0;
      }
    }
    if (param_2 == 0x6901441) {
      iVar1 = FUN_002ea01d(0x14);
      if (iVar1 != 0) {
        uVar2 = FUN_00291870(param_3,param_4,unaff_EBX,unaff_EDI,unaff_ESI,in_ECX);
        *param_5 = uVar2;
        return 1;
      }
    }
    else if (param_2 == -0xc9277f0) {
      iVar1 = FUN_002ea01d(0x14);
      if (iVar1 != 0) {
        uVar2 = FUN_00291b90(param_3,param_4,unaff_EBX,unaff_EDI,unaff_ESI,in_ECX);
        *param_5 = uVar2;
        return 1;
      }
    }
    else if (param_2 == -0x1f4a9af5) {
      iVar1 = FUN_002ea01d(0x14);
      if (iVar1 != 0) {
        uVar2 = FUN_00291ed0(param_3,param_4,unaff_EBX,unaff_EDI,unaff_ESI,in_ECX);
        *param_5 = uVar2;
        return 1;
      }
    }
    else {
      if (param_2 != -0x12663f7) {
        return 0;
      }
      iVar1 = FUN_002ea01d(0x14);
      if (iVar1 != 0) {
        uVar2 = FUN_00292180(param_3,param_4,unaff_EBX,unaff_EDI,unaff_ESI,in_ECX);
        *param_5 = uVar2;
        return 1;
      }
    }
  }
LAB_00290b8f:
  *param_5 = 0;
  return 1;
}
