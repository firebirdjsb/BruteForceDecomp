/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 107857E3EDD8242F0C56BFE62A5034AE4A6C822D32B240BD6DD31E4CD6A77985
 * Entry: 0x000e0b20, Ghidra index: 2755, label: FUN_000e0b20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched callee draft declaration only; original Xbox ABI_UNVERIFIED. */
extern void FUN_002f254a(void);
uint FUN_000e0b20(uint param_1,byte *param_2,uint param_3)

{
  uint in_EAX;
  uint uVar1;
  uint uVar2;
  int in_ECX;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  bool bVar6;
  
  if (*(uint *)(in_ECX + 0x14) < param_1) {
    FUN_002f254a();
  }
  uVar1 = *(int *)(in_ECX + 0x14) - param_1;
  if (uVar1 < in_EAX) {
    in_EAX = uVar1;
  }
  if (in_EAX != 0) {
    uVar1 = in_EAX;
    if (param_3 <= in_EAX) {
      uVar1 = param_3;
    }
    if (*(uint *)(in_ECX + 0x18) < 0x10) {
      iVar3 = in_ECX + 4;
    }
    else {
      iVar3 = *(int *)(in_ECX + 4);
    }
    bVar5 = false;
    uVar2 = 0;
    bVar6 = true;
    pbVar4 = (byte *)(iVar3 + param_1);
    do {
      if (uVar1 == 0) break;
      uVar1 = uVar1 - 1;
      bVar5 = *pbVar4 < *param_2;
      bVar6 = *pbVar4 == *param_2;
      pbVar4 = pbVar4 + 1;
      param_2 = param_2 + 1;
    } while (bVar6);
    if (!bVar6) {
      uVar2 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
    }
    if (uVar2 != 0) {
      return uVar2;
    }
  }
  if (param_3 <= in_EAX) {
    return (uint)(in_EAX != param_3);
  }
  return 0xffffffff;
}
