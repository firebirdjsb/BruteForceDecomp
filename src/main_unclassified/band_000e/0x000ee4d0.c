/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 56CA024BFA59ADFC958785E0908F93889231D79F3F61A49B56631BC631029A8B
 * Entry: 0x000ee4d0, Ghidra index: 2961, label: FUN_000ee4d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_000ee4d0(char param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *in_EAX;
  undefined1 uVar9;
  undefined4 *in_EDX;
  char *unaff_ESI;
  
  uVar9 = 0;
  if (*unaff_ESI == '\0') {
    if (*param_2 == *param_3) {
      if (param_1 != '\0') {
        uVar2 = in_EDX[1];
        uVar3 = in_EDX[2];
        uVar4 = in_EDX[3];
        uVar1 = in_EDX[8];
        uVar5 = in_EDX[4];
        uVar6 = in_EDX[5];
        uVar7 = in_EDX[6];
        uVar8 = in_EDX[7];
        *in_EAX = *in_EDX;
        in_EAX[1] = uVar2;
        in_EAX[2] = uVar3;
        in_EAX[3] = uVar4;
        in_EAX[8] = uVar1;
        in_EAX[4] = uVar5;
        in_EAX[5] = uVar6;
        in_EAX[6] = uVar7;
        in_EAX[7] = uVar8;
        *unaff_ESI = '\x01';
        return 0;
      }
      uVar2 = in_EAX[1];
      uVar3 = in_EAX[2];
      uVar4 = in_EAX[3];
      uVar1 = in_EAX[8];
      uVar5 = in_EAX[4];
      uVar6 = in_EAX[5];
      uVar7 = in_EAX[6];
      uVar8 = in_EAX[7];
      *in_EDX = *in_EAX;
      in_EDX[1] = uVar2;
      in_EDX[2] = uVar3;
      in_EDX[3] = uVar4;
      in_EDX[8] = uVar1;
      in_EDX[4] = uVar5;
      in_EDX[5] = uVar6;
      in_EDX[6] = uVar7;
      in_EDX[7] = uVar8;
      uVar9 = 1;
      *unaff_ESI = '\x01';
    }
  }
  return uVar9;
}
