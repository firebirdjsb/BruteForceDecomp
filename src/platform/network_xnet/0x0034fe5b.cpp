/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 895869222DEDE73CB844D517EEDF440C5E4D1FE3A496F8F455F68E03B177C3C9
 * Entry: 0x0034fe5b, Ghidra index: 13043, label: FUN_0034fe5b
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_0034fe5b(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  undefined1 local_104 [128];
  undefined1 local_84 [128];
  
  if ((param_2 == 0) || (param_4 == 0)) {
    bVar4 = param_2 == param_4;
  }
  else {
    uVar1 = XAPILIB__MultiByteToWideChar(0xfde9,0,param_1,param_2,local_104,0x40);
    uVar1 = uVar1 >> 1;
    uVar2 = XAPILIB__MultiByteToWideChar(0xfde9,0,param_3,param_4,local_84,0x40);
    if (((uVar1 == uVar2 >> 1) && (uVar1 < 0x41)) &&
       (iVar3 = __wcsnicmp(local_104,local_84,uVar1), iVar3 == 0)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
  }
  return bVar4;
}
