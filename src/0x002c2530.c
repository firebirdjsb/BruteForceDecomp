/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 768031773DC47284A6EB2AFD03A23E9C6DD05455E305C06FB7D633D05F890A8C
 * Entry: 0x002c2530, Ghidra index: 10037, label: FUN_002c2530
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b86e0;
uint * FUN_002c2530(undefined4 param_1)

{
  uint in_EAX;
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  float local_18 [4];
  uint *local_8;
  
  local_8 = (uint *)(in_EAX & 0xfffffff0) + ((*(uint *)(in_EAX & 0xfffffff0) & 0xfff) + 1) * -4;
  uVar2 = local_8[3];
  FUN_002ebea0();
  puVar5 = (undefined4 *)&stack0xffffffdc;
  for (uVar1 = (uint)(int)(short)uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  for (uVar2 = (int)(short)uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  puVar6 = local_8 + (*(uint *)(in_EAX & 0xfffffff0) >> 0xc & 0xfff) * 4 + 5;
  do {
    (&stack0xffffffdc)[*(uint *)((uint)puVar6 & 0xfffffff0) & 0xfff] = 1;
    FUN_002cd2b0(param_1);
    iVar4 = 0;
    puVar3 = puVar6;
    while ((0.0 < local_18[iVar4] ||
           ((&stack0xffffffdc)
            [*(uint *)((uint)(puVar3 + ((int)(*puVar3 << 1) >> 0x11)) & 0xfffffff0) & 0xfff] != '\0'
           ))) {
      puVar3 = (uint *)((int)puVar3 + *(int *)(&DAT_003b86e0 + ((uint)puVar3 & 0xc)));
      iVar4 = iVar4 + 1;
      if (2 < iVar4) {
        return puVar6;
      }
    }
    puVar6 = puVar3 + ((int)(*puVar3 << 1) >> 0x11);
  } while( true );
}
