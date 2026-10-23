/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9CA7AF83EB954ECE410F7B38FCABB23CE0D6AE3C6457935041862B8CAE4564E3
 * Entry: 0x001eb0e0, Ghidra index: 6876, label: FUN_001eb0e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001eb0e0(int param_1,code *param_2)

{
  char cVar1;
  undefined4 in_EAX;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  char *in_ECX;
  int in_EDX;
  undefined1 auStack_20 [4];
  undefined1 local_1c [4];
  uint local_18;
  undefined4 local_8;
  uint local_4;
  
  if (in_EDX == 1) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0xf;
    *(undefined1 *)(param_1 + 4) = 0;
    FUN_0001f4f0(in_EAX,0,0xffffffff);
    return param_1;
  }
  local_4 = 0xf;
  local_8 = 0;
  local_18 = local_18 & 0xffffff00;
  FUN_0001f4f0(in_EAX,0,0xffffffff);
  pcVar2 = (char *)(*param_2)();
  if (in_ECX == (char *)0x0) {
    auStack_20[0] = 0x2e;
    iVar4 = FUN_001eb2b0(auStack_20,1);
    if (iVar4 != -1) {
      pcVar3 = pcVar2;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_001eb350(iVar4,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
    }
  }
  else {
    pcVar3 = in_ECX;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    iVar4 = FUN_00078b00(local_1c,in_ECX,(int)pcVar3 - (int)(in_ECX + 1));
    if (iVar4 != -1) {
      do {
        cVar1 = *in_ECX;
        in_ECX = in_ECX + 1;
      } while (cVar1 != '\0');
      pcVar3 = pcVar2;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_000785b0(iVar4,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
    }
  }
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_0001f4f0(local_1c,0,0xffffffff);
  if (local_4 < 0x10) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(local_18);
}
