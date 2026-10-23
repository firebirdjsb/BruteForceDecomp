/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EA4D018D6A683E32995E1E8536304DAA852ACC4AB4130CD4D1FFB47971B3478F
 * Entry: 0x002ecc6d, Ghidra index: 10674, label: __openfile
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040f570;
extern uint32_t _DAT_0040f4d0;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __openfile
   
   Library: Visual Studio 2003 Release */

undefined4 * __openfile(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  cVar1 = *param_2;
  bVar4 = false;
  bVar3 = false;
  if (cVar1 == 'a') {
    uVar6 = 0x109;
  }
  else {
    if (cVar1 == 'r') {
      uVar6 = 0;
      uVar7 = DAT_0040f570 | 1;
      goto LAB_002eccae;
    }
    if (cVar1 != 'w') {
      return (undefined4 *)0x0;
    }
    uVar6 = 0x301;
  }
  uVar7 = DAT_0040f570 | 2;
LAB_002eccae:
  bVar2 = true;
LAB_002ecd8d:
  param_2 = param_2 + 1;
  cVar1 = *param_2;
  if ((cVar1 == '\0') || (!bVar2)) {
    iVar5 = FUN_002f0937(param_1,uVar6,param_3,0x1a4);
    if (iVar5 < 0) {
      return (undefined4 *)0x0;
    }
    _DAT_0040f4d0 = _DAT_0040f4d0 + 1;
    param_4[3] = uVar7;
    param_4[1] = 0;
    *param_4 = 0;
    param_4[2] = 0;
    param_4[7] = 0;
    param_4[4] = iVar5;
    return param_4;
  }
  if (cVar1 < 'U') {
    if (cVar1 == 'T') {
      if ((uVar6 & 0x1000) == 0) {
        uVar6 = uVar6 | 0x1000;
        goto LAB_002ecd8d;
      }
    }
    else if (cVar1 == '+') {
      if ((uVar6 & 2) == 0) {
        uVar6 = uVar6 & 0xfffffffe | 2;
        uVar7 = uVar7 & 0xfffffffc | 0x80;
        goto LAB_002ecd8d;
      }
    }
    else if (cVar1 == 'D') {
      if ((uVar6 & 0x40) == 0) {
        uVar6 = uVar6 | 0x40;
        goto LAB_002ecd8d;
      }
    }
    else if (cVar1 == 'R') {
      if (!bVar3) {
        bVar3 = true;
        uVar6 = uVar6 | 0x10;
        goto LAB_002ecd8d;
      }
    }
    else if ((cVar1 == 'S') && (!bVar3)) {
      bVar3 = true;
      uVar6 = uVar6 | 0x20;
      goto LAB_002ecd8d;
    }
  }
  else {
    if (cVar1 == 'b') {
      if ((uVar6 & 0xc000) != 0) goto LAB_002ecd6f;
      uVar6 = uVar6 | 0x8000;
      goto LAB_002ecd8d;
    }
    if (cVar1 == 'c') {
      if (!bVar4) {
        bVar4 = true;
        uVar7 = uVar7 | 0x4000;
        goto LAB_002ecd8d;
      }
    }
    else {
      if (cVar1 != 'n') {
        if ((cVar1 != 't') || ((uVar6 & 0xc000) != 0)) goto LAB_002ecd6f;
        uVar6 = uVar6 | 0x4000;
        goto LAB_002ecd8d;
      }
      if (!bVar4) {
        bVar4 = true;
        uVar7 = uVar7 & 0xffffbfff;
        goto LAB_002ecd8d;
      }
    }
  }
LAB_002ecd6f:
  bVar2 = false;
  goto LAB_002ecd8d;
}
