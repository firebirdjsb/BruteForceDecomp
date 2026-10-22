/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BCE4EACBDA883F9B3E20F4B06638BDB3D74C6F2AFA35D8992651B54D08E3EBC4
 * Entry: 0x0033f3bc, Ghidra index: 12646, label: FUN_0033f3bc
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040c798;
undefined4 FUN_0033f3bc(undefined4 *param_1,int param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  char *pcVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 local_8;
  
  local_8 = 0;
  iVar2 = FUN_0033df31(param_3,param_2,&DAT_0040c798,*param_1);
  pcVar3 = param_3;
  if (iVar2 < 0) {
    local_8 = 0xc000009a;
  }
  else {
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    for (puVar4 = (undefined4 *)param_1[1]; puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)*puVar4) {
      pcVar5 = (char *)puVar4[1];
      pcVar7 = pcVar5 + 1;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      pcVar5 = pcVar5 + (1 - (int)pcVar7);
      if (param_3 + param_2 < pcVar3 + (int)pcVar5 + 1) {
        return 0x3c;
      }
      pcVar7 = (char *)puVar4[1];
      pcVar8 = pcVar3;
      for (uVar6 = (uint)pcVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar6 = (uint)pcVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
      pcVar3 = pcVar3 + (int)pcVar5;
    }
    *pcVar3 = '\0';
  }
  return local_8;
}
