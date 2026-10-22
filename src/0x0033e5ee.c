/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8CE5C2C46D5BCAD543C02D576749D26788050488AEACE8A651BD308878FA6DCF
 * Entry: 0x0033e5ee, Ghidra index: 12608, label: FUN_0033e5ee
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0033e5ee(int param_1,int param_2,undefined4 *param_3)

{
  char *__src;
  int iVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  
  *param_3 = 0;
  if ((*(byte *)(param_1 + 0xe4) & 1) != 0) {
    pcVar3 = *(char **)(param_1 + 0xa4);
    uVar5 = *(int *)(param_1 + 0xe0) + param_2;
    pcVar4 = pcVar3;
    do {
      while( true ) {
        __src = pcVar4;
        if ((uVar5 < 2) || ((*(byte *)(param_1 + 0xe4) & 1) == 0)) goto LAB_0033e6a1;
        if ((*pcVar3 == '\r') && (pcVar3[1] == '\n')) break;
        pcVar3 = pcVar3 + 1;
        uVar5 = uVar5 - 1;
        pcVar4 = __src;
      }
      *pcVar3 = '\0';
      pcVar3[1] = '\0';
      pcVar3 = pcVar3 + 2;
      uVar5 = uVar5 - 2;
      iVar1 = FUN_0033e449(__src,param_1);
      pcVar4 = pcVar3;
    } while (iVar1 == 0);
    *(uint *)(param_1 + 0xe4) = *(uint *)(param_1 + 0xe4) & 0xfffffffe;
    *param_3 = 1;
    pcVar6 = *(char **)(param_1 + 0xa4);
    for (uVar2 = uVar5 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar5 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar6 = pcVar6 + 1;
    }
    *(uint *)(param_1 + 0xe0) = uVar5;
LAB_0033e6a1:
    if ((*(byte *)(param_1 + 0xe4) & 1) != 0) {
      *(char **)(param_1 + 0xe0) = pcVar3 + (uVar5 - (int)__src);
      _memmove(*(void **)(param_1 + 0xa4),__src,(size_t)(pcVar3 + (uVar5 - (int)__src)));
    }
  }
  return 0;
}
