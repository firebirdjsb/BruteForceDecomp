/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 44867E9B639E964B1876F0583774C3AC5116B42D4A5AF2660DF10AFDA3578D3E
 * Entry: 0x00288d40, Ghidra index: 9121, label: FUN_00288d40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00288d40(char param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  int extraout_ECX;
  char in_stack_00000108;
  int *in_stack_00001c28;
  
  FUN_002ebea0();
  do {
    while( true ) {
      do {
        while( true ) {
          while( true ) {
            iVar3 = FUN_00289140();
            in_stack_00001c28[0x105] = iVar3;
            if (iVar3 == 0x66) {
              return 1;
            }
            if (iVar3 != 0) break;
            piVar6 = in_stack_00001c28 + 4;
            iVar3 = -(int)piVar6;
            do {
              iVar2 = *piVar6;
              (&stack0x00000414 + iVar3)[(int)piVar6] = (char)iVar2;
              piVar6 = (int *)((int)piVar6 + 1);
            } while ((char)iVar2 != '\0');
            uVar4 = FUN_00288b90();
            if (uVar4 == 4) {
              uVar4 = FUN_00288b90();
              if (uVar4 != 0x65) goto LAB_00288dad;
              pcVar7 = &stack0x00000818;
              do {
                cVar1 = *pcVar7;
                pcVar7 = pcVar7 + 1;
              } while (cVar1 != '\0');
              if (pcVar7 == &stack0x00000819) {
                iVar3 = 0;
                do {
                  pcVar7 = &stack0x00000414 + iVar3;
                  (&stack0x00000c1c)[iVar3] = *pcVar7;
                  iVar3 = iVar3 + 1;
                } while (*pcVar7 != '\0');
              }
              else {
                FUN_002eaa19();
              }
              FUN_00288710();
            }
            else {
              if (uVar4 != 0x65) goto LAB_00288dad;
              pcVar7 = &stack0x00000818;
              do {
                cVar1 = *pcVar7;
                pcVar7 = pcVar7 + 1;
              } while (cVar1 != '\0');
              if (pcVar7 == &stack0x00000819) {
                iVar3 = 0;
                do {
                  pcVar7 = &stack0x00000414 + iVar3;
                  (&stack0x00000c1c)[iVar3] = *pcVar7;
                  iVar3 = iVar3 + 1;
                } while (*pcVar7 != '\0');
              }
              else {
                FUN_002eaa19();
              }
              FUN_00288710();
            }
          }
          if (iVar3 != 1) break;
          uVar4 = FUN_00289140();
          in_stack_00001c28[0x105] = uVar4;
          if (uVar4 != 0) goto LAB_00288dad;
          piVar6 = in_stack_00001c28 + 4;
          FUN_002ea78d();
          if ((in_stack_00000108 == '\0') && (param_1 != '\\')) {
            FUN_002ea78d();
            FUN_002eaa19();
          }
          else {
            iVar3 = -(int)piVar6;
            do {
              iVar2 = *piVar6;
              (&stack0x00000c1c + iVar3)[(int)piVar6] = (char)iVar2;
              piVar6 = (int *)((int)piVar6 + 1);
            } while ((char)iVar2 != '\0');
          }
          FUN_00288c20();
          pcVar7 = (char *)in_stack_00001c28[2];
          if (pcVar7 < (char *)(in_stack_00001c28[1] + *in_stack_00001c28)) {
            in_stack_00001c28[3] = (int)*pcVar7;
            in_stack_00001c28[2] = (int)(pcVar7 + 1);
          }
          else {
            in_stack_00001c28[3] = -1;
          }
        }
      } while (iVar3 != 2);
      uVar4 = FUN_00288b90();
      if (uVar4 != 3) break;
      uVar5 = FUN_00288ac0();
      *(undefined4 *)(extraout_ECX + 0xc) = uVar5;
    }
  } while (uVar4 == 0x65);
LAB_00288dad:
  return uVar4 & 0xffffff00;
}
