/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 19F7DCC4D82FB03D39BF5D7D991C4D6A42CCD1A175E65E2E430AB68F228DDCB1
 * Entry: 0x002f5142, Ghidra index: 10890, label: FUN_002f5142
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003877d8;
extern uint32_t DAT_003877da;
extern uint32_t PTR_LAB_003877b4;
uint FUN_002f5142(undefined4 param_1,uint *param_2,uint param_3,undefined4 param_4,
                 undefined4 *param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  wchar_t *__src;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  undefined4 *puVar7;
  wchar_t local_154 [141];
  undefined1 local_3a [2];
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  uint local_24;
  int local_20;
  uint local_1c;
  int local_18;
  wchar_t *local_14;
  wchar_t *local_10;
  int local_c;
  uint local_8;
  
  local_8 = 0;
  local_c = 0;
  local_18 = 0;
  local_20 = 0;
  if (((param_3 == 0) && (param_3 = XAPILIB__XGetLanguage(), param_3 == 0)) || (0x13 < param_3)) {
    FUN_002ebe7a(&local_38,L"[Default]");
    local_8 = 2;
  }
  else {
    local_36 = *(undefined2 *)(&DAT_003877d8 + param_3 * 4);
    local_34 = *(undefined2 *)(&DAT_003877da + param_3 * 4);
    local_38 = 0x5b;
    local_32 = 0x5d;
    local_30 = 0;
  }
  local_1c = ~-(uint)(param_3 != 2) & 0x387804;
  iVar1 = FUN_002eaa70(param_4);
  do {
    pwVar6 = local_154;
    while( true ) {
      uVar2 = (int)(local_3a + -(int)pwVar6) >> 1;
      __src = local_154;
      if (uVar2 == 0) break;
      if (*param_2 >> 1 < uVar2) {
        uVar2 = *param_2 >> 1;
      }
      if ((uVar2 == 0) ||
         (iVar3 = XAPILIB__ReadFile(param_1,pwVar6,uVar2 * 2,&local_24,0), iVar3 == 0)) {
        local_24 = 0;
      }
      *param_2 = *param_2 - local_24;
      pwVar6 = (wchar_t *)((int)pwVar6 + (local_24 & 0xfffffffe));
      local_10 = pwVar6;
      if (local_24 == 0) {
        local_20 = 1;
        goto LAB_002f5241;
      }
      pwVar5 = local_154;
      while( true ) {
        __src = pwVar5;
        if (local_20 != 0) {
          return local_8 >> 2 & 1;
        }
        pwVar5 = local_10 + -2;
        pwVar6 = __src;
        while ((pwVar6 <= pwVar5 &&
               (iVar3 = _wcsncmp(pwVar6,(wchar_t *)&PTR_LAB_003877b4,2), iVar3 != 0))) {
          pwVar6 = pwVar6 + 1;
        }
        if (pwVar5 < pwVar6) break;
LAB_002f5241:
        *pwVar6 = L'\0';
        pwVar5 = pwVar6 + 2;
        local_14 = pwVar5;
        if (local_18 == 0) {
          if (*__src == L'[') {
            if (((byte)local_8 & 3) == 3) {
              return 0;
            }
            local_c = 0;
            iVar3 = __wcsicmp(__src,L"[Default]");
            if (iVar3 == 0) {
              local_8 = local_8 | 1;
              local_c = 1;
            }
            else {
              iVar3 = __wcsicmp(__src,&local_38);
              if ((iVar3 == 0) ||
                 ((local_1c != 0 && (iVar3 = __wcsicmp(__src,local_1c), iVar3 == 0)))) {
                local_8 = local_8 | 2;
                local_c = 1;
              }
            }
          }
          else if (((local_c != 0) && (iVar3 = __wcsnicmp(__src,param_4,iVar1), iVar3 == 0)) &&
                  (__src[iVar1] == L'=')) {
            uVar2 = ((int)pwVar6 - (int)__src >> 1) + (-1 - iVar1);
            if ((int)(param_6 - 1U) < (int)uVar2) {
              uVar2 = param_6 - 1U;
            }
            pwVar6 = __src + iVar1 + 1;
            puVar7 = param_5;
            for (uVar4 = (uVar2 & 0x7fffffff) >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
              *puVar7 = *(undefined4 *)pwVar6;
              pwVar6 = pwVar6 + 2;
              puVar7 = puVar7 + 1;
            }
            for (uVar4 = uVar2 * 2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(char *)puVar7 = (char)*pwVar6;
              pwVar6 = (wchar_t *)((int)pwVar6 + 1);
              puVar7 = (undefined4 *)((int)puVar7 + 1);
            }
            *(undefined2 *)(uVar2 * 2 + (int)param_5) = 0;
            if ((local_8 & 2) != 0) {
              return 1;
            }
            local_8 = local_8 | 4;
            pwVar5 = local_14;
          }
        }
        else {
          local_18 = 0;
        }
      }
      _memmove(local_154,__src,(int)local_10 - (int)__src);
      pwVar6 = local_10 + -((int)__src - (int)local_154 >> 1);
    }
    local_18 = 1;
  } while( true );
}
