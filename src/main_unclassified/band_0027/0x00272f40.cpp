/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A3469B79B3949BCCC98560B8AF24DEE980C407BC277B44D029A78C4C9B25351C
 * Entry: 0x00272f40, Ghidra index: 8850, label: FUN_00272f40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_23_23_IMotionPath_0040500c[];
void FUN_00272f40(void)

{
  char cVar1;
  char *pcVar2;
  int *piVar3;
  int in_EAX;
  char *pcVar4;
  undefined4 *unaff_EBX;
  
  pcVar2 = (char *)*unaff_EBX;
  if (pcVar2 == (char *)0x0) {
    *(undefined4 *)(in_EAX + 0x104) = 0;
  }
  else {
    pcVar4 = pcVar2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_0001fed0(pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
    if (*(uint *)(in_EAX + 0x100) < 0x10) {
      *(int *)(in_EAX + 0x104) = in_EAX + 0xec;
    }
    else {
      *(undefined4 *)(in_EAX + 0x104) = *(undefined4 *)(in_EAX + 0xec);
    }
  }
  piVar3 = *(int **)(in_EAX + 0x108);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  piVar3 = (int *)unaff_EBX[1];
  *(int **)(in_EAX + 0x108) = piVar3;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(piVar3);
    piVar3 = *(int **)(in_EAX + 0xe4);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
      *(undefined4 *)(in_EAX + 0xe4) = 0;
    }
    (**(code **)**(undefined4 **)(in_EAX + 0x108))
              (*(undefined4 **)(in_EAX + 0x108),s_23_23_IMotionPath_0040500c,
               (undefined4 *)(in_EAX + 0xe4));
  }
  return;
}
