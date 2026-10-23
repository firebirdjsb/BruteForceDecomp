/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 47C260423CC5AD7EE438A84228201F3C1A94CA10C72527B757982575F690BC29
 * Entry: 0x00314a61, Ghidra index: 12080, label: FUN_00314a61
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00314a61(undefined4 param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_ECX;
  uint local_8;
  
  iVar2 = param_4;
  iVar1 = param_2;
  local_8 = 0;
  iVar3 = XAPILIB__ReadFile(*in_ECX,param_1,param_2,&param_2,param_4);
  if (iVar3 == 0) {
    local_8 = XAPILIB__GetLastError();
    if (local_8 == 0x3e5) {
      local_8 = 0;
    }
    else {
      if (0 < (int)local_8) {
        local_8 = local_8 & 0xffff | 0x80070000;
      }
      if ((int)local_8 < 0) {
        return local_8;
      }
    }
  }
  if ((*(byte *)(in_ECX + 1) & 2) == 0) {
    if (param_3 == (int *)0x0) {
      if (param_2 != iVar1) {
        local_8 = 0x8003001e;
      }
    }
    else {
      *param_3 = param_2;
    }
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x10) != 0)) {
      XAPILIB__SetEvent(*(int *)(iVar2 + 0x10));
    }
  }
  else {
    in_ECX[2] = *(undefined4 *)(iVar2 + 8);
  }
  return local_8;
}
