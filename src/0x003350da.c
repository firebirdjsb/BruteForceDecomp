/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C468F7D851362429050D95D958AE93439BA2277DD845BAA10CAB170244B1F822
 * Entry: 0x003350da, Ghidra index: 12422, label: FUN_003350da
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* These addresses have matching definitions in current recovered C drafts.
 * Indirect-call ABI and 32-bit pointer storage remain ABI_UNVERIFIED. */
extern void FUN_00334dca(int param_1);
extern void FUN_00335070(int param_1);
int FUN_003350da(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  undefined4 *puVar6;
  undefined4 local_1d0 [112];
  undefined4 *local_10;
  int *local_c;
  int local_8;
  
  if (in_ECX == 0) {
    return -0x7feafffb;
  }
  *param_3 = 0;
  local_8 = in_ECX;
  puVar2 = (undefined4 *)FUN_0033e9b3(0x280,0x8044);
  if (puVar2 == (undefined4 *)0x0) {
    return -0x7feafff8;
  }
  local_c = (int *)(local_8 + 0x12c4);
  iVar5 = *local_c;
  if (iVar5 == 0) {
    *local_c = (int)puVar2;
    iVar5 = 0;
  }
  local_10 = puVar2;
  if (iVar5 != 0) {
    thunk_FUN_0033e986(puVar2,0x8044);
    return -0x7feafff7;
  }
  *(undefined4 *)(local_8 + 0x12c8) = 1;
  FUN_00330c2d(puVar2);
  *puVar2 = FUN_00334dca;
  puVar2[1] = FUN_00335070;
  puVar2[2] = param_2;
  puVar2[0x57] = 0;
  puVar2[0x58] = 0;
  cVar1 = *(char *)(local_8 + 0x84);
  if (cVar1 == '\0') {
    uVar3 = XAPILIB__XGetGameRegion();
    if ((uVar3 & 4) == 0) {
      cVar1 = (-((uVar3 & 2) != 0) & 0xceU) + 0x67;
    }
    else {
      cVar1 = '#';
    }
  }
  puVar2[0x9a] = *(undefined4 *)(local_8 + 4);
  *(char *)(puVar2 + 0x9f) = cVar1;
  uVar4 = XAPILIB__XGetParentalControlSetting();
  puVar2[0x9b] = uVar4;
  puVar2[0x9c] = param_1;
  iVar5 = FUN_00330f79();
  if (iVar5 == 0) {
    puVar6 = local_1d0;
    for (iVar5 = 0x70; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    local_c = (int *)0x4;
    iVar5 = XONLINES__CXo_XOnlineLogon(local_1d0,&local_c,1,puVar2[2],puVar2 + 0x52);
    if (iVar5 < 0) goto LAB_00335249;
  }
  iVar5 = FUN_0033ddf6(5,0,param_2,0,puVar2 + 0x54,puVar2 + 0x53);
  if (-1 < iVar5) {
    puVar2[0x55] = 1;
    *param_3 = puVar2;
    return 0;
  }
LAB_00335249:
  FUN_00335070(puVar2);
  *param_3 = 0;
  return iVar5;
}
