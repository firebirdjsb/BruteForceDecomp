/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 320CB01D45AE02FDBF082D43FA39528FC938D04D609B4D392D64629472DBA284
 * Entry: 0x00202f40, Ghidra index: 7278, label: FUN_00202f40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_00202f40(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  char cVar4;
  int in_ECX;
  
  puVar3 = param_3;
  piVar2 = param_2;
  uVar1 = param_1;
  cVar4 = FUN_001fedb0(param_1,param_2,param_3);
  param_3._0_1_ = cVar4;
  if (cVar4 == '\0') {
    cVar4 = (char)uVar1;
    param_3._0_1_ = '\0';
    if (*piVar2 == -0x17bae799) {
      if (cVar4 == '\0') {
        *(undefined4 *)(in_ECX + 0x40) = *puVar3;
      }
      else {
        *puVar3 = *(undefined4 *)(in_ECX + 0x40);
      }
      param_3._0_1_ = '\x01';
    }
    param_1 = 0xe36da225;
    FUN_000ee560(*(undefined4 *)(in_ECX + 0x10),uVar1,&param_1,piVar2,0);
    if (((char)param_3 == '\0') && (*param_2 == -0x1cafaaf)) {
      if (cVar4 == '\0') {
        *(undefined4 *)(in_ECX + 0x54) = *puVar3;
      }
      else {
        *puVar3 = *(undefined4 *)(in_ECX + 0x54);
      }
      param_3._0_1_ = '\x01';
    }
    param_1 = 0x32d173b;
    FUN_000ee560(*(undefined4 *)(in_ECX + 0x10),uVar1,&param_1,param_2,0);
    param_1 = 0xfe604ae;
    FUN_000ee560(*(undefined4 *)(in_ECX + 0x10),uVar1,&param_1,param_2,2);
    if (((char)param_3 == '\0') && (*param_2 == 0x1d05c4b2)) {
      if (cVar4 != '\0') {
        *puVar3 = *(undefined4 *)(in_ECX + 0x60);
        return '\x01';
      }
      *(undefined4 *)(in_ECX + 0x60) = *puVar3;
      param_3._0_1_ = '\x01';
    }
  }
  return (char)param_3;
}
