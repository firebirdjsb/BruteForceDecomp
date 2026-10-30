/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B64CA2B9C5EC6683CD0A5E18125B9AF8700D4C477C54DD788D3C7A5FC7475DE3
 * Entry: 0x00047730, Ghidra index: 559, label: FUN_00047730
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0001c5d0(void);
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern int FUN_00140a60(int param_1,int *param_2);

void FUN_00047730(float param_1)

{
  int *piVar1;
  int *piVar2;
  int in_EAX;
  int iVar3;
  undefined4 *unaff_EDI;
  
  unaff_EDI[5] = param_1 + (float)unaff_EDI[5];
  switch(*unaff_EDI) {
  case 0:
    if (*(int *)(*(int *)(in_EAX + 0x358) + 8) != 0) {
      piVar1 = *(int **)(*(int *)(in_EAX + 0x358) + 4);
      piVar2 = (int *)*piVar1;
      if (piVar2 != piVar1) {
        while ((piVar2[0x1c] != 1 || (((uint)piVar2[0x23] >> 2 & 1) == 0))) {
          FUN_0001c5d0();
          if (piVar2 == piVar1) {
            return;
          }
        }
        *unaff_EDI = 1;
        return;
      }
    }
    break;
  case 1:
    iVar3 = FUN_000120f0();
    *(undefined4 *)(iVar3 + 0x578) = 0x41a00000;
    if (*(int *)(*(int *)(in_EAX + 0x358) + 8) == 0) {
      *unaff_EDI = 0;
    }
    if ((float)unaff_EDI[5] < 5.0) {
      *unaff_EDI = 2;
      FUN_00140a60(*(undefined4 *)(*(int *)(iVar3 + 8) + 0xbe8),iVar3,0xe8d6caf7,0);
      return;
    }
    break;
  case 2:
    iVar3 = FUN_000120f0();
    *(undefined4 *)(iVar3 + 0x578) = 0x41a00000;
    if (5.0 <= (float)unaff_EDI[5]) {
      *unaff_EDI = 1;
    }
    if (*(int *)(*(int *)(in_EAX + 0x358) + 8) == 0) {
      *unaff_EDI = 0;
      return;
    }
    break;
  case 3:
    iVar3 = FUN_000120f0();
    *(undefined4 *)(iVar3 + 0x578) = 0x41a00000;
  }
  return;
}
