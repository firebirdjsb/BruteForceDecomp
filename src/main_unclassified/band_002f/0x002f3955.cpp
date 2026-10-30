/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F90DA1FACE4886706CCB965F96047A24E318B7E80014BE7F0FD41C93F90850C6
 * Entry: 0x002f3955, Ghidra index: 10843, label: FUN_002f3955
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0038754c;
undefined4 FUN_002f3955(undefined4 param_1,wchar_t *param_2,wchar_t *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  wchar_t *pwVar3;
  uint uVar4;
  wchar_t *pwVar5;
  size_t sVar6;
  uint uVar7;
  size_t __n;
  wchar_t local_134 [2];
  undefined1 auStack_130 [276];
  undefined2 local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  wchar_t *local_8;
  
  bVar1 = false;
  local_14 = 0;
  pwVar5 = local_134;
  local_8 = (wchar_t *)0x8c;
  local_c = 0;
  local_18 = FUN_002eaa70(param_2);
  local_1c = 0;
  do {
    if (local_c == 0) {
      iVar2 = XAPILIB__ReadFile(param_1,pwVar5,(int)local_8 * 2,&local_10,0);
      if (iVar2 == 0) {
        return local_14;
      }
      if (local_10 == 0) {
        return local_14;
      }
    }
    local_c = 0;
    uVar7 = local_10 + ((int)pwVar5 - (int)local_134 >> 1) * 2;
    if (bVar1) {
      pwVar3 = _wcsstr(local_134,(wchar_t *)&PTR_LAB_0038754c);
      pwVar5 = local_134;
      local_8 = (wchar_t *)0x8c;
      if (pwVar3 != (wchar_t *)0x0) {
        uVar4 = (int)pwVar3 + (4 - (int)local_134);
        if (uVar4 < uVar7) {
          uVar7 = uVar7 - uVar4;
          _memmove(local_134,auStack_130 + (uVar4 - 4),uVar7);
          pwVar5 = (wchar_t *)((int)local_134 + uVar7);
          local_8 = (wchar_t *)(0x8c - (uVar7 >> 1));
        }
        bVar1 = false;
      }
    }
    else {
      pwVar3 = _wcsstr(local_134,param_2);
      if ((pwVar3 == (wchar_t *)0x0) || (pwVar3[local_18] != L'=')) {
        bVar1 = true;
        local_c = 1;
      }
      else {
        pwVar3 = pwVar3 + local_18 + 1;
        local_8 = pwVar3;
        pwVar5 = _wcsstr(pwVar3,(wchar_t *)&PTR_LAB_0038754c);
        if (pwVar5 != (wchar_t *)0x0) {
          sVar6 = (int)pwVar5 - (int)pwVar3 >> 1;
          __n = param_4 - 1U;
          if ((int)sVar6 <= (int)(param_4 - 1U)) {
            __n = sVar6;
          }
          _wcsncpy(param_3,local_8,__n);
          param_3[__n] = L'\0';
          uVar4 = (int)pwVar5 + (4 - (int)local_134);
          if (uVar4 < uVar7) {
            XAPILIB__SetFilePointer(param_1,uVar4 - uVar7,0,1);
          }
          return 1;
        }
        bVar1 = true;
        pwVar5 = local_134;
        local_8 = (wchar_t *)0x8c;
      }
    }
  } while( true );
}
