/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 46CD911A33C45EE13D1493BDF7FB948E6AF136367BAC9D1B4E05AD6BB73F9DC8
 * Entry: 0x002fecca, Ghidra index: 11047, label: ?BuildCatchObject@@YAXPAUEHExceptionRecord@@PAXPBU_s_HandlerType@@PBU_s_CatchableType@@@Z
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ?BuildCatchObject@@YAXPAUEHExceptionRecord@@PAXPBU_s_HandlerType@@PBU_s_CatchableType@@@Z
   
   Library: Visual Studio 2003 Release */

void _BuildCatchObject__YAXPAUEHExceptionRecord__PAXPBU_s_HandlerType__PBU_s_CatchableType___Z
               (int param_1,uint *param_2)

{
  int iVar1;
  void *__src;
  undefined4 uVar2;
  byte *in_ECX;
  int *in_EDX;
  size_t __n;
  
  if (param_2[1] == 0) {
    return;
  }
  if (*(char *)(param_2[1] + 8) == '\0') {
    return;
  }
  if ((param_2[2] == 0) && ((*param_2 & 0x80000000) == 0)) {
    return;
  }
  if (-1 < (int)*param_2) {
    in_EDX = (int *)(param_2[2] + 0xc + (int)in_EDX);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  if ((*param_2 & 8) == 0) {
    if ((*in_ECX & 1) == 0) {
      if (*(int *)(in_ECX + 0x18) == 0) {
        iVar1 = FUN_002ff3a8(uVar2,1);
        if ((iVar1 != 0) && (iVar1 = FUN_002ff3c3(in_EDX,1), iVar1 != 0)) {
          __n = *(size_t *)(in_ECX + 0x14);
          __src = (void *)FUN_002feb17();
          _memmove(in_EDX,__src,__n);
          return;
        }
      }
      else {
        iVar1 = FUN_002ff3a8(uVar2,1);
        if (((iVar1 != 0) && (iVar1 = FUN_002ff3c3(in_EDX,1), iVar1 != 0)) &&
           (iVar1 = FUN_002ff3de(*(undefined4 *)(in_ECX + 0x18)), iVar1 != 0)) {
          if ((*in_ECX & 4) != 0) {
            uVar2 = FUN_002feb17(1);
            FID_conflict___CallMemberFunction1__YGXPAX00_Z
                      (in_EDX,*(undefined4 *)(in_ECX + 0x18),uVar2);
            return;
          }
          uVar2 = FUN_002feb17();
          FID_conflict___CallMemberFunction1__YGXPAX00_Z
                    (in_EDX,*(undefined4 *)(in_ECX + 0x18),uVar2);
          return;
        }
      }
    }
    else {
      iVar1 = FUN_002ff3a8(uVar2,1);
      if ((iVar1 != 0) && (iVar1 = FUN_002ff3c3(in_EDX,1), iVar1 != 0)) {
        _memmove(in_EDX,*(void **)(param_1 + 0x18),*(size_t *)(in_ECX + 0x14));
        if (*(int *)(in_ECX + 0x14) != 4) {
          return;
        }
        if (*in_EDX == 0) {
          return;
        }
        goto LAB_002fed43;
      }
    }
  }
  else {
    iVar1 = FUN_002ff3a8(uVar2,1);
    if ((iVar1 != 0) && (iVar1 = FUN_002ff3c3(in_EDX,1), iVar1 != 0)) {
      *in_EDX = *(int *)(param_1 + 0x18);
LAB_002fed43:
      iVar1 = FUN_002feb17();
      *in_EDX = iVar1;
      return;
    }
  }
  __inconsistency__YAXXZ();
  return;
}
