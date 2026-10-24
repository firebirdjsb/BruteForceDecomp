/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C5A5CFDC01029ED4C25C39855E76A41FE61A1F1E6A08F1BD918B22A71C7EF820
 * Entry: 0x002f1bfa, Ghidra index: 10787, label: __flswbuf
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b69a8;
extern uint32_t DAT_004a8ea0;
/* Library Function - Single Match
    __flswbuf
   
   Library: Visual Studio 2003 Release */

undefined2 __flswbuf(undefined2 param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  piVar3 = param_2;
  uVar1 = param_2[3];
  uVar2 = param_2[4];
  if (((uVar1 & 0x82) == 0) || ((uVar1 & 0x40) != 0)) {
LAB_002f1d10:
    param_2[3] = uVar1 | 0x20;
  }
  else {
    if ((uVar1 & 1) != 0) {
      param_2[1] = 0;
      if ((uVar1 & 0x10) == 0) goto LAB_002f1d10;
      *param_2 = param_2[2];
      param_2[3] = uVar1 & 0xfffffffe;
    }
    uVar1 = param_2[3];
    param_2[3] = uVar1 & 0xffffffef | 2;
    param_2[1] = 0;
    param_2 = (int *)0x0;
    if (((uVar1 & 0x10c) == 0) &&
       (((piVar3 != (int *)&DAT_003b69a8 && (piVar3 != (int *)0x3b69c8)) ||
        (iVar4 = __isatty(uVar2), iVar4 == 0)))) {
      __getbuf(piVar3);
    }
    if ((*(ushort *)(piVar3 + 3) & 0x108) == 0) {
      iVar4 = 2;
      param_2 = (int *)(uintptr_t)(((uint32_t)(uintptr_t)param_2 & UINT32_C(0xffff0000)) | (uint16_t)param_1);
      param_2 = (int *)FUN_002ef4a5(uVar2,&param_2,2);
    }
    else {
      iVar5 = piVar3[2];
      iVar4 = *piVar3;
      *piVar3 = iVar5 + 2;
      iVar4 = iVar4 - iVar5;
      piVar3[1] = piVar3[6] + -2;
      if (iVar4 < 1) {
        if (uVar2 == 0xffffffff) {
          iVar5 = 0x3b6e38;
        }
        else {
          iVar5 = (&DAT_004a8ea0)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 8;
        }
        if ((*(byte *)(iVar5 + 4) & 0x20) != 0) {
          FUN_002ef651(uVar2,0,2);
        }
      }
      else {
        param_2 = (int *)FUN_002ef4a5(uVar2,iVar5,iVar4);
      }
      *(undefined2 *)piVar3[2] = param_1;
    }
    if (param_2 == (int *)iVar4) {
      return param_1;
    }
    piVar3[3] = piVar3[3] | 0x20;
  }
  return 0xffff;
}
