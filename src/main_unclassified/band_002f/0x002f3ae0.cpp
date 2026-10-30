/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9CEFC61C5121A5FD8D8F0D27B09B5F686616B9263D1D1FE9322683D7235DD343
 * Entry: 0x002f3ae0, Ghidra index: 10844, label: FUN_002f3ae0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002f3ae0(uint *param_1,char *param_2,int param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  char *pcVar6;
  uint *puVar7;
  int local_8;
  
  local_8 = 0;
  if ((*param_1 & 0x10) == 0) {
    local_8 = 0;
  }
  else {
    puVar7 = param_1 + 0xb;
    iVar1 = (int)param_1 + 0x2d;
    puVar4 = puVar7;
    do {
      uVar3 = *puVar4;
      puVar4 = (uint *)((int)puVar4 + 1);
    } while ((char)uVar3 != '\0');
    iVar5 = 0x140 - (int)param_2;
    do {
      cVar2 = *param_2;
      param_2[(int)param_1 + iVar5] = cVar2;
      param_2 = param_2 + 1;
    } while (cVar2 != '\0');
    iVar5 = (param_3 + 0x140) - (int)puVar7;
    do {
      uVar3 = *puVar7;
      *(char *)((int)param_1 + iVar5 + (int)puVar7) = (char)uVar3;
      puVar7 = (uint *)((int)puVar7 + 1);
    } while ((char)uVar3 != '\0');
    pcVar6 = (char *)((int)puVar4 + (param_3 - iVar1));
    if (pcVar6 < (char *)0x103) {
      *(char *)((int)param_1 + (int)((int)puVar4 + (param_3 - iVar1) + 0x141)) = '\0';
      *(char *)((int)param_1 + (int)((int)puVar4 + (param_3 - iVar1) + 0x140)) = '\\';
    }
    if ((int)pcVar6 < 0xf7) {
      pcVar6 = "\\SaveMeta.xbx";
      do {
        cVar2 = *pcVar6;
        pcVar6[(int)((int)param_1 + (int)((int)puVar4 + (param_3 - iVar1) + -0x387354))] = cVar2;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      iVar5 = FUN_002f2b3f(param_1 + 0x50,0x80000000,1,0,3,0x80,0);
      if (iVar5 != -1) {
        local_8 = FUN_002f390d(iVar5,1);
        if (local_8 != 0) {
          local_8 = FUN_002f3955(iVar5,L"Name",param_1 + 0x91,0x80);
        }
        XAPILIB__CloseHandle(iVar5);
      }
      *(char *)((int)param_1 + (int)((int)puVar4 + (param_3 - iVar1) + 0x141)) = '\0';
    }
  }
  return local_8;
}
