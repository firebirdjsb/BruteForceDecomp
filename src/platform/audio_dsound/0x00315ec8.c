/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C070FA14F51D9FCEFC826A552FB5A55D599E474930DAD04DF8F6079492B97A8A
 * Entry: 0x00315ec8, Ghidra index: 12123, label: FUN_00315ec8
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032f7e4;
uint FUN_00315ec8(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  
  uVar2 = *(uint *)(*(int *)(in_ECX + 0xc) + 0xa4);
  FUN_00314d7d(uVar2);
  if ((((uVar2 & 0x200) != 0) && (iVar3 = *(int *)(*(int *)(in_ECX + 0xc) + 0xc), iVar3 != -1)) &&
     (iVar3 = FUN_00315a72(iVar3,0,in_ECX + 0x70,0x118), -1 < iVar3)) {
    if (DAT_0032f7e4 != 0) {
      FUN_00319cd9();
    }
    FUN_0031a1c5();
    puVar1 = (uint *)(in_ECX + 0x80);
    *puVar1 = *puVar1 | 4;
    FUN_003159c9(*(undefined4 *)(*(int *)(in_ECX + 0xc) + 0xc),0x10,puVar1,4,1);
    FUN_003159c9(*(undefined4 *)(*(int *)(in_ECX + 0xc) + 0xc),0x118,in_ECX + 0x188,0x108,1);
    FUN_0031585f(0,0);
  }
  return uVar2;
}
