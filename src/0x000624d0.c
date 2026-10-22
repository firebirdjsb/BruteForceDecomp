/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DA61E0A810227C01BF722B59CBEA96E86D4AF267D71B1F08BE97FE8AE09DE07F
 * Entry: 0x000624d0, Ghidra index: 1057, label: FUN_000624d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000624d0(void)

{
  char cVar1;
  char *in_EAX;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  
  if (in_EAX == (char *)0x0) {
    if ((*(int *)(in_ECX + 4) != 0) && (*(int *)(in_ECX + 8) != 0)) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(int *)(in_ECX + 8));
    }
    *(undefined4 *)(in_ECX + 8) = 0;
    *(undefined4 *)(in_ECX + 0x10) = 0;
    *(undefined4 *)(in_ECX + 0xc) = 0;
  }
  else {
    pcVar7 = *(char **)(in_ECX + 8);
    if (in_EAX != pcVar7) {
      pcVar2 = in_EAX;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      *(int *)(in_ECX + 0xc) = (int)pcVar2 - (int)(in_EAX + 1);
      if (*(int *)(in_ECX + 0x10) <= (int)pcVar2 - (int)(in_EAX + 1)) {
        if ((*(int *)(in_ECX + 4) != 0) && (pcVar7 != (char *)0x0)) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(pcVar7);
        }
        iVar3 = *(int *)(in_ECX + 0xc) + 1;
        *(undefined4 *)(in_ECX + 4) = 1;
        if (iVar3 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = thunk_FUN_002ea01d(iVar3);
        }
        *(undefined4 *)(in_ECX + 8) = uVar4;
        *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(in_ECX + 0xc);
      }
      uVar5 = *(int *)(in_ECX + 0xc) + 1;
      pcVar7 = *(char **)(in_ECX + 8);
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)in_EAX;
        in_EAX = in_EAX + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar7 = *in_EAX;
        in_EAX = in_EAX + 1;
        pcVar7 = pcVar7 + 1;
      }
      return;
    }
  }
  return;
}
