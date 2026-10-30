/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F2B99B839D3EF97C1DEB628C538556BA9FAEBE3FF8EA5A0C594E86A7D2DE3C2C
 * Entry: 0x002f4f5c, Ghidra index: 10882, label: MultiByteToWideChar
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint XAPILIB__MultiByteToWideChar
               (int param_1,undefined4 param_2,char *param_3,int param_4,undefined4 param_5,
               int param_6)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  short local_14;
  short local_12;
  undefined4 local_10;
  short local_c;
  undefined2 local_a;
  char *local_8;
  
  if (param_1 == 65000) {
    SetLastError(0x57);
    uVar2 = 0;
  }
  else if (param_1 == 0xfde9) {
    uVar2 = FUN_002f4e06(param_3,param_4,param_5,param_6);
  }
  else {
    if (param_4 == -1) {
      pcVar3 = param_3;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      param_4 = (int)pcVar3 - (int)(param_3 + 1);
    }
    uVar2 = param_4 + 1;
    if (param_6 == 0) {
      uVar2 = uVar2 & 0xffff;
    }
    else {
      if (param_6 < (int)(uVar2 & 0xffff)) {
        uVar5 = 0x7a;
      }
      else {
        local_a = (undefined2)uVar2;
        local_10 = param_5;
        local_c = (short)param_4;
        local_14 = local_c * 2;
        local_12 = (short)param_6 * 2;
        local_8 = param_3;
        iVar4 = RtlAnsiStringToUnicodeString(&local_14,&local_c,0);
        if (-1 < iVar4) {
          return uVar2 & 0xffff;
        }
        uVar5 = RtlNtStatusToDosError(iVar4);
      }
      SetLastError(uVar5);
      uVar2 = 0;
    }
  }
  return uVar2;
}
