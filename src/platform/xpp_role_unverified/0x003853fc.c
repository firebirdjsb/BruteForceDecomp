/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7BE0D53DFDF5E8C31F378CEB8E66235E226F1B72263B05E4CAB711551BC2E7A3
 * Entry: 0x003853fc, Ghidra index: 13669, label: FUN_003853fc
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a8fc0;
void FUN_003853fc(void)

{
  bool bVar1;
  uint uVar2;
  int in_EDX;
  int iVar3;
  
  bVar1 = false;
  do {
    uVar2 = *(uint *)(in_EDX + 8) & 0xfffffff0;
    if (uVar2 == 0) {
      return;
    }
    iVar3 = DAT_004a8fc0 + uVar2;
    if (uVar2 == *(uint *)(in_EDX + 4)) {
      *(undefined4 *)(in_EDX + 4) = 0;
      *(uint *)(in_EDX + 8) = *(uint *)(in_EDX + 8) & 0xf;
      FUN_00384a53(iVar3);
      bVar1 = true;
    }
    else {
      *(byte *)(iVar3 + 3) = *(byte *)(iVar3 + 3) | 0xf0;
      *(uint *)(in_EDX + 8) =
           (*(uint *)(iVar3 + 8) ^ *(uint *)(in_EDX + 8)) & 0xf ^ *(uint *)(iVar3 + 8);
      FUN_0038524e();
    }
  } while (!bVar1);
  return;
}
